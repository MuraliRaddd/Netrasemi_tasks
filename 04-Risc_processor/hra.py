#!/usr/bin/env python3
"""
hra.py - HighRISC assembler (replacement for Hra.exe)

Encodes .txt assembly source into a Quartus .mif file, per the bit
layouts in InstructionSetPkg.sv and the ISA document (Tables 2 & 3):

R-type (MOVE, NAND, NOR, ROL, ROR, ADC, SUB, DIV, MOD, MUL, MUH, LOAD, STORE):
    [15:12] Opcode   [11:6] Dest (RegA)   [5:0] Src (RegB)

I-type (LIL, LIU):
    [15:12] Opcode   [11:6] Dest   [5:0] Immediate (raw 6-bit value)
    (same physical layout as R-type; confirmed against Hra's own
    ground-truth output for addTwoValues.txt - e.g. LIU R0,0x38 = 0x9038)

J-type (JR):
    [15:12] Opcode=0000   [11:9] Condition   [8:0] Offset (9-bit signed)

Output .mif format mirrors Hra.exe's own annotated style:
    addr : data; -- @addr MNEMONIC operands // original inline comment
with source comment-only/blank lines reproduced in place, and a header
block matching Hra's DEPTH/WIDTH/ADDRESS_RADIX/DATA_RADIX layout.

Unlike Hra, the appended end-of-memory trailer is a genuine, 2-word
self-referencing halt trap (JR A,-1 + MOVE R0,R0 delay-slot filler)
rather than a chain of forward JR A,1 instructions that eventually
wraps at the end of memory and silently re-runs the whole program.

Usage:
    python3 hra.py -i input.txt -o Program.mif -m 0xFFFF [--depth 16384]
"""

import argparse
import re
import sys

OPCODES = {
    "JR": 0, "LOAD": 1, "STORE": 2, "MOVE": 3, "NAND": 4, "NOR": 5,
    "ROL": 6, "ROR": 7, "LIL": 8, "LIU": 9, "ADC": 10, "SUB": 11,
    "DIV": 12, "MOD": 13, "MUL": 14, "MUH": 15,
}

CONDITIONS = {
    "C": 0, "Z": 1, "N": 2, "P": 3, "V": 4, "NC": 5, "NZ": 6, "A": 7,
}

R_TYPE = {"LOAD", "STORE", "MOVE", "NAND", "NOR", "ROL", "ROR",
          "ADC", "SUB", "DIV", "MOD", "MUL", "MUH"}
I_TYPE = {"LIL", "LIU"}
J_TYPE = {"JR"}

SPECIAL_REGS = {"PC": 63, "FL": 62}
SPECIAL_REG_NAMES = {63: "PC", 62: "FL"}

COMMENT_PAD = " " * 24   # matches Hra's own header/comment-line indentation


class AsmError(Exception):
    def __init__(self, line_no, raw_line, msg):
        super().__init__(f"Line {line_no}: {msg}\n    {raw_line.strip()}")


def split_comment(line: str):
    """Return (code_part, comment_part_including_slashes_or_None)."""
    idx = line.find("//")
    if idx == -1:
        return line, None
    return line[:idx], line[idx:].rstrip("\n").rstrip("\r")


def reg_name(n: int) -> str:
    return SPECIAL_REG_NAMES.get(n, f"R{n}")


def parse_register(tok: str, line_no: int, raw_line: str) -> int:
    tok = tok.strip().strip("()").strip()
    up = tok.upper()
    if up in SPECIAL_REGS:
        return SPECIAL_REGS[up]
    m = re.fullmatch(r"R(\d+)", up)
    if not m:
        raise AsmError(line_no, raw_line, f"Invalid register '{tok}'")
    n = int(m.group(1))
    if not (0 <= n <= 62):
        raise AsmError(line_no, raw_line, f"Register out of range: R{n}")
    return n


def parse_immediate(tok: str, line_no: int, raw_line: str) -> int:
    tok = tok.strip()
    try:
        if tok.lower().startswith("0x"):
            return int(tok, 16)
        return int(tok, 10)
    except ValueError:
        raise AsmError(line_no, raw_line, f"Invalid immediate/offset '{tok}'")


def encode_r_type(opcode: int, dest: int, src: int) -> int:
    return (opcode << 12) | ((dest & 0x3F) << 6) | (src & 0x3F)


def encode_i_type(opcode: int, dest: int, imm: int) -> int:
    # Same field shape as R-type: Dest in bits[11:6], literal 6-bit
    # immediate in bits[5:0] (two's complement for negative values).
    return (opcode << 12) | ((dest & 0x3F) << 6) | (imm & 0x3F)


def encode_j_type(cond: int, offset: int) -> int:
    if not (-256 <= offset <= 255):
        raise ValueError(f"Offset {offset} out of range (-256..255)")
    off9 = offset & 0x1FF            # 9-bit two's complement
    return (0 << 12) | ((cond & 0x7) << 9) | off9


def assemble(lines):
    """
    Returns a list of "events" describing each output line, in source order:
        ("blank",)
        ("comment", text)                                  -- comment-only source line
        ("instr", word, mnemonic, operand_repr, comment)    -- assembled instruction
    """
    events = []
    for line_no, raw_line in enumerate(lines, start=1):
        code_part, comment = split_comment(raw_line)
        code = code_part.strip()

        if not code:
            if comment is not None:
                events.append(("comment", comment))
            else:
                events.append(("blank",))
            continue

        parts = code.split(None, 1)
        mnemonic = parts[0].upper()
        operand_str = parts[1] if len(parts) > 1 else ""
        operands = [o.strip() for o in operand_str.split(",")] if operand_str else []

        if mnemonic not in OPCODES:
            raise AsmError(line_no, raw_line, f"Unsupported opcode '{mnemonic}'")
        opcode = OPCODES[mnemonic]

        if mnemonic in J_TYPE:
            if len(operands) != 2:
                raise AsmError(line_no, raw_line, "JR requires <condition>,<offset>")
            cond_tok = operands[0].upper()
            if cond_tok not in CONDITIONS:
                raise AsmError(line_no, raw_line, f"Invalid condition '{operands[0]}'")
            cond = CONDITIONS[cond_tok]
            offset = parse_immediate(operands[1], line_no, raw_line)
            try:
                word = encode_j_type(cond, offset)
            except ValueError as e:
                raise AsmError(line_no, raw_line, str(e))
            operand_repr = f"{cond_tok},{offset}"

        elif mnemonic in I_TYPE:
            if len(operands) != 2:
                raise AsmError(line_no, raw_line, f"{mnemonic} requires <Dest>,<Immediate>")
            dest = parse_register(operands[0], line_no, raw_line)
            imm = parse_immediate(operands[1], line_no, raw_line)
            word = encode_i_type(opcode, dest, imm)
            operand_repr = f"{reg_name(dest)},0x{imm & 0xFFFF:04X}"

        elif mnemonic in R_TYPE:
            if len(operands) != 2:
                raise AsmError(line_no, raw_line, f"{mnemonic} requires <Dest>,<Src>")
            dest = parse_register(operands[0], line_no, raw_line)
            src = parse_register(operands[1], line_no, raw_line)
            word = encode_r_type(opcode, dest, src)
            operand_repr = f"{reg_name(dest)},{reg_name(src)}"

        else:
            raise AsmError(line_no, raw_line, f"Unhandled opcode class for '{mnemonic}'")

        events.append(("instr", word, mnemonic, operand_repr, comment))

    return events


def append_halt_trap(events):
    """
    Append a self-referencing halt trap after the assembled program:

        JR A, -1        // jump back to this same instruction
        MOVE R0, R0     // delay-slot filler - executes every pass, but inert

    Offset is relative to the NEXT instruction address, so JR A,-1 at
    address X targets (X+1) + (-1) = X, i.e. itself. Unlike a chain of
    forward JR A,1 instructions, this never advances past X and X+1, so
    it can't wrap at the end of memory and re-run the real program.
    """
    jr_word = encode_j_type(CONDITIONS["A"], -1)
    move_word = encode_r_type(OPCODES["MOVE"], 0, 0)
    events.append(("blank",))
    events.append(("comment", "// Auto-appended halt trap (not present in source)"))
    events.append(("instr", jr_word, "JR", "A,-1", "// jump back to self"))
    events.append(("instr", move_word, "MOVE", "R0,R0", "// delay-slot filler, inert"))
    return events


def write_mif(events, out_path, depth, fill):
    instr_count = sum(1 for e in events if e[0] == "instr")
    if instr_count > depth:
        raise SystemExit(
            f"Error: program has {instr_count} instructions but DEPTH={depth}. "
            f"Increase --depth or shorten the program."
        )

    addr = 0
    body_lines = []
    for e in events:
        if e[0] == "blank":
            body_lines.append("")
        elif e[0] == "comment":
            body_lines.append(f"{COMMENT_PAD}--{e[1]}")
        else:  # instr
            _, word, mnemonic, operand_repr, comment = e
            suffix = f" {comment}" if comment else " "
            body_lines.append(
                f"{addr:04x} : {word:04x}; -- @{addr:04x} {mnemonic} {operand_repr}{suffix}"
            )
            addr += 1

    with open(out_path, "w", newline="\n") as f:
        f.write("-- Produced by: HighRISC Python Assembler (hra.py)\n")
        f.write("--\n")
        f.write(f"DEPTH = {depth};           -- The size of memory in words\n")
        f.write("WIDTH = 16;             -- The size of data in bits\n")
        f.write("ADDRESS_RADIX = HEX;    -- The radix for address values\n")
        f.write("DATA_RADIX = HEX;       -- The radix for data values\n")
        f.write("CONTENT                 -- start of (address : data pairs)\n")
        f.write("BEGIN\n")

        for line in body_lines:
            f.write(line + "\n")

        # Pad remaining, unreachable memory with the fill value.
        for a in range(addr, depth):
            f.write(f"{a:04x} : {fill:04x}; -- unused (unreachable past halt trap)\n")

        f.write("END;\n")


def main():
    ap = argparse.ArgumentParser(description="HighRISC assembler (Hra.exe replacement)")
    ap.add_argument("-i", dest="infile", required=True, help="Input assembly .txt file")
    ap.add_argument("-o", dest="outfile", required=True, help="Output .mif file")
    ap.add_argument("-m", dest="fill", default="0xFFFF",
                     help="Padding value for memory beyond the halt trap (default 0xFFFF). "
                          "Never executed - PC can't reach it once the trap is entered.")
    ap.add_argument("--depth", type=int, default=16384, help="Memory depth in words (default 16384 = 0x4000)")
    args = ap.parse_args()

    fill = int(args.fill, 16) if args.fill.lower().startswith("0x") else int(args.fill)

    with open(args.infile, "r", encoding="utf-8-sig") as f:
        lines = f.readlines()

    try:
        events = assemble(lines)
    except AsmError as e:
        print(f"Syntax error: {e}", file=sys.stderr)
        sys.exit(1)

    events = append_halt_trap(events)

    instr_events = [e for e in events if e[0] == "instr"]
    print(f"Assembled {len(instr_events)} instructions (incl. 2-word halt trap):")
    addr = 0
    for e in events:
        if e[0] == "instr":
            _, word, mnemonic, operand_repr, comment = e
            tail = f"  {comment}" if comment else ""
            print(f"  {addr:04X}  0x{word:04X}   {mnemonic} {operand_repr}{tail}")
            addr += 1

    write_mif(events, args.outfile, args.depth, fill)
    print(f"\nWrote {args.outfile} ({len(instr_events)} instructions, depth={args.depth}, fill=0x{fill:04X})")


if __name__ == "__main__":
    main()
