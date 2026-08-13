// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VHighRiscTb__Syms.h"


VL_ATTR_COLD void VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Ibus__0(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VHighRiscTb___024root__trace_init_sub__TOP__InstructionSetPkg__0(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VHighRiscTb___024root__trace_init_sub__TOP__assertionmath__0(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VHighRiscTb___024root__trace_init_sub__TOP__0(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_init_sub__TOP__0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "HighRiscTb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+155,0,"CLOCK_50",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+156,0,"SW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+157,0,"KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+158,0,"tbClk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+116,0,"WriteAssertEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+117,0,"DataAssertVal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+178,0,"AddrAssert",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+159,0,"ClockCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+179,0,"SWRead1Thres",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+180,0,"SWRead2Thres",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+160,0,"SWRead1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+161,0,"SWRead2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"OutVal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "check_1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+155,0,"SampleClk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+116,0,"WriteAssertEnable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+118,0,"DataAssertVal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+160,0,"SWRead1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+161,0,"SWRead2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"OutVal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "DataVal", VerilatedTracePrefixType::STRUCT_UNPACKED, 6, 0);
    VL_TRACE_DECL_BUS(tracep,c+73,0,"out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+74,0,"Overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+75,0,"Parity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+76,0,"Negative",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+77,0,"Zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"Carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "uut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+155,0,"CLOCK_50",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+157,0,"KEY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+156,0,"SW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"LEDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BIT(tracep,c+162,0,"VGA_CLK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+94,0,"VGA_BLANK_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+95,0,"VGA_SYNC_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+96,0,"VGA_HS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+97,0,"VGA_VS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+163,0,"VGA_R",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+164,0,"VGA_G",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+165,0,"VGA_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+116,0,"WriteAssertEnable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+117,0,"DataAssertVal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"LEDs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+166,0,"Reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+155,0,"Clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+181,0,"Addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+167,0,"SlaveReadData3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "DMux", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+119,0,"Addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"SlaveData1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+168,0,"SlaveData2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+167,0,"SlaveData3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+169,0,"ReadData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+120,0,"InUseBlock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "Dbus", VerilatedTracePrefixType::SCOPE_INTERFACE, 0, 0);
    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "IMux", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"Addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+90,0,"SlaveData1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+182,0,"SlaveData2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+183,0,"SlaveData3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+121,0,"ReadData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+99,0,"InUseBlock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "Ibus", VerilatedTracePrefixType::SCOPE_INTERFACE, 0, 0);
    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Ibus__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "Pmux", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+119,0,"Addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+170,0,"PortData1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+184,0,"PortData2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+167,0,"ReadData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+122,0,"InUsePort",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iDataMemory", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+185,0,"SlaveAddrWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+155,0,"Clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "TheBus", VerilatedTracePrefixType::SCOPE_INTERFACE, 0, 0);
    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iI", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+155,0,"Clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+170,0,"BusPort",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "TheBus", VerilatedTracePrefixType::SCOPE_INTERFACE, 0, 0);
    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iO", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+155,0,"Clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"BusPort",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "TheBus", VerilatedTracePrefixType::SCOPE_INTERFACE, 0, 0);
    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iProcesor", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+155,0,"Clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+166,0,"Reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+123,0,"OpCode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+124,0,"AluResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+125,0,"SourceDataA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+126,0,"SourceDataB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+127,0,"ImmediateData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+128,0,"RfWriteEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+129,0,"RegA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+130,0,"RegB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+171,0,"RfReadDataA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+172,0,"RfReadDataB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+131,0,"PcWriteEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+132,0,"PcOffsetEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"PcAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+133,0,"PcOffsetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BIT(tracep,c+134,0,"FlagsWriteEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+91,0,"Flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+135,0,"NextFlags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+186,0,"MemWriteEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"WriteData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "Dbus", VerilatedTracePrefixType::SCOPE_INTERFACE, 0, 0);
    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "Ibus", VerilatedTracePrefixType::SCOPE_INTERFACE, 0, 0);
    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Ibus__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iALU", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+123,0,"Operation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+91,0,"InFlags",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+135,0,"OutFlags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+127,0,"InImm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+136,0,"InSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+137,0,"InDest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+138,0,"OutDest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+139,0,"temp_carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+140,0,"parity_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BUS(tracep,c+141,0,"nInSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+142,0,"full_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iAluMuxA", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+129,0,"SourceAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+171,0,"RegisterFileData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"ProgramCounter",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+187,0,"Flags",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+125,0,"SelectedValue",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iAluMuxB", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+130,0,"SourceAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+172,0,"RegisterFileData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"ProgramCounter",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+188,0,"Flags",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+126,0,"SelectedValue",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iDecoder", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+121,0,"Instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+91,0,"Flags",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+123,0,"OpCode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+129,0,"RegA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+130,0,"RegB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+127,0,"ImmediateData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+128,0,"RfWriteEnable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+131,0,"PcWriteEnable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+132,0,"PcOffsetEnable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+133,0,"PcOffsetValue",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BIT(tracep,c+134,0,"FlagsWriteEnable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+116,0,"MemWriteEnable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+92,0,"ExtFlags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iFlags", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+189,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+155,0,"Clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+166,0,"Reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"LoadValue",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+134,0,"LoadEnable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+135,0,"NextFlags",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+91,0,"Flags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iPC", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+155,0,"Clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+166,0,"Reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+174,0,"LoadValue",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+131,0,"LoadEnable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+133,0,"Offset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BIT(tracep,c+132,0,"OffsetEnable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+100,0,"CounterValue",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+175,0,"nextCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+143,0,"enables",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iRF", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+190,0,"REG_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+191,0,"REGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+192,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+155,0,"Clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+129,0,"AddressA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"WriteData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+128,0,"WriteEnable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+130,0,"AddressB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+171,0,"ReadDataA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+172,0,"ReadDataB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+176,0,"nextWriteA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iProgramMemory", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+185,0,"SlaveAddrWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+155,0,"Clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "TheBus", VerilatedTracePrefixType::SCOPE_INTERFACE, 0, 0);
    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Ibus__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iVga", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+155,0,"CLOCK_50",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+166,0,"Reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+94,0,"VGA_BLANK_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+95,0,"VGA_SYNC_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+96,0,"VGA_HS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+97,0,"VGA_VS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+163,0,"VGA_R",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+164,0,"VGA_G",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+165,0,"VGA_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"PixelPair",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"Pixel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+101,0,"nextX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+102,0,"nextY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_PUSH_PREFIX(tracep, "TheBus", VerilatedTracePrefixType::SCOPE_INTERFACE, 0, 0);
    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iControl", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+155,0,"Clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+166,0,"Reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+94,0,"blank_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+95,0,"sync_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+96,0,"hSync_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+97,0,"vSync_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+101,0,"nextX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+102,0,"nextY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+103,0,"hCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+104,0,"vCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "InstructionSetPkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VHighRiscTb___024root__trace_init_sub__TOP__InstructionSetPkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "assertionmath", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VHighRiscTb___024root__trace_init_sub__TOP__assertionmath__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_init_sub__TOP__assertionmath__0(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_init_sub__TOP__assertionmath__0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+79,0,"temp_carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+80,0,"parity_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BUS(tracep,c+193,0,"nInSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+194,0,"full_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "expFlags", VerilatedTracePrefixType::STRUCT_UNPACKED, 6, 0);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+82,0,"Overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+83,0,"Parity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+84,0,"Negative",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+85,0,"Zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+86,0,"Carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_init_sub__TOP__InstructionSetPkg__0(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_init_sub__TOP__InstructionSetPkg__0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+189,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+195,0,"ImmediateWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+195,0,"ImmediateMidStart",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+196,0,"ImmediateHighStart",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+189,0,"AddressWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+195,0,"RfAddressWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+189,0,"MemAddressWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+197,0,"OffsetWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+198,0,"OpCodeStart",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+199,0,"OpCodeSize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+195,0,"RegAStart",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+195,0,"RegASize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+200,0,"RegBStart",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+195,0,"RegBSize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_init_dtype____1(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VHighRiscTb___024root__trace_init_dtype____2(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Ibus__0(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Ibus__0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+201,0,"Blocks",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+201,0,"Ports",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"Address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+121,0,"ReadData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+184,0,"WriteData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+202,0,"WriteEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+105,0,"SlaveAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);

    VHighRiscTb___024root__trace_init_dtype____1(vlSelf, tracep, "SlaveReadData", 0, c+0, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+90,0,"SlaveReadData0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+203,0,"SlaveReadData1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+106,0,"SlaveWriteEnable0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+107,0,"SlaveWriteEnable1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+108,0,"SlaveWriteEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+109,0,"BlockInUse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+110,0,"PortAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,0);

    VHighRiscTb___024root__trace_init_dtype____2(vlSelf, tracep, "PortReadData", 0, c+4, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+204,0,"PortReadData0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+205,0,"PortReadData1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_QUAD(tracep,c+111,0,"PortWriteEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 32,0);
    VL_TRACE_DECL_BIT(tracep,c+113,0,"PortWriteEnable0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+114,0,"PortWriteEnable1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+115,0,"PortInUse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_init_dtype_sub____1(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VHighRiscTb___024root__trace_init_dtype____1(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_init_dtype____1\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VHighRiscTb___024root__trace_init_dtype_sub____1(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_init_dtype_sub____1(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_init_dtype_sub____1\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 15,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_init_dtype_sub____2(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VHighRiscTb___024root__trace_init_dtype____2(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_init_dtype____2\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VHighRiscTb___024root__trace_init_dtype_sub____2(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_init_dtype_sub____2(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_init_dtype_sub____2\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 31);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 15,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+201,0,"Blocks",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+201,0,"Ports",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+119,0,"Address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+169,0,"ReadData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+126,0,"WriteData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+116,0,"WriteEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+144,0,"SlaveAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);

    VHighRiscTb___024root__trace_init_dtype____1(vlSelf, tracep, "SlaveReadData", 0, c+36, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"SlaveReadData0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+168,0,"SlaveReadData1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+145,0,"SlaveWriteEnable0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+146,0,"SlaveWriteEnable1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+147,0,"SlaveWriteEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"BlockInUse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+149,0,"PortAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,0);

    VHighRiscTb___024root__trace_init_dtype____2(vlSelf, tracep, "PortReadData", 0, c+40, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+170,0,"PortReadData0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+184,0,"PortReadData1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_QUAD(tracep,c+150,0,"PortWriteEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 32,0);
    VL_TRACE_DECL_BIT(tracep,c+152,0,"PortWriteEnable0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+153,0,"PortWriteEnable1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+154,0,"PortInUse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_init_top(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_init_top\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VHighRiscTb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VHighRiscTb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VHighRiscTb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VHighRiscTb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VHighRiscTb___024root__trace_register(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_register\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VHighRiscTb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&VHighRiscTb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&VHighRiscTb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&VHighRiscTb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_const_0_sub_0(VHighRiscTb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VHighRiscTb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_const_0\n"); );
    // Body
    VHighRiscTb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VHighRiscTb___024root*>(voidSelf);
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VHighRiscTb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_const_0_sub_0(VHighRiscTb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_const_0_sub_0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullSData(oldp+178,(vlSelfRef.HighRiscTb__DOT__AddrAssert),16);
    bufp->fullIData(oldp+179,(7U),32);
    bufp->fullIData(oldp+180,(9U),32);
    bufp->fullSData(oldp+181,(vlSelfRef.HighRiscTb__DOT__uut__DOT__Addr),16);
    bufp->fullSData(oldp+182,(vlSelfRef.HighRiscTb__DOT__uut__DOT__IMux__DOT__SlaveData2),16);
    bufp->fullSData(oldp+183,(vlSelfRef.HighRiscTb__DOT__uut__DOT__IMux__DOT__SlaveData3),16);
    bufp->fullSData(oldp+184,(0U),16);
    bufp->fullIData(oldp+185,(0x0000000eU),32);
    bufp->fullBit(oldp+186,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__MemWriteEnable));
    bufp->fullCData(oldp+187,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iAluMuxA__DOT__Flags),5);
    bufp->fullCData(oldp+188,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iAluMuxB__DOT__Flags),5);
    bufp->fullIData(oldp+189,(0x00000010U),32);
    bufp->fullIData(oldp+190,(0x00000010U),32);
    bufp->fullIData(oldp+191,(0x00000040U),32);
    bufp->fullIData(oldp+192,(6U),32);
    bufp->fullSData(oldp+193,(vlSymsp->TOP__assertionmath.__PVT__nInSrc),16);
    bufp->fullIData(oldp+194,(vlSymsp->TOP__assertionmath.__PVT__full_product),32);
    bufp->fullIData(oldp+195,(6U),32);
    bufp->fullIData(oldp+196,(0x0000000bU),32);
    bufp->fullIData(oldp+197,(9U),32);
    bufp->fullIData(oldp+198,(0x0000000cU),32);
    bufp->fullIData(oldp+199,(4U),32);
    bufp->fullIData(oldp+200,(0U),32);
    bufp->fullIData(oldp+201,(2U),32);
    bufp->fullBit(oldp+202,(0U));
    bufp->fullSData(oldp+203,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.SlaveReadData1),16);
    bufp->fullSData(oldp+204,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.PortReadData0),16);
    bufp->fullSData(oldp+205,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.PortReadData1),16);
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_full_0_sub_0(VHighRiscTb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VHighRiscTb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_full_0\n"); );
    // Body
    VHighRiscTb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VHighRiscTb___024root*>(voidSelf);
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VHighRiscTb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_full_dtype____0(VHighRiscTb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 4>& __VdtypeVar);
VL_ATTR_COLD void VHighRiscTb___024root__trace_full_dtype____1(VHighRiscTb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 32>& __VdtypeVar);

VL_ATTR_COLD void VHighRiscTb___024root__trace_full_0_sub_0(VHighRiscTb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_full_0_sub_0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VHighRiscTb___024root__trace_full_dtype____0(vlSelf, bufp, 0, vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__SlaveReadData);
    VHighRiscTb___024root__trace_full_dtype____1(vlSelf, bufp, 4, vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData);
    VHighRiscTb___024root__trace_full_dtype____0(vlSelf, bufp, 36, vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__SlaveReadData);
    VHighRiscTb___024root__trace_full_dtype____1(vlSelf, bufp, 40, vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData);
    bufp->fullSData(oldp+72,(vlSelfRef.HighRiscTb__DOT__OutVal),16);
    bufp->fullSData(oldp+73,(vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal
                             .__PVT__out),16);
    bufp->fullBit(oldp+74,(vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal
                           .__PVT__Overflow));
    bufp->fullBit(oldp+75,(vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal
                           .__PVT__Parity));
    bufp->fullBit(oldp+76,(vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal
                           .__PVT__Negative));
    bufp->fullBit(oldp+77,(vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal
                           .__PVT__Zero));
    bufp->fullBit(oldp+78,(vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal
                           .__PVT__Carry));
    bufp->fullBit(oldp+79,(vlSymsp->TOP__assertionmath.temp_carry));
    bufp->fullBit(oldp+80,(vlSymsp->TOP__assertionmath.parity_sum));
    bufp->fullSData(oldp+81,(vlSymsp->TOP__assertionmath.expFlags
                             .__PVT__out),16);
    bufp->fullBit(oldp+82,(vlSymsp->TOP__assertionmath.expFlags
                           .__PVT__Overflow));
    bufp->fullBit(oldp+83,(vlSymsp->TOP__assertionmath.expFlags
                           .__PVT__Parity));
    bufp->fullBit(oldp+84,(vlSymsp->TOP__assertionmath.expFlags
                           .__PVT__Negative));
    bufp->fullBit(oldp+85,(vlSymsp->TOP__assertionmath.expFlags
                           .__PVT__Zero));
    bufp->fullBit(oldp+86,(vlSymsp->TOP__assertionmath.expFlags
                           .__PVT__Carry));
    bufp->fullSData(oldp+87,((0x000003ffU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__LEDs))),10);
    bufp->fullSData(oldp+88,(vlSelfRef.HighRiscTb__DOT__uut__DOT__LEDs),16);
    bufp->fullSData(oldp+89,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.SlaveReadData0),16);
    bufp->fullSData(oldp+90,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.SlaveReadData0),16);
    bufp->fullCData(oldp+91,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags),5);
    bufp->fullCData(oldp+92,((0x00000080U | ((0x00000040U 
                                              & ((~ 
                                                  ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags) 
                                                   >> 1U)) 
                                                 << 6U)) 
                                             | ((0x00000020U 
                                                 & ((~ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags)) 
                                                    << 5U)) 
                                                | (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags))))),8);
    bufp->fullSData(oldp+93,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair),16);
    bufp->fullBit(oldp+94,(vlSelfRef.HighRiscTb__DOT__uut__DOT__VGA_BLANK_N));
    bufp->fullBit(oldp+95,(vlSelfRef.HighRiscTb__DOT__uut__DOT__VGA_SYNC_N));
    bufp->fullBit(oldp+96,(vlSelfRef.HighRiscTb__DOT__uut__DOT__VGA_HS));
    bufp->fullBit(oldp+97,(vlSelfRef.HighRiscTb__DOT__uut__DOT__VGA_VS));
    bufp->fullSData(oldp+98,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress),16);
    bufp->fullCData(oldp+99,((3U & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress) 
                                    >> 0x0000000eU))),2);
    bufp->fullSData(oldp+100,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress),16);
    bufp->fullSData(oldp+101,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextX),11);
    bufp->fullSData(oldp+102,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY),10);
    bufp->fullSData(oldp+103,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__hCount),11);
    bufp->fullSData(oldp+104,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__vCount),10);
    bufp->fullSData(oldp+105,((0x00003fffU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress))),14);
    bufp->fullBit(oldp+106,((1U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__SlaveWriteEnable))));
    bufp->fullBit(oldp+107,((1U & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__SlaveWriteEnable) 
                                   >> 1U))));
    bufp->fullCData(oldp+108,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__SlaveWriteEnable),4);
    bufp->fullCData(oldp+109,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__BlockInUse),2);
    bufp->fullSData(oldp+110,((0x000001ffU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress))),9);
    bufp->fullQData(oldp+111,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortWriteEnable),33);
    bufp->fullBit(oldp+113,((1U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortWriteEnable))));
    bufp->fullBit(oldp+114,((1U & (IData)((vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortWriteEnable 
                                           >> 1U)))));
    bufp->fullCData(oldp+115,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortInUse),5);
    bufp->fullBit(oldp+116,((2U == (0x0000000fU & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                                   >> 0x0000000cU)))));
    bufp->fullSData(oldp+117,(vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataAssertVal),16);
    bufp->fullSData(oldp+118,(vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataAssertVal),16);
    bufp->fullSData(oldp+119,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.Address),16);
    bufp->fullCData(oldp+120,((3U & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.Address) 
                                     >> 0x0000000eU))),2);
    bufp->fullSData(oldp+121,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction),16);
    bufp->fullCData(oldp+122,((0x0000001fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.Address) 
                                              >> 9U))),5);
    bufp->fullCData(oldp+123,((0x0000000fU & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                              >> 0x0000000cU))),4);
    bufp->fullSData(oldp+124,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutDest),16);
    bufp->fullSData(oldp+125,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest),16);
    bufp->fullSData(oldp+126,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc),16);
    bufp->fullCData(oldp+127,((0x0000003fU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))),6);
    bufp->fullBit(oldp+128,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteEnable));
    bufp->fullCData(oldp+129,((0x0000003fU & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                              >> 6U))),6);
    bufp->fullCData(oldp+130,((0x0000003fU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))),6);
    bufp->fullBit(oldp+131,((IData)(((0x0fc0U == (0x0fc0U 
                                                  & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))) 
                                     & ((2U != (0x0000000fU 
                                                & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                                   >> 0x0000000cU))) 
                                        & (0U != (0x0000000fU 
                                                  & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                                     >> 0x0000000cU))))))));
    bufp->fullBit(oldp+132,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__OffsetEnable));
    bufp->fullSData(oldp+133,((0x000001ffU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))),9);
    bufp->fullBit(oldp+134,(((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteEnable) 
                             & (0x0f80U == (0x0fc0U 
                                            & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))))));
    bufp->fullCData(oldp+135,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutFlags),5);
    bufp->fullSData(oldp+136,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc),16);
    bufp->fullSData(oldp+137,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest),16);
    bufp->fullSData(oldp+138,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutDest),16);
    bufp->fullBit(oldp+139,((IData)(((0xa000U == (0xe000U 
                                                  & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))) 
                                     & ((0x00001000U 
                                         & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
                                         ? (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43) 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                >> 0x0000000fU)) 
                                            | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                               >> 0x0000000fU))
                                         : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27) 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                >> 0x0000000fU)) 
                                            | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                               >> 0x0000000fU)))))));
    bufp->fullBit(oldp+140,((IData)((((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                      >> 0x0000000fU) 
                                     & ((0x00004000U 
                                         & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
                                         ? ((0x00002000U 
                                             & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
                                             ? ((0x00001000U 
                                                 & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
                                                 ? 
                                                VL_COUNTONES_I(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 
                                                                >> 0x00000010U))
                                                 : 
                                                VL_COUNTONES_I(
                                                               (0x0000ffffU 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)))
                                             : ((0x00001000U 
                                                 & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
                                                 ? 
                                                VL_COUNTONES_I((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8))
                                                 : 
                                                VL_COUNTONES_I((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7))))
                                         : (((0x00001000U 
                                              & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64) 
                                                 + 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63) 
                                                  + 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62) 
                                                   + 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_61) 
                                                    + 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60) 
                                                     + 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_59) 
                                                      + 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58) 
                                                       + 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57) 
                                                        + 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56) 
                                                         + 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55) 
                                                          + 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54) 
                                                           + 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53) 
                                                            + 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52) 
                                                             + 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51) 
                                                              + 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                                               + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50))))))))))))))))
                                              : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79) 
                                                 + 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78) 
                                                  + 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77) 
                                                   + 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76) 
                                                    + 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75) 
                                                     + 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74) 
                                                      + 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73) 
                                                       + 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72) 
                                                        + 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_71) 
                                                         + 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70) 
                                                          + 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_69) 
                                                           + 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68) 
                                                            + 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_67) 
                                                             + 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66) 
                                                              + 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                                                               + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65))))))))))))))))) 
                                            & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                               >> 0x0000000dU)))))));
    bufp->fullSData(oldp+141,((0x0000ffffU & ((~ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc)) 
                                              & (- (IData)((IData)(
                                                                   (0xb000U 
                                                                    == 
                                                                    (0xf000U 
                                                                     & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))))))))),16);
    bufp->fullIData(oldp+142,((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 
                               & ((- (IData)((3U == 
                                              (3U & 
                                               ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                                >> 0x0000000dU))))) 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                                   >> 0x0000000fU))))))),32);
    bufp->fullCData(oldp+143,((((IData)(((0x0fc0U == 
                                          (0x0fc0U 
                                           & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))) 
                                         & ((2U != 
                                             (0x0000000fU 
                                              & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                                 >> 0x0000000cU))) 
                                            & (0U != 
                                               (0x0000000fU 
                                                & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                                   >> 0x0000000cU)))))) 
                                << 1U) | (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__OffsetEnable))),2);
    bufp->fullSData(oldp+144,((0x00003fffU & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.Address))),14);
    bufp->fullBit(oldp+145,((1U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__SlaveWriteEnable))));
    bufp->fullBit(oldp+146,((1U & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__SlaveWriteEnable) 
                                   >> 1U))));
    bufp->fullCData(oldp+147,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__SlaveWriteEnable),4);
    bufp->fullCData(oldp+148,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__BlockInUse),2);
    bufp->fullSData(oldp+149,((0x000001ffU & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.Address))),9);
    bufp->fullQData(oldp+150,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortWriteEnable),33);
    bufp->fullBit(oldp+152,((1U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortWriteEnable))));
    bufp->fullBit(oldp+153,((1U & (IData)((vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortWriteEnable 
                                           >> 1U)))));
    bufp->fullCData(oldp+154,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortInUse),5);
    bufp->fullBit(oldp+155,(vlSelfRef.HighRiscTb__DOT__CLOCK_50));
    bufp->fullSData(oldp+156,(vlSelfRef.HighRiscTb__DOT__SW),10);
    bufp->fullCData(oldp+157,(vlSelfRef.HighRiscTb__DOT__KEY),4);
    bufp->fullBit(oldp+158,(vlSelfRef.HighRiscTb__DOT__tbClk));
    bufp->fullSData(oldp+159,(vlSelfRef.HighRiscTb__DOT__ClockCount),16);
    bufp->fullSData(oldp+160,(vlSelfRef.HighRiscTb__DOT__SWRead1),16);
    bufp->fullSData(oldp+161,(vlSelfRef.HighRiscTb__DOT__SWRead2),16);
    bufp->fullBit(oldp+162,((1U & (~ (IData)(vlSelfRef.HighRiscTb__DOT__CLOCK_50)))));
    bufp->fullCData(oldp+163,((0x000000fcU & (((0x00000038U 
                                                & (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair) 
                                                    >> 
                                                    ((IData)(5U) 
                                                     + 
                                                     (0x0000000fU 
                                                      & ((7U 
                                                          | (8U 
                                                             & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY) 
                                                                << 3U))) 
                                                         - (IData)(7U))))) 
                                                   << 3U)) 
                                               | (7U 
                                                  & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair) 
                                                     >> 
                                                     ((IData)(5U) 
                                                      + 
                                                      (0x0000000fU 
                                                       & ((7U 
                                                           | (8U 
                                                              & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY) 
                                                                 << 3U))) 
                                                          - (IData)(7U))))))) 
                                              << 2U))),8);
    bufp->fullCData(oldp+164,((0x000000fcU & (((0x00000038U 
                                                & (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair) 
                                                    >> 
                                                    ((IData)(2U) 
                                                     + 
                                                     (0x0000000fU 
                                                      & ((7U 
                                                          | (8U 
                                                             & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY) 
                                                                << 3U))) 
                                                         - (IData)(7U))))) 
                                                   << 3U)) 
                                               | (7U 
                                                  & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair) 
                                                     >> 
                                                     ((IData)(2U) 
                                                      + 
                                                      (0x0000000fU 
                                                       & ((7U 
                                                           | (8U 
                                                              & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY) 
                                                                 << 3U))) 
                                                          - (IData)(7U))))))) 
                                              << 2U))),8);
    bufp->fullCData(oldp+165,((0x000000ffU & ((0x000000c0U 
                                               & (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair) 
                                                   >> 
                                                   (0x0000000fU 
                                                    & ((7U 
                                                        | (8U 
                                                           & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY) 
                                                              << 3U))) 
                                                       - (IData)(7U)))) 
                                                  << 6U)) 
                                              | ((0x00000030U 
                                                  & (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair) 
                                                      >> 
                                                      (0x0000000fU 
                                                       & ((7U 
                                                           | (8U 
                                                              & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY) 
                                                                 << 3U))) 
                                                          - (IData)(7U)))) 
                                                     << 4U)) 
                                                 | ((0x0000000cU 
                                                     & (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair) 
                                                         >> 
                                                         (0x0000000fU 
                                                          & ((7U 
                                                              | (8U 
                                                                 & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY) 
                                                                    << 3U))) 
                                                             - (IData)(7U)))) 
                                                        << 2U)) 
                                                    | (3U 
                                                       & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair) 
                                                          >> 
                                                          (0x0000000fU 
                                                           & ((7U 
                                                               | (8U 
                                                                  & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY) 
                                                                     << 3U))) 
                                                              - (IData)(7U)))))))))),8);
    bufp->fullBit(oldp+166,((1U & (~ (IData)(vlSelfRef.HighRiscTb__DOT__KEY)))));
    bufp->fullSData(oldp+167,(vlSelfRef.HighRiscTb__DOT__uut__DOT__SlaveReadData3),16);
    bufp->fullSData(oldp+168,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.SlaveReadData1),16);
    bufp->fullSData(oldp+169,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.ReadData),16);
    bufp->fullSData(oldp+170,(vlSelfRef.HighRiscTb__DOT__SW),16);
    bufp->fullSData(oldp+171,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers
                              [(0x0000003fU & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                               >> 6U))]),16);
    bufp->fullSData(oldp+172,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers
                              [(0x0000003fU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))]),16);
    bufp->fullSData(oldp+173,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__LoadValue),16);
    bufp->fullSData(oldp+174,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__LoadValue),16);
    bufp->fullSData(oldp+175,((0x0000ffffU & ((IData)(
                                                      ((0x0fc0U 
                                                        == 
                                                        (0x0fc0U 
                                                         & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))) 
                                                       & ((2U 
                                                           != 
                                                           (0x0000000fU 
                                                            & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                                               >> 0x0000000cU))) 
                                                          & (0U 
                                                             != 
                                                             (0x0000000fU 
                                                              & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                                                 >> 0x0000000cU))))))
                                               ? ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__OffsetEnable)
                                                   ? 
                                                  ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__LoadValue) 
                                                   + 
                                                   VL_EXTENDS_II(16,9, 
                                                                 (0x000001ffU 
                                                                  & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))))
                                                   : (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__LoadValue))
                                               : ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__OffsetEnable)
                                                   ? 
                                                  ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress) 
                                                   + 
                                                   VL_EXTENDS_II(16,9, 
                                                                 (0x000001ffU 
                                                                  & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))))
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress)))))),16);
    bufp->fullSData(oldp+176,(((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteEnable)
                                ? (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__LoadValue)
                                : vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers
                               [(0x0000003fU & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                                >> 6U))])),16);
    bufp->fullCData(oldp+177,((0x000000ffU & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair) 
                                              >> (0x0000000fU 
                                                  & ((7U 
                                                      | (8U 
                                                         & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY) 
                                                            << 3U))) 
                                                     - (IData)(7U)))))),8);
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_full_dtype____0(VHighRiscTb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_full_dtype____0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullSData(oldp+0,(__VdtypeVar[0]),16);
    bufp->fullSData(oldp+1,(__VdtypeVar[1]),16);
    bufp->fullSData(oldp+2,(__VdtypeVar[2]),16);
    bufp->fullSData(oldp+3,(__VdtypeVar[3]),16);
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_full_dtype____1(VHighRiscTb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_full_dtype____1\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullSData(oldp+0,(__VdtypeVar[0]),16);
    bufp->fullSData(oldp+1,(__VdtypeVar[1]),16);
    bufp->fullSData(oldp+2,(__VdtypeVar[2]),16);
    bufp->fullSData(oldp+3,(__VdtypeVar[3]),16);
    bufp->fullSData(oldp+4,(__VdtypeVar[4]),16);
    bufp->fullSData(oldp+5,(__VdtypeVar[5]),16);
    bufp->fullSData(oldp+6,(__VdtypeVar[6]),16);
    bufp->fullSData(oldp+7,(__VdtypeVar[7]),16);
    bufp->fullSData(oldp+8,(__VdtypeVar[8]),16);
    bufp->fullSData(oldp+9,(__VdtypeVar[9]),16);
    bufp->fullSData(oldp+10,(__VdtypeVar[10]),16);
    bufp->fullSData(oldp+11,(__VdtypeVar[11]),16);
    bufp->fullSData(oldp+12,(__VdtypeVar[12]),16);
    bufp->fullSData(oldp+13,(__VdtypeVar[13]),16);
    bufp->fullSData(oldp+14,(__VdtypeVar[14]),16);
    bufp->fullSData(oldp+15,(__VdtypeVar[15]),16);
    bufp->fullSData(oldp+16,(__VdtypeVar[16]),16);
    bufp->fullSData(oldp+17,(__VdtypeVar[17]),16);
    bufp->fullSData(oldp+18,(__VdtypeVar[18]),16);
    bufp->fullSData(oldp+19,(__VdtypeVar[19]),16);
    bufp->fullSData(oldp+20,(__VdtypeVar[20]),16);
    bufp->fullSData(oldp+21,(__VdtypeVar[21]),16);
    bufp->fullSData(oldp+22,(__VdtypeVar[22]),16);
    bufp->fullSData(oldp+23,(__VdtypeVar[23]),16);
    bufp->fullSData(oldp+24,(__VdtypeVar[24]),16);
    bufp->fullSData(oldp+25,(__VdtypeVar[25]),16);
    bufp->fullSData(oldp+26,(__VdtypeVar[26]),16);
    bufp->fullSData(oldp+27,(__VdtypeVar[27]),16);
    bufp->fullSData(oldp+28,(__VdtypeVar[28]),16);
    bufp->fullSData(oldp+29,(__VdtypeVar[29]),16);
    bufp->fullSData(oldp+30,(__VdtypeVar[30]),16);
    bufp->fullSData(oldp+31,(__VdtypeVar[31]),16);
}
