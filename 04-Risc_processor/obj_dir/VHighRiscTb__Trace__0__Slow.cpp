// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VHighRiscTb__Syms.h"


VL_ATTR_COLD void VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Ibus__0(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VHighRiscTb___024root__trace_init_dtype____1(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev__0(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem__0(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VHighRiscTb___024root__trace_init_dtype____2(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev__0(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem__0(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VHighRiscTb___024root__trace_init_sub__TOP__InstructionSetPkg__0(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VHighRiscTb___024root__trace_init_sub__TOP__assertionmath__0(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VHighRiscTb___024root__trace_init_sub__TOP__0(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_init_sub__TOP__0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "HighRiscTb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+969,0,"CLOCK_50",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+970,0,"SW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+971,0,"KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+972,0,"tbClk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+917,0,"WriteAssertEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+946,0,"DataAssertVal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1038,0,"AddrAssert",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+973,0,"ClockCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1039,0,"SWRead1Thres",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1040,0,"SWRead2Thres",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+974,0,"SWRead1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+975,0,"SWRead2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+892,0,"OutVal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "check_1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+969,0,"SampleClk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+917,0,"WriteAssertEnable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+947,0,"DataAssertVal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+974,0,"SWRead1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+975,0,"SWRead2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+892,0,"OutVal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "DataVal", VerilatedTracePrefixType::STRUCT_UNPACKED, 6, 0);
    VL_TRACE_DECL_BUS(tracep,c+893,0,"out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+894,0,"Overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+895,0,"Parity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+896,0,"Negative",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+897,0,"Zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+898,0,"Carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "uut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+969,0,"CLOCK_50",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+971,0,"KEY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+970,0,"SW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+912,0,"LEDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BIT(tracep,c+976,0,"VGA_CLK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+925,0,"VGA_BLANK_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+926,0,"VGA_SYNC_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+927,0,"VGA_HS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+928,0,"VGA_VS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+977,0,"VGA_R",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+978,0,"VGA_G",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+979,0,"VGA_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+917,0,"WriteAssertEnable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+946,0,"DataAssertVal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+913,0,"LEDs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+980,0,"Reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+969,0,"Clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "Dbus", VerilatedTracePrefixType::SCOPE_INTERFACE, 0, 0);
    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "Ibus", VerilatedTracePrefixType::SCOPE_INTERFACE, 0, 0);
    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Ibus__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iDataMemory", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+969,0,"Clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "TheBus", VerilatedTracePrefixType::SCOPE_INTERFACE, 0, 0);
    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iRAM", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BIT(tracep,c+969,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+949,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+917,0,"wren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+981,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+981,0,"sub_wire0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "altsyncram_component", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1041,0,"width_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1042,0,"widthad_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1043,0,"numwords_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+1044,0,"outdata_reg_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"address_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"outdata_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"indata_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"wrcontrol_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"byteena_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"width_byteena_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"width_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"widthad_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"numwords_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+1049,0,"rdcontrol_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+1049,0,"address_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_WIDE(tracep,c+1051,0,"outdata_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 95,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"outdata_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"rdcontrol_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+1049,0,"indata_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+1049,0,"wrcontrol_wraddress_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+1049,0,"byteena_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"indata_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"wrcontrol_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"address_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"byteena_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"width_byteena_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+1054,0,"clock_enable_input_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+1054,0,"clock_enable_output_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+1056,0,"clock_enable_input_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+1056,0,"clock_enable_output_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_WIDE(tracep,c+1058,0,"clock_enable_core_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 119,0);
    VL_TRACE_DECL_WIDE(tracep,c+1058,0,"clock_enable_core_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 119,0);
    VL_TRACE_DECL_WIDE(tracep,c+1062,0,"read_during_write_mode_port_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_WIDE(tracep,c+1062,0,"read_during_write_mode_port_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_QUAD(tracep,c+1067,0,"enable_ecc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_BUS(tracep,c+1069,0,"width_eccstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+1067,0,"ecc_pipeline_stage_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_WIDE(tracep,c+1070,0,"operation_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 87,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"byte_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+1073,0,"read_during_write_mode_mixed_ports",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_BUS(tracep,c+1076,0,"ram_block_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+1077,0,"init_file",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1079,0,"init_file_layout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"maximum_depth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+1081,0,"intended_device_family",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+1084,0,"lpm_hint",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 327,0);
    VL_TRACE_DECL_WIDE(tracep,c+1095,0,"lpm_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 79,0);
    VL_TRACE_DECL_BUS(tracep,c+1098,0,"implement_in_les",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_QUAD(tracep,c+1067,0,"power_up_uninitialized",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_arria10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+917,0,"wren_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI0, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1099,0,"wren_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI0, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"rden_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"rden_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+949,0,"data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1101,0,"data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"address_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+1101,0,"address_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"clock0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"clock1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"clocken0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"clocken1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"clocken2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"clocken3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1099,0,"aclr0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI0, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1099,0,"aclr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI0, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1101,0,"byteena_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1101,0,"byteena_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BIT(tracep,c+1099,0,"addressstall_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI0, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1099,0,"addressstall_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI0, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+981,0,"q_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1102,0,"q_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1103,0,"eccstatus",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_PUSH_PREFIX(tracep, "m_default", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "altsyncram_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1041,0,"width_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1042,0,"widthad_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1043,0,"numwords_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+1044,0,"outdata_reg_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"address_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"outdata_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"indata_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"wrcontrol_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"byteena_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"width_byteena_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"width_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"widthad_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"numwords_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+1049,0,"rdcontrol_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+1049,0,"address_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_WIDE(tracep,c+1051,0,"outdata_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 95,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"outdata_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"rdcontrol_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+1049,0,"indata_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+1049,0,"wrcontrol_wraddress_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+1049,0,"byteena_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"indata_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"wrcontrol_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"address_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"byteena_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"width_byteena_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+1054,0,"clock_enable_input_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+1054,0,"clock_enable_output_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+1056,0,"clock_enable_input_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+1056,0,"clock_enable_output_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_WIDE(tracep,c+1058,0,"clock_enable_core_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 119,0);
    VL_TRACE_DECL_WIDE(tracep,c+1058,0,"clock_enable_core_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 119,0);
    VL_TRACE_DECL_WIDE(tracep,c+1062,0,"read_during_write_mode_port_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_WIDE(tracep,c+1062,0,"read_during_write_mode_port_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_QUAD(tracep,c+1067,0,"enable_ecc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_BUS(tracep,c+1069,0,"width_eccstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+1067,0,"ecc_pipeline_stage_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_WIDE(tracep,c+1070,0,"operation_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 87,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"byte_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+1073,0,"read_during_write_mode_mixed_ports",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_BUS(tracep,c+1076,0,"ram_block_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+1077,0,"init_file",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1079,0,"init_file_layout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"maximum_depth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+1081,0,"intended_device_family",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+1084,0,"lpm_hint",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 327,0);
    VL_TRACE_DECL_WIDE(tracep,c+1095,0,"lpm_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 79,0);
    VL_TRACE_DECL_BUS(tracep,c+1098,0,"implement_in_les",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_QUAD(tracep,c+1067,0,"power_up_uninitialized",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_BUS(tracep,c+1098,0,"sim_show_memory_data_in_port_b_layout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"is_lutram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"is_bidir_and_wrcontrol_addb_clk0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"is_bidir_and_wrcontrol_addb_clk1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"check_simultaneous_read_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"dual_port_addreg_b_clk0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"dual_port_addreg_b_clk1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1104,0,"i_byte_size_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"i_lutram_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"enable_mem_data_b_reading",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_arriav",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"family_cyclonev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"family_base_arriav",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_arria10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_stratix10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_arriavi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_nightfury",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_arriavgz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"family_stratixv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_hardcopyiv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_hardcopyiii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_hardcopyii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_arriaiigz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_arriaiigx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"family_stratixiii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_zippleback",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_cycloneiii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_cyclone",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_base_cycloneii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_cycloneii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_base_stratix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_base_stratixii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"family_has_lutram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"family_has_stratixv_style_ram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"family_has_stratixiii_style_ram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_has_m512",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_has_megaram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_has_stratixi_style_ram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"is_write_on_positive_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"lutram_single_port_fast_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"lutram_dual_port_fast_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"s3_address_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"s3_address_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"i_address_aclr_family_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"i_address_aclr_family_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1099,0,"wren_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI0, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1099,0,"wren_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI0, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"rden_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"rden_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+949,0,"data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1101,0,"data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"address_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+1101,0,"address_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"clock0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"clock1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"clocken0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"clocken1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"clocken2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"clocken3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1099,0,"aclr0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI0, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1099,0,"aclr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI0, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1101,0,"byteena_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1101,0,"byteena_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BIT(tracep,c+1099,0,"addressstall_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI0, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1099,0,"addressstall_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI0, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+981,0,"q_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1102,0,"q_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1103,0,"eccstatus",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);

    VHighRiscTb___024root__trace_init_dtype____1(vlSelf, tracep, "mem_data_b", 0, c+586, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+864,0,"i_data_reg_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+907,0,"temp_wa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1105,0,"temp_wa2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1106,0,"temp_wa2b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1107,0,"init_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+588,0,"i_data_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1108,0,"temp_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1109,0,"temp_wb2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BIT(tracep,c+1110,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+981,0,"i_q_reg_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+982,0,"i_q_tmp_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+983,0,"i_q_tmp2_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+589,0,"i_q_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+984,0,"i_q_tmp_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+590,0,"i_q_tmp2_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1111,0,"i_q_output_latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+865,0,"i_byteena_mask_reg_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+591,0,"i_byteena_mask_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+866,0,"i_address_reg_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+592,0,"i_address_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1112,0,"i_q_ecc_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1113,0,"i_q_ecc_tmp_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+858,0,"i_original_address_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+1114,0,"i_byteena_mask_reg_a_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1115,0,"i_byteena_mask_reg_b_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+867,0,"i_byteena_mask_reg_a_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+593,0,"i_byteena_mask_reg_b_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+868,0,"i_byteena_mask_reg_a_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+594,0,"i_byteena_mask_reg_b_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+985,0,"i_byteena_mask_reg_a_out_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1116,0,"i_byteena_mask_reg_b_out_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_WIDE(tracep,c+595,0,"ram_initf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2048,1);
    VL_TRACE_DECL_BIT(tracep,c+869,0,"i_wren_reg_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+659,0,"i_wren_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+870,0,"i_rden_reg_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+660,0,"i_rden_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"i_read_flag_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+986,0,"i_read_flag_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+872,0,"i_write_flag_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+661,0,"i_write_flag_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+873,0,"good_to_go_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+662,0,"good_to_go_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1117,0,"file_desc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+663,0,"init_file_b_port",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+874,0,"i_nmram_write_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+664,0,"i_nmram_write_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+665,0,"wa_mult_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1118,0,"wa_mult_x_ii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1119,0,"wa_mult_x_iii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1120,0,"add_reg_a_mult_wa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 29,0);
    VL_TRACE_DECL_BUS(tracep,c+1121,0,"add_reg_b_mult_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1122,0,"add_reg_a_mult_wa_pl_wa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 29,0);
    VL_TRACE_DECL_BUS(tracep,c+1123,0,"add_reg_b_mult_wb_pl_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+987,0,"same_clock_pulse0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+988,0,"same_clock_pulse1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+666,0,"i_original_data_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+859,0,"i_original_data_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+989,0,"i_address_aclr_a_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+990,0,"i_address_aclr_a_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+991,0,"i_address_aclr_b_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+992,0,"i_address_aclr_b_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+993,0,"i_outdata_aclr_a_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+667,0,"i_outdata_aclr_b_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+994,0,"i_force_reread_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+875,0,"i_force_reread_a1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+668,0,"i_force_reread_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+669,0,"i_force_reread_b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"i_force_reread_a_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+670,0,"i_force_reread_b_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+671,0,"cread_during_write_mode_mixed_ports",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 168,0);
    VL_TRACE_DECL_QUAD(tracep,c+677,0,"i_ram_block_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 56,0);
    VL_TRACE_DECL_BUS(tracep,c+679,0,"i_byte_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+995,0,"i_good_to_write_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+996,0,"i_good_to_write_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+995,0,"i_good_to_write_a2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+996,0,"i_good_to_write_b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+877,0,"i_core_clocken_a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+878,0,"i_core_clocken0_b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+997,0,"i_core_clocken1_b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1124,0,"i_indata_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1124,0,"i_address_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1124,0,"i_wrcontrol_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1124,0,"i_indata_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1124,0,"i_address_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1124,0,"i_wrcontrol_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1124,0,"i_outdata_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1124,0,"i_outdata_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1124,0,"i_rdcontrol_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1124,0,"i_byteena_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1124,0,"i_byteena_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1125,0,"i_outdata_clken_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1125,0,"i_outdata_clken_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1125,0,"i_outlatch_clken_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1125,0,"i_outlatch_clken_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1125,0,"i_clocken0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1125,0,"i_clocken1_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1125,0,"i_clocken0_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1125,0,"i_core_clocken_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1125,0,"i_core_clocken_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1125,0,"i_core_clocken0_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1125,0,"i_core_clocken1_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1126,0,"i_byteena_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1126,0,"i_byteena_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"i_numwords_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+681,0,"i_numwords_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+860,0,"i_aclr_flag_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+682,0,"i_aclr_flag_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1127,0,"i_q_tmp2_a_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1128,0,"init_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+683,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1129,0,"i2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1130,0,"i3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1131,0,"i4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+908,0,"i5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1132,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1133,0,"j2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1134,0,"j3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1135,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1136,0,"k2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1137,0,"k3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1138,0,"k4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1139,0,"i_div_wa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1140,0,"i_div_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1141,0,"j_plus_i2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1142,0,"j2_plus_i5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1143,0,"j3_plus_i5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1144,0,"j_plus_i2_div_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1145,0,"j2_plus_i5_div_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1146,0,"j3_plus_i5_div_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1147,0,"j3_plus_i5_div_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+861,0,"i_byteena_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+909,0,"port_a_bit_count_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1148,0,"port_a_bit_count_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+910,0,"port_b_bit_count_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+911,0,"port_b_bit_count_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+862,0,"i_data_write_time_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::TIME, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+684,0,"i_data_write_time_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::TIME, 63,0);
    VL_TRACE_PUSH_PREFIX(tracep, "dev", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mem", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iI", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+969,0,"Clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+998,0,"BusPort",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "TheBus", VerilatedTracePrefixType::SCOPE_INTERFACE, 0, 0);
    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iO", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+969,0,"Clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+913,0,"BusPort",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "TheBus", VerilatedTracePrefixType::SCOPE_INTERFACE, 0, 0);
    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iProcesor", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+969,0,"Clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+980,0,"Reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+918,0,"OpCode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+950,0,"AluResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+951,0,"SourceDataA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+949,0,"SourceDataB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+919,0,"ImmediateData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+952,0,"RfWriteEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+920,0,"RegA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+921,0,"RegB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+999,0,"RfReadDataA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1000,0,"RfReadDataB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+922,0,"PcWriteEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+953,0,"PcOffsetEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+929,0,"PcAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+923,0,"PcOffsetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BIT(tracep,c+1001,0,"FlagsWriteEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+914,0,"Flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+954,0,"NextFlags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+1149,0,"MemWriteEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1002,0,"WriteData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "Dbus", VerilatedTracePrefixType::SCOPE_INTERFACE, 0, 0);
    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "Ibus", VerilatedTracePrefixType::SCOPE_INTERFACE, 0, 0);
    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Ibus__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iALU", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+918,0,"Operation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+914,0,"InFlags",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+954,0,"OutFlags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+919,0,"InImm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+955,0,"InSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+956,0,"InDest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+957,0,"OutDest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+1003,0,"temp_carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1004,0,"parity_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BUS(tracep,c+1005,0,"nInSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1006,0,"full_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iAluMuxA", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+920,0,"SourceAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+999,0,"RegisterFileData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+929,0,"ProgramCounter",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1150,0,"Flags",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+951,0,"SelectedValue",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iAluMuxB", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+921,0,"SourceAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+1000,0,"RegisterFileData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+929,0,"ProgramCounter",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1151,0,"Flags",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+949,0,"SelectedValue",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iDecoder", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+924,0,"Instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+914,0,"Flags",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+918,0,"OpCode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+920,0,"RegA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+921,0,"RegB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+919,0,"ImmediateData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+952,0,"RfWriteEnable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+922,0,"PcWriteEnable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+953,0,"PcOffsetEnable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+923,0,"PcOffsetValue",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BIT(tracep,c+1001,0,"FlagsWriteEnable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+917,0,"MemWriteEnable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+915,0,"ExtFlags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iFlags", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1041,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+969,0,"Clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+980,0,"Reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1002,0,"LoadValue",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+1001,0,"LoadEnable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+954,0,"NextFlags",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+914,0,"Flags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iPC", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+969,0,"Clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+980,0,"Reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1007,0,"LoadValue",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+922,0,"LoadEnable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+923,0,"Offset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BIT(tracep,c+953,0,"OffsetEnable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+930,0,"CounterValue",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1008,0,"nextCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1009,0,"enables",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iRF", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1152,0,"REG_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1153,0,"REGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1154,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+969,0,"Clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+920,0,"AddressA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+1002,0,"WriteData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+952,0,"WriteEnable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+921,0,"AddressB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+999,0,"ReadDataA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1000,0,"ReadDataB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1010,0,"nextWriteA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iProgramMemory", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+969,0,"Clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "TheBus", VerilatedTracePrefixType::SCOPE_INTERFACE, 0, 0);
    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Ibus__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iRom", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+931,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BIT(tracep,c+969,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1011,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1011,0,"sub_wire0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "altsyncram_component", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1041,0,"width_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1042,0,"widthad_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1043,0,"numwords_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+1051,0,"outdata_reg_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 95,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"address_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"outdata_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"indata_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"wrcontrol_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"byteena_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"width_byteena_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"width_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"widthad_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"numwords_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+1049,0,"rdcontrol_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+1049,0,"address_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_WIDE(tracep,c+1051,0,"outdata_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 95,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"outdata_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"rdcontrol_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+1049,0,"indata_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+1049,0,"wrcontrol_wraddress_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+1049,0,"byteena_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"indata_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"wrcontrol_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"address_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"byteena_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"width_byteena_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+1054,0,"clock_enable_input_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+1054,0,"clock_enable_output_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+1056,0,"clock_enable_input_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+1056,0,"clock_enable_output_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_WIDE(tracep,c+1058,0,"clock_enable_core_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 119,0);
    VL_TRACE_DECL_WIDE(tracep,c+1058,0,"clock_enable_core_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 119,0);
    VL_TRACE_DECL_WIDE(tracep,c+1062,0,"read_during_write_mode_port_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_WIDE(tracep,c+1062,0,"read_during_write_mode_port_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_QUAD(tracep,c+1067,0,"enable_ecc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_BUS(tracep,c+1069,0,"width_eccstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+1067,0,"ecc_pipeline_stage_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_BUS(tracep,c+1155,0,"operation_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"byte_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+1073,0,"read_during_write_mode_mixed_ports",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_BUS(tracep,c+1076,0,"ram_block_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+1156,0,"init_file",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 87,0);
    VL_TRACE_DECL_QUAD(tracep,c+1079,0,"init_file_layout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"maximum_depth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+1081,0,"intended_device_family",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+1159,0,"lpm_hint",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 327,0);
    VL_TRACE_DECL_WIDE(tracep,c+1095,0,"lpm_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 79,0);
    VL_TRACE_DECL_BUS(tracep,c+1098,0,"implement_in_les",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_QUAD(tracep,c+1067,0,"power_up_uninitialized",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_arria10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1099,0,"wren_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI0, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1099,0,"wren_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI0, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"rden_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"rden_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1170,0,"data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1101,0,"data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+931,0,"address_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+1101,0,"address_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"clock0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"clock1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"clocken0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"clocken1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"clocken2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"clocken3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1099,0,"aclr0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI0, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1099,0,"aclr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI0, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1101,0,"byteena_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1101,0,"byteena_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BIT(tracep,c+1099,0,"addressstall_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI0, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1099,0,"addressstall_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI0, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1011,0,"q_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1102,0,"q_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1103,0,"eccstatus",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_PUSH_PREFIX(tracep, "m_default", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "altsyncram_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1041,0,"width_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1042,0,"widthad_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1043,0,"numwords_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+1051,0,"outdata_reg_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 95,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"address_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"outdata_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"indata_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"wrcontrol_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"byteena_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"width_byteena_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"width_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"widthad_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"numwords_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+1049,0,"rdcontrol_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+1049,0,"address_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_WIDE(tracep,c+1051,0,"outdata_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 95,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"outdata_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"rdcontrol_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+1049,0,"indata_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+1049,0,"wrcontrol_wraddress_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+1049,0,"byteena_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"indata_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"wrcontrol_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"address_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"byteena_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"width_byteena_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+1054,0,"clock_enable_input_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+1054,0,"clock_enable_output_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+1056,0,"clock_enable_input_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+1056,0,"clock_enable_output_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_WIDE(tracep,c+1058,0,"clock_enable_core_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 119,0);
    VL_TRACE_DECL_WIDE(tracep,c+1058,0,"clock_enable_core_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 119,0);
    VL_TRACE_DECL_WIDE(tracep,c+1062,0,"read_during_write_mode_port_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_WIDE(tracep,c+1062,0,"read_during_write_mode_port_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_QUAD(tracep,c+1067,0,"enable_ecc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_BUS(tracep,c+1069,0,"width_eccstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+1067,0,"ecc_pipeline_stage_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_BUS(tracep,c+1155,0,"operation_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"byte_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+1073,0,"read_during_write_mode_mixed_ports",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_BUS(tracep,c+1076,0,"ram_block_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+1156,0,"init_file",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 87,0);
    VL_TRACE_DECL_QUAD(tracep,c+1079,0,"init_file_layout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"maximum_depth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+1081,0,"intended_device_family",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+1159,0,"lpm_hint",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 327,0);
    VL_TRACE_DECL_WIDE(tracep,c+1095,0,"lpm_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 79,0);
    VL_TRACE_DECL_BUS(tracep,c+1098,0,"implement_in_les",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_QUAD(tracep,c+1067,0,"power_up_uninitialized",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_BUS(tracep,c+1098,0,"sim_show_memory_data_in_port_b_layout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"is_lutram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"is_bidir_and_wrcontrol_addb_clk0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"is_bidir_and_wrcontrol_addb_clk1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"check_simultaneous_read_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"dual_port_addreg_b_clk0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"dual_port_addreg_b_clk1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1104,0,"i_byte_size_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"i_lutram_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"enable_mem_data_b_reading",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_arriav",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"family_cyclonev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"family_base_arriav",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_arria10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_stratix10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_arriavi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_nightfury",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_arriavgz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"family_stratixv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_hardcopyiv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_hardcopyiii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_hardcopyii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_arriaiigz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_arriaiigx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"family_stratixiii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_zippleback",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_cycloneiii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_cyclone",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_base_cycloneii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_cycloneii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_base_stratix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_base_stratixii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"family_has_lutram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"family_has_stratixv_style_ram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"family_has_stratixiii_style_ram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_has_m512",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_has_megaram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"family_has_stratixi_style_ram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"is_write_on_positive_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"lutram_single_port_fast_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"lutram_dual_port_fast_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"s3_address_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"s3_address_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"i_address_aclr_family_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"i_address_aclr_family_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1099,0,"wren_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI0, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1099,0,"wren_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI0, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"rden_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"rden_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1171,0,"data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1101,0,"data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+931,0,"address_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+1101,0,"address_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"clock0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"clock1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"clocken0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"clocken1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"clocken2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1100,0,"clocken3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1099,0,"aclr0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI0, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1099,0,"aclr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI0, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1101,0,"byteena_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1101,0,"byteena_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BIT(tracep,c+1099,0,"addressstall_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI0, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1099,0,"addressstall_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::TRI0, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1011,0,"q_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1102,0,"q_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1103,0,"eccstatus",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);

    VHighRiscTb___024root__trace_init_dtype____2(vlSelf, tracep, "mem_data_b", 0, c+686, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+879,0,"i_data_reg_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1172,0,"temp_wa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1173,0,"temp_wa2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1174,0,"temp_wa2b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1175,0,"init_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+688,0,"i_data_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1176,0,"temp_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1177,0,"temp_wb2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BIT(tracep,c+1178,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+689,0,"i_q_reg_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1011,0,"i_q_tmp_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1012,0,"i_q_tmp2_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+690,0,"i_q_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1013,0,"i_q_tmp_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+691,0,"i_q_tmp2_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1179,0,"i_q_output_latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"i_byteena_mask_reg_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+692,0,"i_byteena_mask_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+881,0,"i_address_reg_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+693,0,"i_address_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1180,0,"i_q_ecc_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1181,0,"i_q_ecc_tmp_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+694,0,"i_original_address_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+1182,0,"i_byteena_mask_reg_a_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1183,0,"i_byteena_mask_reg_b_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+882,0,"i_byteena_mask_reg_a_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+695,0,"i_byteena_mask_reg_b_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+883,0,"i_byteena_mask_reg_a_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+696,0,"i_byteena_mask_reg_b_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1014,0,"i_byteena_mask_reg_a_out_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1184,0,"i_byteena_mask_reg_b_out_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_WIDE(tracep,c+697,0,"ram_initf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2048,1);
    VL_TRACE_DECL_BIT(tracep,c+884,0,"i_wren_reg_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+761,0,"i_wren_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+885,0,"i_rden_reg_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+762,0,"i_rden_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1015,0,"i_read_flag_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1016,0,"i_read_flag_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+886,0,"i_write_flag_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+763,0,"i_write_flag_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+887,0,"good_to_go_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+764,0,"good_to_go_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1185,0,"file_desc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+765,0,"init_file_b_port",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+766,0,"i_nmram_write_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+767,0,"i_nmram_write_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+768,0,"wa_mult_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1186,0,"wa_mult_x_ii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1187,0,"wa_mult_x_iii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1188,0,"add_reg_a_mult_wa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 29,0);
    VL_TRACE_DECL_BUS(tracep,c+1189,0,"add_reg_b_mult_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1190,0,"add_reg_a_mult_wa_pl_wa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 29,0);
    VL_TRACE_DECL_BUS(tracep,c+1191,0,"add_reg_b_mult_wb_pl_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+1017,0,"same_clock_pulse0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1018,0,"same_clock_pulse1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+769,0,"i_original_data_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+770,0,"i_original_data_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+1019,0,"i_address_aclr_a_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1020,0,"i_address_aclr_a_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1021,0,"i_address_aclr_b_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1022,0,"i_address_aclr_b_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1023,0,"i_outdata_aclr_a_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+771,0,"i_outdata_aclr_b_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1024,0,"i_force_reread_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+888,0,"i_force_reread_a1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+772,0,"i_force_reread_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+773,0,"i_force_reread_b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+889,0,"i_force_reread_a_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+774,0,"i_force_reread_b_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+775,0,"cread_during_write_mode_mixed_ports",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 168,0);
    VL_TRACE_DECL_QUAD(tracep,c+781,0,"i_ram_block_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 56,0);
    VL_TRACE_DECL_BUS(tracep,c+783,0,"i_byte_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1025,0,"i_good_to_write_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1026,0,"i_good_to_write_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1025,0,"i_good_to_write_a2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1026,0,"i_good_to_write_b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+890,0,"i_core_clocken_a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+891,0,"i_core_clocken0_b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1027,0,"i_core_clocken1_b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1124,0,"i_indata_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1124,0,"i_address_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1124,0,"i_wrcontrol_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1124,0,"i_indata_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1124,0,"i_address_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1124,0,"i_wrcontrol_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1124,0,"i_outdata_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1124,0,"i_outdata_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1124,0,"i_rdcontrol_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1124,0,"i_byteena_aclr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1124,0,"i_byteena_aclr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1125,0,"i_outdata_clken_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1125,0,"i_outdata_clken_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1125,0,"i_outlatch_clken_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1125,0,"i_outlatch_clken_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1125,0,"i_clocken0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1125,0,"i_clocken1_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1125,0,"i_clocken0_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1125,0,"i_core_clocken_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1125,0,"i_core_clocken_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1125,0,"i_core_clocken0_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1125,0,"i_core_clocken1_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1126,0,"i_byteena_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1126,0,"i_byteena_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::TRI1, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+784,0,"i_numwords_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+785,0,"i_numwords_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+786,0,"i_aclr_flag_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+787,0,"i_aclr_flag_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1192,0,"i_q_tmp2_a_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1193,0,"init_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+788,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1194,0,"i2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1195,0,"i3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1196,0,"i4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1197,0,"i5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1198,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1199,0,"j2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1200,0,"j3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1201,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1202,0,"k2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1203,0,"k3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1204,0,"k4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1205,0,"i_div_wa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1206,0,"i_div_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1207,0,"j_plus_i2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1208,0,"j2_plus_i5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1209,0,"j3_plus_i5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1210,0,"j_plus_i2_div_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1211,0,"j2_plus_i5_div_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1212,0,"j3_plus_i5_div_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1213,0,"j3_plus_i5_div_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+789,0,"i_byteena_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1214,0,"port_a_bit_count_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1215,0,"port_a_bit_count_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1216,0,"port_b_bit_count_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1217,0,"port_b_bit_count_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+790,0,"i_data_write_time_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::TIME, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+792,0,"i_data_write_time_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::TIME, 63,0);
    VL_TRACE_PUSH_PREFIX(tracep, "dev", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mem", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iVga", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+969,0,"CLOCK_50",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+980,0,"Reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+925,0,"VGA_BLANK_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+926,0,"VGA_SYNC_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+927,0,"VGA_HS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+928,0,"VGA_VS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+977,0,"VGA_R",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+978,0,"VGA_G",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+979,0,"VGA_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+916,0,"PixelPair",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1028,0,"Pixel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+932,0,"nextX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+933,0,"nextY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_PUSH_PREFIX(tracep, "TheBus", VerilatedTracePrefixType::SCOPE_INTERFACE, 0, 0);
    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "iControl", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+969,0,"Clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+980,0,"Reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+925,0,"blank_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+926,0,"sync_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+927,0,"hSync_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+928,0,"vSync_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+932,0,"nextX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+933,0,"nextY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+934,0,"hCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+935,0,"vCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
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
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 1);
    for (int i = 0; i < 2; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 0,0);
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
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 1);
    for (int i = 0; i < 2; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 0,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_init_sub__TOP__assertionmath__0(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_init_sub__TOP__assertionmath__0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+899,0,"temp_carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+900,0,"parity_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BUS(tracep,c+1218,0,"nInSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1219,0,"full_product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "expFlags", VerilatedTracePrefixType::STRUCT_UNPACKED, 6, 0);
    VL_TRACE_DECL_BUS(tracep,c+901,0,"out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+902,0,"Overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+903,0,"Parity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+904,0,"Negative",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+905,0,"Zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+906,0,"Carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_init_sub__TOP__InstructionSetPkg__0(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_init_sub__TOP__InstructionSetPkg__0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1041,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1220,0,"ImmediateWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1220,0,"ImmediateMidStart",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1221,0,"ImmediateHighStart",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1041,0,"AddressWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1220,0,"RfAddressWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1041,0,"MemAddressWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1222,0,"OffsetWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1223,0,"OpCodeStart",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1224,0,"OpCodeSize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1220,0,"RegAStart",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1220,0,"RegASize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1048,0,"RegBStart",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1220,0,"RegBSize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Ibus__0(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Ibus__0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1225,0,"Blocks",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1225,0,"Ports",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+929,0,"Address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+924,0,"ReadData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1226,0,"WriteData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+1099,0,"WriteEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+931,0,"SlaveAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_PUSH_PREFIX(tracep, "SlaveReadData", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+1029+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 15,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+1227,0,"SlaveReadData0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1228,0,"SlaveReadData1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+936,0,"SlaveWriteEnable0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+937,0,"SlaveWriteEnable1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+938,0,"SlaveWriteEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+939,0,"BlockInUse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+940,0,"PortAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_PUSH_PREFIX(tracep, "PortReadData", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 31);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+794+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 15,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+1229,0,"PortReadData0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1230,0,"PortReadData1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_QUAD(tracep,c+941,0,"PortWriteEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 32,0);
    VL_TRACE_DECL_BIT(tracep,c+943,0,"PortWriteEnable0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+944,0,"PortWriteEnable1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+945,0,"PortInUse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1225,0,"Blocks",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1225,0,"Ports",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+958,0,"Address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1033,0,"ReadData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+949,0,"WriteData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+917,0,"WriteEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"SlaveAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_PUSH_PREFIX(tracep, "SlaveReadData", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+1034+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 15,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+1231,0,"SlaveReadData0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1232,0,"SlaveReadData1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+959,0,"SlaveWriteEnable0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+960,0,"SlaveWriteEnable1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+961,0,"SlaveWriteEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+962,0,"BlockInUse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"PortAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_PUSH_PREFIX(tracep, "PortReadData", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 31);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+826+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 15,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+1233,0,"PortReadData0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1234,0,"PortReadData1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_QUAD(tracep,c+964,0,"PortWriteEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 32,0);
    VL_TRACE_DECL_BIT(tracep,c+966,0,"PortWriteEnable0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+967,0,"PortWriteEnable1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+968,0,"PortInUse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem__0(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem__0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+230,0,"tolower__Vstatic__conv_char",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,1);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"ecc_parity__Vstatic__pointer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"ecc_parity__Vstatic__pointer_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"ecc_parity__Vstatic__pointer_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"ecc_parity__Vstatic__flag_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"ecc_parity__Vstatic__flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"ecc_parity__Vstatic__flag_double",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"ecc_parity__Vstatic__flag_triple",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"ecc_parity__Vstatic__flag_single",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"ecc_parity__Vstatic__flag_no_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"ecc_parity__Vstatic__flag_uncorr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"ecc_parity__Vstatic__n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"ecc_parity__Vstatic__err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"ecc_parity__Vstatic__found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"ecc_parity__Vstatic__found_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+231,0,"convert_mif2ver__Vstatic__buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2048,1);
    VL_TRACE_DECL_WIDE(tracep,c+295,0,"convert_mif2ver__Vstatic__memory_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1024,0);
    VL_TRACE_DECL_WIDE(tracep,c+328,0,"convert_mif2ver__Vstatic__memory_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1024,0);
    VL_TRACE_DECL_BUS(tracep,c+361,0,"convert_mif2ver__Vstatic__c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,1);
    VL_TRACE_DECL_BUS(tracep,c+362,0,"convert_mif2ver__Vstatic__hex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+363,0,"convert_mif2ver__Vstatic__tmp_char",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+364,0,"convert_mif2ver__Vstatic__address_radix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,1);
    VL_TRACE_DECL_BUS(tracep,c+365,0,"convert_mif2ver__Vstatic__data_radix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,1);
    VL_TRACE_DECL_BIT(tracep,c+366,0,"convert_mif2ver__Vstatic__get_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+367,0,"convert_mif2ver__Vstatic__get_depth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+368,0,"convert_mif2ver__Vstatic__get_data_radix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+369,0,"convert_mif2ver__Vstatic__get_address_radix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+370,0,"convert_mif2ver__Vstatic__width_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+371,0,"convert_mif2ver__Vstatic__depth_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+372,0,"convert_mif2ver__Vstatic__data_radix_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+373,0,"convert_mif2ver__Vstatic__address_radix_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+374,0,"convert_mif2ver__Vstatic__get_address_data_pairs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+375,0,"convert_mif2ver__Vstatic__get_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+376,0,"convert_mif2ver__Vstatic__get_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+377,0,"convert_mif2ver__Vstatic__display_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+378,0,"convert_mif2ver__Vstatic__invalid_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+379,0,"convert_mif2ver__Vstatic__get_start_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+380,0,"convert_mif2ver__Vstatic__get_end_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+381,0,"convert_mif2ver__Vstatic__done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+382,0,"convert_mif2ver__Vstatic__error_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+383,0,"convert_mif2ver__Vstatic__first_rec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+384,0,"convert_mif2ver__Vstatic__last_rec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+385,0,"convert_mif2ver__Vstatic__memory_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+386,0,"convert_mif2ver__Vstatic__memory_depth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+387,0,"convert_mif2ver__Vstatic__value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+388,0,"convert_mif2ver__Vstatic__ifp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+389,0,"convert_mif2ver__Vstatic__ofp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+390,0,"convert_mif2ver__Vstatic__r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"convert_mif2ver__Vstatic__r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+391,0,"convert_mif2ver__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"convert_mif2ver__Vstatic__j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+16,0,"convert_mif2ver__Vstatic__k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+17,0,"convert_mif2ver__Vstatic__m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"convert_mif2ver__Vstatic__n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+392,0,"convert_mif2ver__Vstatic__negative",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+393,0,"convert_mif2ver__Vstatic__off_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+394,0,"convert_mif2ver__Vstatic__nn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+395,0,"convert_mif2ver__Vstatic__address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+396,0,"convert_mif2ver__Vstatic__tt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+397,0,"convert_mif2ver__Vstatic__cc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+398,0,"convert_mif2ver__Vstatic__aah",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+399,0,"convert_mif2ver__Vstatic__aal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+400,0,"convert_mif2ver__Vstatic__dd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+401,0,"convert_mif2ver__Vstatic__sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+402,0,"convert_mif2ver__Vstatic__start_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+403,0,"convert_mif2ver__Vstatic__end_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+404,0,"convert_mif2ver__Vstatic__line_no",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+405,0,"convert_mif2ver__Vstatic__character_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+406,0,"convert_mif2ver__Vstatic__comment_with_percent_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+407,0,"convert_mif2ver__Vstatic__comment_with_double_minus_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"convert_hex2ver__Vstatic__c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,1);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"convert_hex2ver__Vstatic__hex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"convert_hex2ver__Vstatic__tmp_char",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+22,0,"convert_hex2ver__Vstatic__done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+23,0,"convert_hex2ver__Vstatic__error_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+24,0,"convert_hex2ver__Vstatic__first_rec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+25,0,"convert_hex2ver__Vstatic__last_rec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+26,0,"convert_hex2ver__Vstatic__first_normal_record",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+27,0,"convert_hex2ver__Vstatic__is_word_address_format",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+28,0,"convert_hex2ver__Vstatic__ifp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"convert_hex2ver__Vstatic__ofp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"convert_hex2ver__Vstatic__r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"convert_hex2ver__Vstatic__r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"convert_hex2ver__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"convert_hex2ver__Vstatic__j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"convert_hex2ver__Vstatic__k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"convert_hex2ver__Vstatic__m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"convert_hex2ver__Vstatic__n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"convert_hex2ver__Vstatic__off_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+38,0,"convert_hex2ver__Vstatic__nn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"convert_hex2ver__Vstatic__aaaa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"convert_hex2ver__Vstatic__aaaa_pre",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"convert_hex2ver__Vstatic__tt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"convert_hex2ver__Vstatic__cc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"convert_hex2ver__Vstatic__aah",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"convert_hex2ver__Vstatic__aal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"convert_hex2ver__Vstatic__dd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"convert_hex2ver__Vstatic__sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"convert_hex2ver__Vstatic__line_no",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"convert_hex2ver__Vstatic__divide_factor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem__0(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem__0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+408,0,"tolower__Vstatic__conv_char",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,1);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"ecc_parity__Vstatic__pointer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"ecc_parity__Vstatic__pointer_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"ecc_parity__Vstatic__pointer_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"ecc_parity__Vstatic__flag_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"ecc_parity__Vstatic__flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+54,0,"ecc_parity__Vstatic__flag_double",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"ecc_parity__Vstatic__flag_triple",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"ecc_parity__Vstatic__flag_single",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"ecc_parity__Vstatic__flag_no_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"ecc_parity__Vstatic__flag_uncorr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"ecc_parity__Vstatic__n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+60,0,"ecc_parity__Vstatic__err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+61,0,"ecc_parity__Vstatic__found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"ecc_parity__Vstatic__found_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+409,0,"convert_mif2ver__Vstatic__buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2048,1);
    VL_TRACE_DECL_WIDE(tracep,c+473,0,"convert_mif2ver__Vstatic__memory_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1024,0);
    VL_TRACE_DECL_WIDE(tracep,c+506,0,"convert_mif2ver__Vstatic__memory_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1024,0);
    VL_TRACE_DECL_BUS(tracep,c+539,0,"convert_mif2ver__Vstatic__c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,1);
    VL_TRACE_DECL_BUS(tracep,c+540,0,"convert_mif2ver__Vstatic__hex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+541,0,"convert_mif2ver__Vstatic__tmp_char",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+542,0,"convert_mif2ver__Vstatic__address_radix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,1);
    VL_TRACE_DECL_BUS(tracep,c+543,0,"convert_mif2ver__Vstatic__data_radix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,1);
    VL_TRACE_DECL_BIT(tracep,c+544,0,"convert_mif2ver__Vstatic__get_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+545,0,"convert_mif2ver__Vstatic__get_depth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+546,0,"convert_mif2ver__Vstatic__get_data_radix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+547,0,"convert_mif2ver__Vstatic__get_address_radix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+548,0,"convert_mif2ver__Vstatic__width_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+549,0,"convert_mif2ver__Vstatic__depth_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+550,0,"convert_mif2ver__Vstatic__data_radix_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+551,0,"convert_mif2ver__Vstatic__address_radix_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+552,0,"convert_mif2ver__Vstatic__get_address_data_pairs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+553,0,"convert_mif2ver__Vstatic__get_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+554,0,"convert_mif2ver__Vstatic__get_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+555,0,"convert_mif2ver__Vstatic__display_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+556,0,"convert_mif2ver__Vstatic__invalid_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+557,0,"convert_mif2ver__Vstatic__get_start_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+558,0,"convert_mif2ver__Vstatic__get_end_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+559,0,"convert_mif2ver__Vstatic__done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+560,0,"convert_mif2ver__Vstatic__error_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+561,0,"convert_mif2ver__Vstatic__first_rec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+562,0,"convert_mif2ver__Vstatic__last_rec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+563,0,"convert_mif2ver__Vstatic__memory_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+564,0,"convert_mif2ver__Vstatic__memory_depth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+565,0,"convert_mif2ver__Vstatic__value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+566,0,"convert_mif2ver__Vstatic__ifp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+567,0,"convert_mif2ver__Vstatic__ofp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+568,0,"convert_mif2ver__Vstatic__r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"convert_mif2ver__Vstatic__r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+569,0,"convert_mif2ver__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"convert_mif2ver__Vstatic__j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+65,0,"convert_mif2ver__Vstatic__k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+66,0,"convert_mif2ver__Vstatic__m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+67,0,"convert_mif2ver__Vstatic__n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+570,0,"convert_mif2ver__Vstatic__negative",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+571,0,"convert_mif2ver__Vstatic__off_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+572,0,"convert_mif2ver__Vstatic__nn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+573,0,"convert_mif2ver__Vstatic__address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+574,0,"convert_mif2ver__Vstatic__tt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+575,0,"convert_mif2ver__Vstatic__cc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+576,0,"convert_mif2ver__Vstatic__aah",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+577,0,"convert_mif2ver__Vstatic__aal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+578,0,"convert_mif2ver__Vstatic__dd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+579,0,"convert_mif2ver__Vstatic__sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+580,0,"convert_mif2ver__Vstatic__start_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+581,0,"convert_mif2ver__Vstatic__end_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+582,0,"convert_mif2ver__Vstatic__line_no",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+583,0,"convert_mif2ver__Vstatic__character_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+584,0,"convert_mif2ver__Vstatic__comment_with_percent_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+585,0,"convert_mif2ver__Vstatic__comment_with_double_minus_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"convert_hex2ver__Vstatic__c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,1);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"convert_hex2ver__Vstatic__hex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"convert_hex2ver__Vstatic__tmp_char",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+71,0,"convert_hex2ver__Vstatic__done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+72,0,"convert_hex2ver__Vstatic__error_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+73,0,"convert_hex2ver__Vstatic__first_rec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+74,0,"convert_hex2ver__Vstatic__last_rec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+75,0,"convert_hex2ver__Vstatic__first_normal_record",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+76,0,"convert_hex2ver__Vstatic__is_word_address_format",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+77,0,"convert_hex2ver__Vstatic__ifp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+78,0,"convert_hex2ver__Vstatic__ofp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"convert_hex2ver__Vstatic__r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+80,0,"convert_hex2ver__Vstatic__r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"convert_hex2ver__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"convert_hex2ver__Vstatic__j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"convert_hex2ver__Vstatic__k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"convert_hex2ver__Vstatic__m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"convert_hex2ver__Vstatic__n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"convert_hex2ver__Vstatic__off_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"convert_hex2ver__Vstatic__nn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"convert_hex2ver__Vstatic__aaaa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"convert_hex2ver__Vstatic__aaaa_pre",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+90,0,"convert_hex2ver__Vstatic__tt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+91,0,"convert_hex2ver__Vstatic__cc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+92,0,"convert_hex2ver__Vstatic__aah",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"convert_hex2ver__Vstatic__aal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+94,0,"convert_hex2ver__Vstatic__dd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+95,0,"convert_hex2ver__Vstatic__sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"convert_hex2ver__Vstatic__line_no",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+97,0,"convert_hex2ver__Vstatic__divide_factor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev__0(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev__0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+98,0,"IS_FAMILY_ARRIA10__Vstatic__is_arria10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+99,0,"IS_FAMILY_ARRIAGX__Vstatic__is_arriagx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+100,0,"IS_FAMILY_ARRIAIIGX__Vstatic__is_arriaiigx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+101,0,"IS_FAMILY_ARRIAIIGZ__Vstatic__is_arriaiigz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+102,0,"IS_FAMILY_ARRIAVGZ__Vstatic__is_arriavgz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+103,0,"IS_FAMILY_ARRIAV__Vstatic__is_arriav",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+104,0,"IS_FAMILY_CYCLONE10LP__Vstatic__is_cyclone10lp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+105,0,"IS_FAMILY_CYCLONEII__Vstatic__is_cycloneii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+106,0,"IS_FAMILY_CYCLONEIIILS__Vstatic__is_cycloneiiils",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+107,0,"IS_FAMILY_CYCLONEIII__Vstatic__is_cycloneiii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+108,0,"IS_FAMILY_CYCLONEIVE__Vstatic__is_cycloneive",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+109,0,"IS_FAMILY_CYCLONEIVGX__Vstatic__is_cycloneivgx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+110,0,"IS_FAMILY_CYCLONEV__Vstatic__is_cyclonev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+111,0,"IS_FAMILY_CYCLONE__Vstatic__is_cyclone",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+112,0,"IS_FAMILY_HARDCOPYII__Vstatic__is_hardcopyii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+113,0,"IS_FAMILY_HARDCOPYIII__Vstatic__is_hardcopyiii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+114,0,"IS_FAMILY_HARDCOPYIV__Vstatic__is_hardcopyiv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+115,0,"IS_FAMILY_MAX10__Vstatic__is_max10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+116,0,"IS_FAMILY_MAXII__Vstatic__is_maxii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+117,0,"IS_FAMILY_MAXV__Vstatic__is_maxv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+118,0,"IS_FAMILY_STRATIX10__Vstatic__is_stratix10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+119,0,"IS_FAMILY_STRATIXGX__Vstatic__is_stratixgx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+120,0,"IS_FAMILY_STRATIXIIGX__Vstatic__is_stratixiigx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+121,0,"IS_FAMILY_STRATIXII__Vstatic__is_stratixii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+122,0,"IS_FAMILY_STRATIXIII__Vstatic__is_stratixiii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+123,0,"IS_FAMILY_STRATIXIV__Vstatic__is_stratixiv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+124,0,"IS_FAMILY_STRATIXV__Vstatic__is_stratixv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+125,0,"IS_FAMILY_STRATIX__Vstatic__is_stratix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"FEATURE_FAMILY_STRATIXGX__Vstatic__var_family_stratixgx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"FEATURE_FAMILY_CYCLONE__Vstatic__var_family_cyclone",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+128,0,"FEATURE_FAMILY_STRATIXIIGX__Vstatic__var_family_stratixiigx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+129,0,"FEATURE_FAMILY_STRATIXIII__Vstatic__var_family_stratixiii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+130,0,"FEATURE_FAMILY_ARRIAVGZ__Vstatic__var_family_arriavgz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+131,0,"FEATURE_FAMILY_STRATIXV__Vstatic__var_family_stratixv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+132,0,"FEATURE_FAMILY_ARRIA10__Vstatic__var_family_arria10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+133,0,"FEATURE_FAMILY_CYCLONE10LP__Vstatic__var_family_cyclone10lp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+134,0,"FEATURE_FAMILY_STRATIXII__Vstatic__var_family_stratixii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+135,0,"FEATURE_FAMILY_CYCLONEIVGX__Vstatic__var_family_cycloneivgx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+136,0,"FEATURE_FAMILY_CYCLONEIVE__Vstatic__var_family_cycloneive",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+137,0,"FEATURE_FAMILY_CYCLONEIII__Vstatic__var_family_cycloneiii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+138,0,"FEATURE_FAMILY_STRATIX_HC__Vstatic__var_family_stratix_hc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+139,0,"FEATURE_FAMILY_STRATIX__Vstatic__var_family_stratix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+140,0,"FEATURE_FAMILY_MAXII__Vstatic__var_family_maxii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+141,0,"FEATURE_FAMILY_MAXV__Vstatic__var_family_maxv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+142,0,"FEATURE_FAMILY_CYCLONEII__Vstatic__var_family_cycloneii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+143,0,"FEATURE_FAMILY_STRATIXIV__Vstatic__var_family_stratixiv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+144,0,"FEATURE_FAMILY_ARRIAIIGZ__Vstatic__var_family_arriaiigz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+145,0,"FEATURE_FAMILY_ARRIAIIGX__Vstatic__var_family_arriaiigx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+146,0,"FEATURE_FAMILY_HARDCOPYIII__Vstatic__var_family_hardcopyiii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+147,0,"FEATURE_FAMILY_HARDCOPYIV__Vstatic__var_family_hardcopyiv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+148,0,"FEATURE_FAMILY_CYCLONEV__Vstatic__var_family_cyclonev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+149,0,"FEATURE_FAMILY_ARRIAV__Vstatic__var_family_arriav",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+150,0,"FEATURE_FAMILY_MAX10__Vstatic__var_family_max10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+151,0,"FEATURE_FAMILY_STRATIX10__Vstatic__var_family_stratix10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+152,0,"FEATURE_FAMILY_BASE_STRATIXII__Vstatic__var_family_base_stratixii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+153,0,"FEATURE_FAMILY_BASE_STRATIX__Vstatic__var_family_base_stratix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+154,0,"FEATURE_FAMILY_BASE_CYCLONEII__Vstatic__var_family_base_cycloneii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+155,0,"FEATURE_FAMILY_BASE_CYCLONE__Vstatic__var_family_base_cyclone",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+156,0,"FEATURE_FAMILY_HAS_ALTERA_MULT_ADD_FLOW__Vstatic__var_family_has_altera_mult_add_flow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+157,0,"FEATURE_FAMILY_IS_ALTMULT_ADD_EOL__Vstatic__var_family_is_altmult_add_eol",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+158,0,"FEATURE_FAMILY_HAS_STRATIXII_STYLE_RAM__Vstatic__var_family_has_stratixii_style_ram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+159,0,"FEATURE_FAMILY_HAS_STRATIXIII_STYLE_RAM__Vstatic__var_family_has_stratixiii_style_ram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+160,0,"FEATURE_FAMILY_HAS_STRATIX_STYLE_PLL__Vstatic__var_family_has_stratix_style_pll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+161,0,"FEATURE_FAMILY_HAS_STRATIXII_STYLE_PLL__Vstatic__var_family_has_stratixii_style_pll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+162,0,"FEATURE_FAMILY_HAS_INVERTED_OUTPUT_DDIO__Vstatic__var_family_has_inverted_output_ddio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+163,0,"IS_VALID_FAMILY__Vstatic__is_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev__0(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_init_sub__TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev__0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+164,0,"IS_FAMILY_ARRIA10__Vstatic__is_arria10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+165,0,"IS_FAMILY_ARRIAGX__Vstatic__is_arriagx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+166,0,"IS_FAMILY_ARRIAIIGX__Vstatic__is_arriaiigx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+167,0,"IS_FAMILY_ARRIAIIGZ__Vstatic__is_arriaiigz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+168,0,"IS_FAMILY_ARRIAVGZ__Vstatic__is_arriavgz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+169,0,"IS_FAMILY_ARRIAV__Vstatic__is_arriav",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+170,0,"IS_FAMILY_CYCLONE10LP__Vstatic__is_cyclone10lp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+171,0,"IS_FAMILY_CYCLONEII__Vstatic__is_cycloneii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+172,0,"IS_FAMILY_CYCLONEIIILS__Vstatic__is_cycloneiiils",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+173,0,"IS_FAMILY_CYCLONEIII__Vstatic__is_cycloneiii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+174,0,"IS_FAMILY_CYCLONEIVE__Vstatic__is_cycloneive",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+175,0,"IS_FAMILY_CYCLONEIVGX__Vstatic__is_cycloneivgx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+176,0,"IS_FAMILY_CYCLONEV__Vstatic__is_cyclonev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+177,0,"IS_FAMILY_CYCLONE__Vstatic__is_cyclone",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+178,0,"IS_FAMILY_HARDCOPYII__Vstatic__is_hardcopyii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+179,0,"IS_FAMILY_HARDCOPYIII__Vstatic__is_hardcopyiii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+180,0,"IS_FAMILY_HARDCOPYIV__Vstatic__is_hardcopyiv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+181,0,"IS_FAMILY_MAX10__Vstatic__is_max10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+182,0,"IS_FAMILY_MAXII__Vstatic__is_maxii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+183,0,"IS_FAMILY_MAXV__Vstatic__is_maxv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+184,0,"IS_FAMILY_STRATIX10__Vstatic__is_stratix10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+185,0,"IS_FAMILY_STRATIXGX__Vstatic__is_stratixgx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+186,0,"IS_FAMILY_STRATIXIIGX__Vstatic__is_stratixiigx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+187,0,"IS_FAMILY_STRATIXII__Vstatic__is_stratixii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+188,0,"IS_FAMILY_STRATIXIII__Vstatic__is_stratixiii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+189,0,"IS_FAMILY_STRATIXIV__Vstatic__is_stratixiv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+190,0,"IS_FAMILY_STRATIXV__Vstatic__is_stratixv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+191,0,"IS_FAMILY_STRATIX__Vstatic__is_stratix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+192,0,"FEATURE_FAMILY_STRATIXGX__Vstatic__var_family_stratixgx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"FEATURE_FAMILY_CYCLONE__Vstatic__var_family_cyclone",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+194,0,"FEATURE_FAMILY_STRATIXIIGX__Vstatic__var_family_stratixiigx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+195,0,"FEATURE_FAMILY_STRATIXIII__Vstatic__var_family_stratixiii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+196,0,"FEATURE_FAMILY_ARRIAVGZ__Vstatic__var_family_arriavgz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+197,0,"FEATURE_FAMILY_STRATIXV__Vstatic__var_family_stratixv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+198,0,"FEATURE_FAMILY_ARRIA10__Vstatic__var_family_arria10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+199,0,"FEATURE_FAMILY_CYCLONE10LP__Vstatic__var_family_cyclone10lp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+200,0,"FEATURE_FAMILY_STRATIXII__Vstatic__var_family_stratixii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+201,0,"FEATURE_FAMILY_CYCLONEIVGX__Vstatic__var_family_cycloneivgx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+202,0,"FEATURE_FAMILY_CYCLONEIVE__Vstatic__var_family_cycloneive",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+203,0,"FEATURE_FAMILY_CYCLONEIII__Vstatic__var_family_cycloneiii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+204,0,"FEATURE_FAMILY_STRATIX_HC__Vstatic__var_family_stratix_hc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+205,0,"FEATURE_FAMILY_STRATIX__Vstatic__var_family_stratix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+206,0,"FEATURE_FAMILY_MAXII__Vstatic__var_family_maxii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+207,0,"FEATURE_FAMILY_MAXV__Vstatic__var_family_maxv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+208,0,"FEATURE_FAMILY_CYCLONEII__Vstatic__var_family_cycloneii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+209,0,"FEATURE_FAMILY_STRATIXIV__Vstatic__var_family_stratixiv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+210,0,"FEATURE_FAMILY_ARRIAIIGZ__Vstatic__var_family_arriaiigz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+211,0,"FEATURE_FAMILY_ARRIAIIGX__Vstatic__var_family_arriaiigx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+212,0,"FEATURE_FAMILY_HARDCOPYIII__Vstatic__var_family_hardcopyiii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+213,0,"FEATURE_FAMILY_HARDCOPYIV__Vstatic__var_family_hardcopyiv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+214,0,"FEATURE_FAMILY_CYCLONEV__Vstatic__var_family_cyclonev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+215,0,"FEATURE_FAMILY_ARRIAV__Vstatic__var_family_arriav",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+216,0,"FEATURE_FAMILY_MAX10__Vstatic__var_family_max10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+217,0,"FEATURE_FAMILY_STRATIX10__Vstatic__var_family_stratix10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+218,0,"FEATURE_FAMILY_BASE_STRATIXII__Vstatic__var_family_base_stratixii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+219,0,"FEATURE_FAMILY_BASE_STRATIX__Vstatic__var_family_base_stratix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+220,0,"FEATURE_FAMILY_BASE_CYCLONEII__Vstatic__var_family_base_cycloneii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+221,0,"FEATURE_FAMILY_BASE_CYCLONE__Vstatic__var_family_base_cyclone",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+222,0,"FEATURE_FAMILY_HAS_ALTERA_MULT_ADD_FLOW__Vstatic__var_family_has_altera_mult_add_flow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+223,0,"FEATURE_FAMILY_IS_ALTMULT_ADD_EOL__Vstatic__var_family_is_altmult_add_eol",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+224,0,"FEATURE_FAMILY_HAS_STRATIXII_STYLE_RAM__Vstatic__var_family_has_stratixii_style_ram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+225,0,"FEATURE_FAMILY_HAS_STRATIXIII_STYLE_RAM__Vstatic__var_family_has_stratixiii_style_ram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+226,0,"FEATURE_FAMILY_HAS_STRATIX_STYLE_PLL__Vstatic__var_family_has_stratix_style_pll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+227,0,"FEATURE_FAMILY_HAS_STRATIXII_STYLE_PLL__Vstatic__var_family_has_stratixii_style_pll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+228,0,"FEATURE_FAMILY_HAS_INVERTED_OUTPUT_DDIO__Vstatic__var_family_has_inverted_output_ddio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+229,0,"IS_VALID_FAMILY__Vstatic__is_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
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

extern const VlWide<11>/*351:0*/ VHighRiscTb__ConstPool__CONST_hdf32e259_0;
extern const VlWide<11>/*351:0*/ VHighRiscTb__ConstPool__CONST_hf2f5b187_0;

VL_ATTR_COLD void VHighRiscTb___024root__trace_const_0_sub_0(VHighRiscTb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_const_0_sub_0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullSData(oldp+1038,(vlSelfRef.HighRiscTb__DOT__AddrAssert),16);
    bufp->fullIData(oldp+1039,(7U),32);
    bufp->fullIData(oldp+1040,(9U),32);
    bufp->fullIData(oldp+1041,(0x00000010U),32);
    bufp->fullIData(oldp+1042,(0x0000000eU),32);
    bufp->fullIData(oldp+1043,(0x00004000U),32);
    bufp->fullQData(oldp+1044,(0x0000434c4f434b30ULL),48);
    bufp->fullIData(oldp+1046,(0x4e4f4e45U),32);
    bufp->fullIData(oldp+1047,(1U),32);
    bufp->fullIData(oldp+1048,(0U),32);
    bufp->fullQData(oldp+1049,(0x0000434c4f434b31ULL),48);
    __Vtemp_1[0U] = 0x45524544U;
    __Vtemp_1[1U] = 0x47495354U;
    __Vtemp_1[2U] = 0x554e5245U;
    bufp->fullWData(oldp+1051,(__Vtemp_1),96);
    bufp->fullQData(oldp+1054,(0x0000425950415353ULL),48);
    bufp->fullQData(oldp+1056,(0x00004e4f524d414cULL),48);
    __Vtemp_2[0U] = 0x4c4b454eU;
    __Vtemp_2[1U] = 0x55545f43U;
    __Vtemp_2[2U] = 0x5f494e50U;
    __Vtemp_2[3U] = 0x00555345U;
    bufp->fullWData(oldp+1058,(__Vtemp_2),120);
    __Vtemp_3[0U] = 0x52454144U;
    __Vtemp_3[1U] = 0x4e42455fU;
    __Vtemp_3[2U] = 0x5f4e4f5fU;
    __Vtemp_3[3U] = 0x44415441U;
    __Vtemp_3[4U] = 0x4e45575fU;
    bufp->fullWData(oldp+1062,(__Vtemp_3),160);
    bufp->fullQData(oldp+1067,(0x00000046414c5345ULL),40);
    bufp->fullIData(oldp+1069,(3U),32);
    __Vtemp_4[0U] = 0x504f5254U;
    __Vtemp_4[1U] = 0x474c455fU;
    __Vtemp_4[2U] = 0x0053494eU;
    bufp->fullWData(oldp+1070,(__Vtemp_4),88);
    __Vtemp_5[0U] = 0x43415245U;
    __Vtemp_5[1U] = 0x4f4e545fU;
    __Vtemp_5[2U] = 0x00000044U;
    bufp->fullWData(oldp+1073,(__Vtemp_5),72);
    bufp->fullIData(oldp+1076,(0x4155544fU),32);
    bufp->fullQData(oldp+1077,(0x446174612e6d6966ULL),64);
    bufp->fullQData(oldp+1079,(0x0000554e55534544ULL),48);
    __Vtemp_6[0U] = 0x6e652056U;
    __Vtemp_6[1U] = 0x79636c6fU;
    __Vtemp_6[2U] = 0x00000043U;
    bufp->fullWData(oldp+1081,(__Vtemp_6),72);
    bufp->fullWData(oldp+1084,(VHighRiscTb__ConstPool__CONST_hdf32e259_0),328);
    __Vtemp_7[0U] = 0x6372616dU;
    __Vtemp_7[1U] = 0x7473796eU;
    __Vtemp_7[2U] = 0x0000616cU;
    bufp->fullWData(oldp+1095,(__Vtemp_7),80);
    bufp->fullIData(oldp+1098,(0x004f4646U),24);
    bufp->fullBit(oldp+1099,(0U));
    bufp->fullBit(oldp+1100,(1U));
    bufp->fullBit(oldp+1101,(1U));
    bufp->fullBit(oldp+1102,(0U));
    bufp->fullCData(oldp+1103,(0U),3);
    bufp->fullIData(oldp+1104,(8U),32);
    bufp->fullSData(oldp+1105,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa2),16);
    bufp->fullSData(oldp+1106,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa2b),16);
    bufp->fullSData(oldp+1107,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__init_temp),16);
    bufp->fullBit(oldp+1108,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wb));
    bufp->fullBit(oldp+1109,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wb2));
    bufp->fullBit(oldp+1110,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp));
    bufp->fullBit(oldp+1111,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_output_latch));
    bufp->fullBit(oldp+1112,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_ecc_reg_b));
    bufp->fullBit(oldp+1113,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_ecc_tmp_b));
    bufp->fullSData(oldp+1114,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_tmp),16);
    bufp->fullBit(oldp+1115,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_tmp));
    bufp->fullBit(oldp+1116,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_out_a));
    bufp->fullIData(oldp+1117,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__file_desc),32);
    bufp->fullSData(oldp+1118,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__wa_mult_x_ii),16);
    bufp->fullSData(oldp+1119,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__wa_mult_x_iii),16);
    bufp->fullIData(oldp+1120,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__add_reg_a_mult_wa),30);
    bufp->fullCData(oldp+1121,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__add_reg_b_mult_wb),2);
    bufp->fullIData(oldp+1122,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__add_reg_a_mult_wa_pl_wa),30);
    bufp->fullCData(oldp+1123,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__add_reg_b_mult_wb_pl_wb),2);
    bufp->fullBit(oldp+1124,(0U));
    bufp->fullBit(oldp+1125,(1U));
    bufp->fullBit(oldp+1126,(1U));
    bufp->fullIData(oldp+1127,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a_idx),32);
    bufp->fullIData(oldp+1128,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__init_i),32);
    bufp->fullIData(oldp+1129,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i2),32);
    bufp->fullIData(oldp+1130,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i3),32);
    bufp->fullIData(oldp+1131,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i4),32);
    bufp->fullIData(oldp+1132,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j),32);
    bufp->fullIData(oldp+1133,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j2),32);
    bufp->fullIData(oldp+1134,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j3),32);
    bufp->fullIData(oldp+1135,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__k),32);
    bufp->fullIData(oldp+1136,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__k2),32);
    bufp->fullIData(oldp+1137,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__k3),32);
    bufp->fullIData(oldp+1138,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__k4),32);
    bufp->fullIData(oldp+1139,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_div_wa),32);
    bufp->fullIData(oldp+1140,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_div_wb),32);
    bufp->fullIData(oldp+1141,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j_plus_i2),32);
    bufp->fullIData(oldp+1142,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j2_plus_i5),32);
    bufp->fullIData(oldp+1143,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j3_plus_i5),32);
    bufp->fullIData(oldp+1144,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j_plus_i2_div_a),32);
    bufp->fullIData(oldp+1145,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j2_plus_i5_div_a),32);
    bufp->fullIData(oldp+1146,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j3_plus_i5_div_a),32);
    bufp->fullIData(oldp+1147,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j3_plus_i5_div_b),32);
    bufp->fullIData(oldp+1148,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_high),32);
    bufp->fullBit(oldp+1149,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__MemWriteEnable));
    bufp->fullCData(oldp+1150,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iAluMuxA__DOT__Flags),5);
    bufp->fullCData(oldp+1151,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iAluMuxB__DOT__Flags),5);
    bufp->fullIData(oldp+1152,(0x00000010U),32);
    bufp->fullIData(oldp+1153,(0x00000040U),32);
    bufp->fullIData(oldp+1154,(6U),32);
    bufp->fullIData(oldp+1155,(0x00524f4dU),24);
    __Vtemp_8[0U] = 0x2e6d6966U;
    __Vtemp_8[1U] = 0x6772616dU;
    __Vtemp_8[2U] = 0x0050726fU;
    bufp->fullWData(oldp+1156,(__Vtemp_8),88);
    bufp->fullWData(oldp+1159,(VHighRiscTb__ConstPool__CONST_hf2f5b187_0),328);
    bufp->fullSData(oldp+1170,(0xffffU),16);
    bufp->fullSData(oldp+1171,(0xffffU),16);
    bufp->fullSData(oldp+1172,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa),16);
    bufp->fullSData(oldp+1173,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa2),16);
    bufp->fullSData(oldp+1174,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa2b),16);
    bufp->fullSData(oldp+1175,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__init_temp),16);
    bufp->fullBit(oldp+1176,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wb));
    bufp->fullBit(oldp+1177,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wb2));
    bufp->fullBit(oldp+1178,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp));
    bufp->fullBit(oldp+1179,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_output_latch));
    bufp->fullBit(oldp+1180,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_ecc_reg_b));
    bufp->fullBit(oldp+1181,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_ecc_tmp_b));
    bufp->fullSData(oldp+1182,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_tmp),16);
    bufp->fullBit(oldp+1183,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_tmp));
    bufp->fullBit(oldp+1184,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_out_a));
    bufp->fullIData(oldp+1185,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__file_desc),32);
    bufp->fullSData(oldp+1186,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__wa_mult_x_ii),16);
    bufp->fullSData(oldp+1187,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__wa_mult_x_iii),16);
    bufp->fullIData(oldp+1188,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__add_reg_a_mult_wa),30);
    bufp->fullCData(oldp+1189,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__add_reg_b_mult_wb),2);
    bufp->fullIData(oldp+1190,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__add_reg_a_mult_wa_pl_wa),30);
    bufp->fullCData(oldp+1191,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__add_reg_b_mult_wb_pl_wb),2);
    bufp->fullIData(oldp+1192,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a_idx),32);
    bufp->fullIData(oldp+1193,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__init_i),32);
    bufp->fullIData(oldp+1194,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i2),32);
    bufp->fullIData(oldp+1195,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i3),32);
    bufp->fullIData(oldp+1196,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i4),32);
    bufp->fullIData(oldp+1197,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i5),32);
    bufp->fullIData(oldp+1198,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j),32);
    bufp->fullIData(oldp+1199,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j2),32);
    bufp->fullIData(oldp+1200,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j3),32);
    bufp->fullIData(oldp+1201,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__k),32);
    bufp->fullIData(oldp+1202,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__k2),32);
    bufp->fullIData(oldp+1203,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__k3),32);
    bufp->fullIData(oldp+1204,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__k4),32);
    bufp->fullIData(oldp+1205,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_div_wa),32);
    bufp->fullIData(oldp+1206,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_div_wb),32);
    bufp->fullIData(oldp+1207,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j_plus_i2),32);
    bufp->fullIData(oldp+1208,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j2_plus_i5),32);
    bufp->fullIData(oldp+1209,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j3_plus_i5),32);
    bufp->fullIData(oldp+1210,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j_plus_i2_div_a),32);
    bufp->fullIData(oldp+1211,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j2_plus_i5_div_a),32);
    bufp->fullIData(oldp+1212,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j3_plus_i5_div_a),32);
    bufp->fullIData(oldp+1213,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j3_plus_i5_div_b),32);
    bufp->fullIData(oldp+1214,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low),32);
    bufp->fullIData(oldp+1215,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_high),32);
    bufp->fullIData(oldp+1216,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_b_bit_count_low),32);
    bufp->fullIData(oldp+1217,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_b_bit_count_high),32);
    bufp->fullSData(oldp+1218,(vlSymsp->TOP__assertionmath.__PVT__nInSrc),16);
    bufp->fullIData(oldp+1219,(vlSymsp->TOP__assertionmath.__PVT__full_product),32);
    bufp->fullIData(oldp+1220,(6U),32);
    bufp->fullIData(oldp+1221,(0x0000000bU),32);
    bufp->fullIData(oldp+1222,(9U),32);
    bufp->fullIData(oldp+1223,(0x0000000cU),32);
    bufp->fullIData(oldp+1224,(4U),32);
    bufp->fullIData(oldp+1225,(2U),32);
    bufp->fullSData(oldp+1226,(0U),16);
    bufp->fullSData(oldp+1227,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__SlaveReadData0),16);
    bufp->fullSData(oldp+1228,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__SlaveReadData1),16);
    bufp->fullSData(oldp+1229,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData0),16);
    bufp->fullSData(oldp+1230,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData1),16);
    bufp->fullSData(oldp+1231,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__SlaveReadData0),16);
    bufp->fullSData(oldp+1232,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__SlaveReadData1),16);
    bufp->fullSData(oldp+1233,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData0),16);
    bufp->fullSData(oldp+1234,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData1),16);
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_full_0_sub_0(VHighRiscTb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VHighRiscTb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_full_0\n"); );
    // Body
    VHighRiscTb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VHighRiscTb___024root*>(voidSelf);
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VHighRiscTb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_full_dtype____0(VHighRiscTb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar);
VL_ATTR_COLD void VHighRiscTb___024root__trace_full_dtype____1(VHighRiscTb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar);

VL_ATTR_COLD void VHighRiscTb___024root__trace_full_0_sub_0(VHighRiscTb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_full_0_sub_0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__pointer),32);
    bufp->fullIData(oldp+1,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__pointer_max),32);
    bufp->fullIData(oldp+2,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__pointer_min),32);
    bufp->fullIData(oldp+3,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__flag_err),32);
    bufp->fullIData(oldp+4,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__flag),32);
    bufp->fullIData(oldp+5,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__flag_double),32);
    bufp->fullIData(oldp+6,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__flag_triple),32);
    bufp->fullIData(oldp+7,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__flag_single),32);
    bufp->fullIData(oldp+8,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__flag_no_err),32);
    bufp->fullIData(oldp+9,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__flag_uncorr),32);
    bufp->fullIData(oldp+10,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__n),32);
    bufp->fullIData(oldp+11,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__err),32);
    bufp->fullIData(oldp+12,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__found),32);
    bufp->fullIData(oldp+13,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__found_2),32);
    bufp->fullIData(oldp+14,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_mif2ver__Vstatic__r2),32);
    bufp->fullIData(oldp+15,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_mif2ver__Vstatic__j),32);
    bufp->fullIData(oldp+16,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_mif2ver__Vstatic__k),32);
    bufp->fullIData(oldp+17,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_mif2ver__Vstatic__m),32);
    bufp->fullIData(oldp+18,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_mif2ver__Vstatic__n),32);
    bufp->fullCData(oldp+19,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__c),8);
    bufp->fullCData(oldp+20,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__hex),4);
    bufp->fullCData(oldp+21,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_hex2ver__Vstatic__tmp_char),4);
    bufp->fullBit(oldp+22,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__done));
    bufp->fullBit(oldp+23,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__error_status));
    bufp->fullBit(oldp+24,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__first_rec));
    bufp->fullBit(oldp+25,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__last_rec));
    bufp->fullBit(oldp+26,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__first_normal_record));
    bufp->fullBit(oldp+27,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__is_word_address_format));
    bufp->fullIData(oldp+28,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__ifp),32);
    bufp->fullIData(oldp+29,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__ofp),32);
    bufp->fullIData(oldp+30,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__r),32);
    bufp->fullIData(oldp+31,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_hex2ver__Vstatic__r2),32);
    bufp->fullIData(oldp+32,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__i),32);
    bufp->fullIData(oldp+33,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__j),32);
    bufp->fullIData(oldp+34,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__k),32);
    bufp->fullIData(oldp+35,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__m),32);
    bufp->fullIData(oldp+36,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_hex2ver__Vstatic__n),32);
    bufp->fullIData(oldp+37,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__off_addr),32);
    bufp->fullIData(oldp+38,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__nn),32);
    bufp->fullIData(oldp+39,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__aaaa),32);
    bufp->fullIData(oldp+40,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__aaaa_pre),32);
    bufp->fullIData(oldp+41,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__tt),32);
    bufp->fullIData(oldp+42,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__cc),32);
    bufp->fullIData(oldp+43,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__aah),32);
    bufp->fullIData(oldp+44,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__aal),32);
    bufp->fullIData(oldp+45,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__dd),32);
    bufp->fullIData(oldp+46,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__sum),32);
    bufp->fullIData(oldp+47,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__line_no),32);
    bufp->fullIData(oldp+48,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__divide_factor),32);
    bufp->fullIData(oldp+49,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__pointer),32);
    bufp->fullIData(oldp+50,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__pointer_max),32);
    bufp->fullIData(oldp+51,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__pointer_min),32);
    bufp->fullIData(oldp+52,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__flag_err),32);
    bufp->fullIData(oldp+53,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__flag),32);
    bufp->fullIData(oldp+54,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__flag_double),32);
    bufp->fullIData(oldp+55,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__flag_triple),32);
    bufp->fullIData(oldp+56,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__flag_single),32);
    bufp->fullIData(oldp+57,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__flag_no_err),32);
    bufp->fullIData(oldp+58,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__flag_uncorr),32);
    bufp->fullIData(oldp+59,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__n),32);
    bufp->fullIData(oldp+60,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__err),32);
    bufp->fullIData(oldp+61,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__found),32);
    bufp->fullIData(oldp+62,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__found_2),32);
    bufp->fullIData(oldp+63,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_mif2ver__Vstatic__r2),32);
    bufp->fullIData(oldp+64,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_mif2ver__Vstatic__j),32);
    bufp->fullIData(oldp+65,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_mif2ver__Vstatic__k),32);
    bufp->fullIData(oldp+66,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_mif2ver__Vstatic__m),32);
    bufp->fullIData(oldp+67,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_mif2ver__Vstatic__n),32);
    bufp->fullCData(oldp+68,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__c),8);
    bufp->fullCData(oldp+69,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__hex),4);
    bufp->fullCData(oldp+70,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_hex2ver__Vstatic__tmp_char),4);
    bufp->fullBit(oldp+71,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__done));
    bufp->fullBit(oldp+72,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__error_status));
    bufp->fullBit(oldp+73,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__first_rec));
    bufp->fullBit(oldp+74,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__last_rec));
    bufp->fullBit(oldp+75,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__first_normal_record));
    bufp->fullBit(oldp+76,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__is_word_address_format));
    bufp->fullIData(oldp+77,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__ifp),32);
    bufp->fullIData(oldp+78,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__ofp),32);
    bufp->fullIData(oldp+79,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__r),32);
    bufp->fullIData(oldp+80,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_hex2ver__Vstatic__r2),32);
    bufp->fullIData(oldp+81,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__i),32);
    bufp->fullIData(oldp+82,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__j),32);
    bufp->fullIData(oldp+83,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__k),32);
    bufp->fullIData(oldp+84,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__m),32);
    bufp->fullIData(oldp+85,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_hex2ver__Vstatic__n),32);
    bufp->fullIData(oldp+86,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__off_addr),32);
    bufp->fullIData(oldp+87,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__nn),32);
    bufp->fullIData(oldp+88,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__aaaa),32);
    bufp->fullIData(oldp+89,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__aaaa_pre),32);
    bufp->fullIData(oldp+90,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__tt),32);
    bufp->fullIData(oldp+91,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__cc),32);
    bufp->fullIData(oldp+92,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__aah),32);
    bufp->fullIData(oldp+93,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__aal),32);
    bufp->fullIData(oldp+94,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__dd),32);
    bufp->fullIData(oldp+95,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__sum),32);
    bufp->fullIData(oldp+96,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__line_no),32);
    bufp->fullIData(oldp+97,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__divide_factor),32);
    bufp->fullBit(oldp+98,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_ARRIA10__Vstatic__is_arria10));
    bufp->fullBit(oldp+99,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_ARRIAGX__Vstatic__is_arriagx));
    bufp->fullBit(oldp+100,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_ARRIAIIGX__Vstatic__is_arriaiigx));
    bufp->fullBit(oldp+101,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_ARRIAIIGZ__Vstatic__is_arriaiigz));
    bufp->fullBit(oldp+102,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_ARRIAVGZ__Vstatic__is_arriavgz));
    bufp->fullBit(oldp+103,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_ARRIAV__Vstatic__is_arriav));
    bufp->fullBit(oldp+104,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONE10LP__Vstatic__is_cyclone10lp));
    bufp->fullBit(oldp+105,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONEII__Vstatic__is_cycloneii));
    bufp->fullBit(oldp+106,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONEIIILS__Vstatic__is_cycloneiiils));
    bufp->fullBit(oldp+107,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONEIII__Vstatic__is_cycloneiii));
    bufp->fullBit(oldp+108,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONEIVE__Vstatic__is_cycloneive));
    bufp->fullBit(oldp+109,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONEIVGX__Vstatic__is_cycloneivgx));
    bufp->fullBit(oldp+110,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONEV__Vstatic__is_cyclonev));
    bufp->fullBit(oldp+111,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONE__Vstatic__is_cyclone));
    bufp->fullBit(oldp+112,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_HARDCOPYII__Vstatic__is_hardcopyii));
    bufp->fullBit(oldp+113,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_HARDCOPYIII__Vstatic__is_hardcopyiii));
    bufp->fullBit(oldp+114,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_HARDCOPYIV__Vstatic__is_hardcopyiv));
    bufp->fullBit(oldp+115,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_MAX10__Vstatic__is_max10));
    bufp->fullBit(oldp+116,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_MAXII__Vstatic__is_maxii));
    bufp->fullBit(oldp+117,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_MAXV__Vstatic__is_maxv));
    bufp->fullBit(oldp+118,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIX10__Vstatic__is_stratix10));
    bufp->fullBit(oldp+119,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIXGX__Vstatic__is_stratixgx));
    bufp->fullBit(oldp+120,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIXIIGX__Vstatic__is_stratixiigx));
    bufp->fullBit(oldp+121,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIXII__Vstatic__is_stratixii));
    bufp->fullBit(oldp+122,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIXIII__Vstatic__is_stratixiii));
    bufp->fullBit(oldp+123,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIXIV__Vstatic__is_stratixiv));
    bufp->fullBit(oldp+124,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIXV__Vstatic__is_stratixv));
    bufp->fullBit(oldp+125,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIX__Vstatic__is_stratix));
    bufp->fullBit(oldp+126,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIXGX__Vstatic__var_family_stratixgx));
    bufp->fullBit(oldp+127,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_CYCLONE__Vstatic__var_family_cyclone));
    bufp->fullBit(oldp+128,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIXIIGX__Vstatic__var_family_stratixiigx));
    bufp->fullBit(oldp+129,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIXIII__Vstatic__var_family_stratixiii));
    bufp->fullBit(oldp+130,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_ARRIAVGZ__Vstatic__var_family_arriavgz));
    bufp->fullBit(oldp+131,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIXV__Vstatic__var_family_stratixv));
    bufp->fullBit(oldp+132,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_ARRIA10__Vstatic__var_family_arria10));
    bufp->fullBit(oldp+133,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_CYCLONE10LP__Vstatic__var_family_cyclone10lp));
    bufp->fullBit(oldp+134,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIXII__Vstatic__var_family_stratixii));
    bufp->fullBit(oldp+135,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_CYCLONEIVGX__Vstatic__var_family_cycloneivgx));
    bufp->fullBit(oldp+136,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_CYCLONEIVE__Vstatic__var_family_cycloneive));
    bufp->fullBit(oldp+137,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_CYCLONEIII__Vstatic__var_family_cycloneiii));
    bufp->fullBit(oldp+138,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIX_HC__Vstatic__var_family_stratix_hc));
    bufp->fullBit(oldp+139,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIX__Vstatic__var_family_stratix));
    bufp->fullBit(oldp+140,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_MAXII__Vstatic__var_family_maxii));
    bufp->fullBit(oldp+141,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_MAXV__Vstatic__var_family_maxv));
    bufp->fullBit(oldp+142,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_CYCLONEII__Vstatic__var_family_cycloneii));
    bufp->fullBit(oldp+143,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIXIV__Vstatic__var_family_stratixiv));
    bufp->fullBit(oldp+144,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_ARRIAIIGZ__Vstatic__var_family_arriaiigz));
    bufp->fullBit(oldp+145,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_ARRIAIIGX__Vstatic__var_family_arriaiigx));
    bufp->fullBit(oldp+146,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HARDCOPYIII__Vstatic__var_family_hardcopyiii));
    bufp->fullBit(oldp+147,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HARDCOPYIV__Vstatic__var_family_hardcopyiv));
    bufp->fullBit(oldp+148,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_CYCLONEV__Vstatic__var_family_cyclonev));
    bufp->fullBit(oldp+149,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_ARRIAV__Vstatic__var_family_arriav));
    bufp->fullBit(oldp+150,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_MAX10__Vstatic__var_family_max10));
    bufp->fullBit(oldp+151,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIX10__Vstatic__var_family_stratix10));
    bufp->fullBit(oldp+152,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_BASE_STRATIXII__Vstatic__var_family_base_stratixii));
    bufp->fullBit(oldp+153,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_BASE_STRATIX__Vstatic__var_family_base_stratix));
    bufp->fullBit(oldp+154,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_BASE_CYCLONEII__Vstatic__var_family_base_cycloneii));
    bufp->fullBit(oldp+155,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_BASE_CYCLONE__Vstatic__var_family_base_cyclone));
    bufp->fullBit(oldp+156,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HAS_ALTERA_MULT_ADD_FLOW__Vstatic__var_family_has_altera_mult_add_flow));
    bufp->fullBit(oldp+157,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_IS_ALTMULT_ADD_EOL__Vstatic__var_family_is_altmult_add_eol));
    bufp->fullBit(oldp+158,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HAS_STRATIXII_STYLE_RAM__Vstatic__var_family_has_stratixii_style_ram));
    bufp->fullBit(oldp+159,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HAS_STRATIXIII_STYLE_RAM__Vstatic__var_family_has_stratixiii_style_ram));
    bufp->fullBit(oldp+160,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HAS_STRATIX_STYLE_PLL__Vstatic__var_family_has_stratix_style_pll));
    bufp->fullBit(oldp+161,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HAS_STRATIXII_STYLE_PLL__Vstatic__var_family_has_stratixii_style_pll));
    bufp->fullBit(oldp+162,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HAS_INVERTED_OUTPUT_DDIO__Vstatic__var_family_has_inverted_output_ddio));
    bufp->fullBit(oldp+163,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_VALID_FAMILY__Vstatic__is_valid));
    bufp->fullBit(oldp+164,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_ARRIA10__Vstatic__is_arria10));
    bufp->fullBit(oldp+165,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_ARRIAGX__Vstatic__is_arriagx));
    bufp->fullBit(oldp+166,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_ARRIAIIGX__Vstatic__is_arriaiigx));
    bufp->fullBit(oldp+167,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_ARRIAIIGZ__Vstatic__is_arriaiigz));
    bufp->fullBit(oldp+168,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_ARRIAVGZ__Vstatic__is_arriavgz));
    bufp->fullBit(oldp+169,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_ARRIAV__Vstatic__is_arriav));
    bufp->fullBit(oldp+170,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONE10LP__Vstatic__is_cyclone10lp));
    bufp->fullBit(oldp+171,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONEII__Vstatic__is_cycloneii));
    bufp->fullBit(oldp+172,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONEIIILS__Vstatic__is_cycloneiiils));
    bufp->fullBit(oldp+173,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONEIII__Vstatic__is_cycloneiii));
    bufp->fullBit(oldp+174,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONEIVE__Vstatic__is_cycloneive));
    bufp->fullBit(oldp+175,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONEIVGX__Vstatic__is_cycloneivgx));
    bufp->fullBit(oldp+176,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONEV__Vstatic__is_cyclonev));
    bufp->fullBit(oldp+177,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONE__Vstatic__is_cyclone));
    bufp->fullBit(oldp+178,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_HARDCOPYII__Vstatic__is_hardcopyii));
    bufp->fullBit(oldp+179,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_HARDCOPYIII__Vstatic__is_hardcopyiii));
    bufp->fullBit(oldp+180,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_HARDCOPYIV__Vstatic__is_hardcopyiv));
    bufp->fullBit(oldp+181,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_MAX10__Vstatic__is_max10));
    bufp->fullBit(oldp+182,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_MAXII__Vstatic__is_maxii));
    bufp->fullBit(oldp+183,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_MAXV__Vstatic__is_maxv));
    bufp->fullBit(oldp+184,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIX10__Vstatic__is_stratix10));
    bufp->fullBit(oldp+185,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIXGX__Vstatic__is_stratixgx));
    bufp->fullBit(oldp+186,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIXIIGX__Vstatic__is_stratixiigx));
    bufp->fullBit(oldp+187,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIXII__Vstatic__is_stratixii));
    bufp->fullBit(oldp+188,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIXIII__Vstatic__is_stratixiii));
    bufp->fullBit(oldp+189,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIXIV__Vstatic__is_stratixiv));
    bufp->fullBit(oldp+190,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIXV__Vstatic__is_stratixv));
    bufp->fullBit(oldp+191,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIX__Vstatic__is_stratix));
    bufp->fullBit(oldp+192,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIXGX__Vstatic__var_family_stratixgx));
    bufp->fullBit(oldp+193,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_CYCLONE__Vstatic__var_family_cyclone));
    bufp->fullBit(oldp+194,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIXIIGX__Vstatic__var_family_stratixiigx));
    bufp->fullBit(oldp+195,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIXIII__Vstatic__var_family_stratixiii));
    bufp->fullBit(oldp+196,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_ARRIAVGZ__Vstatic__var_family_arriavgz));
    bufp->fullBit(oldp+197,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIXV__Vstatic__var_family_stratixv));
    bufp->fullBit(oldp+198,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_ARRIA10__Vstatic__var_family_arria10));
    bufp->fullBit(oldp+199,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_CYCLONE10LP__Vstatic__var_family_cyclone10lp));
    bufp->fullBit(oldp+200,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIXII__Vstatic__var_family_stratixii));
    bufp->fullBit(oldp+201,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_CYCLONEIVGX__Vstatic__var_family_cycloneivgx));
    bufp->fullBit(oldp+202,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_CYCLONEIVE__Vstatic__var_family_cycloneive));
    bufp->fullBit(oldp+203,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_CYCLONEIII__Vstatic__var_family_cycloneiii));
    bufp->fullBit(oldp+204,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIX_HC__Vstatic__var_family_stratix_hc));
    bufp->fullBit(oldp+205,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIX__Vstatic__var_family_stratix));
    bufp->fullBit(oldp+206,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_MAXII__Vstatic__var_family_maxii));
    bufp->fullBit(oldp+207,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_MAXV__Vstatic__var_family_maxv));
    bufp->fullBit(oldp+208,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_CYCLONEII__Vstatic__var_family_cycloneii));
    bufp->fullBit(oldp+209,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIXIV__Vstatic__var_family_stratixiv));
    bufp->fullBit(oldp+210,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_ARRIAIIGZ__Vstatic__var_family_arriaiigz));
    bufp->fullBit(oldp+211,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_ARRIAIIGX__Vstatic__var_family_arriaiigx));
    bufp->fullBit(oldp+212,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HARDCOPYIII__Vstatic__var_family_hardcopyiii));
    bufp->fullBit(oldp+213,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HARDCOPYIV__Vstatic__var_family_hardcopyiv));
    bufp->fullBit(oldp+214,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_CYCLONEV__Vstatic__var_family_cyclonev));
    bufp->fullBit(oldp+215,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_ARRIAV__Vstatic__var_family_arriav));
    bufp->fullBit(oldp+216,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_MAX10__Vstatic__var_family_max10));
    bufp->fullBit(oldp+217,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIX10__Vstatic__var_family_stratix10));
    bufp->fullBit(oldp+218,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_BASE_STRATIXII__Vstatic__var_family_base_stratixii));
    bufp->fullBit(oldp+219,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_BASE_STRATIX__Vstatic__var_family_base_stratix));
    bufp->fullBit(oldp+220,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_BASE_CYCLONEII__Vstatic__var_family_base_cycloneii));
    bufp->fullBit(oldp+221,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_BASE_CYCLONE__Vstatic__var_family_base_cyclone));
    bufp->fullBit(oldp+222,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HAS_ALTERA_MULT_ADD_FLOW__Vstatic__var_family_has_altera_mult_add_flow));
    bufp->fullBit(oldp+223,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_IS_ALTMULT_ADD_EOL__Vstatic__var_family_is_altmult_add_eol));
    bufp->fullBit(oldp+224,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HAS_STRATIXII_STYLE_RAM__Vstatic__var_family_has_stratixii_style_ram));
    bufp->fullBit(oldp+225,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HAS_STRATIXIII_STYLE_RAM__Vstatic__var_family_has_stratixiii_style_ram));
    bufp->fullBit(oldp+226,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HAS_STRATIX_STYLE_PLL__Vstatic__var_family_has_stratix_style_pll));
    bufp->fullBit(oldp+227,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HAS_STRATIXII_STYLE_PLL__Vstatic__var_family_has_stratixii_style_pll));
    bufp->fullBit(oldp+228,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HAS_INVERTED_OUTPUT_DDIO__Vstatic__var_family_has_inverted_output_ddio));
    bufp->fullBit(oldp+229,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_VALID_FAMILY__Vstatic__is_valid));
    bufp->fullCData(oldp+230,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.tolower__Vstatic__conv_char),8);
    bufp->fullWData(oldp+231,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__buffer),2048);
    bufp->fullWData(oldp+295,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__memory_data1),1025);
    bufp->fullWData(oldp+328,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__memory_data2),1025);
    bufp->fullCData(oldp+361,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__c),8);
    bufp->fullCData(oldp+362,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__hex),4);
    bufp->fullCData(oldp+363,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__tmp_char),4);
    bufp->fullIData(oldp+364,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__address_radix),24);
    bufp->fullIData(oldp+365,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__data_radix),24);
    bufp->fullBit(oldp+366,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_width));
    bufp->fullBit(oldp+367,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_depth));
    bufp->fullBit(oldp+368,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_data_radix));
    bufp->fullBit(oldp+369,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_address_radix));
    bufp->fullBit(oldp+370,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__width_found));
    bufp->fullBit(oldp+371,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__depth_found));
    bufp->fullBit(oldp+372,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__data_radix_found));
    bufp->fullBit(oldp+373,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__address_radix_found));
    bufp->fullBit(oldp+374,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_address_data_pairs));
    bufp->fullBit(oldp+375,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_address));
    bufp->fullBit(oldp+376,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_data));
    bufp->fullBit(oldp+377,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__display_address));
    bufp->fullBit(oldp+378,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__invalid_address));
    bufp->fullBit(oldp+379,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_start_address));
    bufp->fullBit(oldp+380,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_end_address));
    bufp->fullBit(oldp+381,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__done));
    bufp->fullBit(oldp+382,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__error_status));
    bufp->fullBit(oldp+383,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__first_rec));
    bufp->fullBit(oldp+384,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__last_rec));
    bufp->fullIData(oldp+385,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__memory_width),32);
    bufp->fullIData(oldp+386,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__memory_depth),32);
    bufp->fullIData(oldp+387,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__value),32);
    bufp->fullIData(oldp+388,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__ifp),32);
    bufp->fullIData(oldp+389,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__ofp),32);
    bufp->fullIData(oldp+390,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__r),32);
    bufp->fullIData(oldp+391,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__i),32);
    bufp->fullIData(oldp+392,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__negative),32);
    bufp->fullIData(oldp+393,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__off_addr),32);
    bufp->fullIData(oldp+394,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__nn),32);
    bufp->fullIData(oldp+395,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__address),32);
    bufp->fullIData(oldp+396,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__tt),32);
    bufp->fullIData(oldp+397,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__cc),32);
    bufp->fullIData(oldp+398,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__aah),32);
    bufp->fullIData(oldp+399,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__aal),32);
    bufp->fullIData(oldp+400,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__dd),32);
    bufp->fullIData(oldp+401,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__sum),32);
    bufp->fullIData(oldp+402,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__start_address),32);
    bufp->fullIData(oldp+403,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__end_address),32);
    bufp->fullIData(oldp+404,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__line_no),32);
    bufp->fullIData(oldp+405,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__character_count),32);
    bufp->fullIData(oldp+406,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__comment_with_percent_found),32);
    bufp->fullIData(oldp+407,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__comment_with_double_minus_found),32);
    bufp->fullCData(oldp+408,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.tolower__Vstatic__conv_char),8);
    bufp->fullWData(oldp+409,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__buffer),2048);
    bufp->fullWData(oldp+473,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__memory_data1),1025);
    bufp->fullWData(oldp+506,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__memory_data2),1025);
    bufp->fullCData(oldp+539,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__c),8);
    bufp->fullCData(oldp+540,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__hex),4);
    bufp->fullCData(oldp+541,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__tmp_char),4);
    bufp->fullIData(oldp+542,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__address_radix),24);
    bufp->fullIData(oldp+543,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__data_radix),24);
    bufp->fullBit(oldp+544,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_width));
    bufp->fullBit(oldp+545,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_depth));
    bufp->fullBit(oldp+546,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_data_radix));
    bufp->fullBit(oldp+547,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_address_radix));
    bufp->fullBit(oldp+548,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__width_found));
    bufp->fullBit(oldp+549,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__depth_found));
    bufp->fullBit(oldp+550,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__data_radix_found));
    bufp->fullBit(oldp+551,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__address_radix_found));
    bufp->fullBit(oldp+552,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_address_data_pairs));
    bufp->fullBit(oldp+553,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_address));
    bufp->fullBit(oldp+554,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_data));
    bufp->fullBit(oldp+555,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__display_address));
    bufp->fullBit(oldp+556,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__invalid_address));
    bufp->fullBit(oldp+557,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_start_address));
    bufp->fullBit(oldp+558,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_end_address));
    bufp->fullBit(oldp+559,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__done));
    bufp->fullBit(oldp+560,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__error_status));
    bufp->fullBit(oldp+561,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__first_rec));
    bufp->fullBit(oldp+562,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__last_rec));
    bufp->fullIData(oldp+563,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__memory_width),32);
    bufp->fullIData(oldp+564,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__memory_depth),32);
    bufp->fullIData(oldp+565,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__value),32);
    bufp->fullIData(oldp+566,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__ifp),32);
    bufp->fullIData(oldp+567,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__ofp),32);
    bufp->fullIData(oldp+568,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__r),32);
    bufp->fullIData(oldp+569,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__i),32);
    bufp->fullIData(oldp+570,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__negative),32);
    bufp->fullIData(oldp+571,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__off_addr),32);
    bufp->fullIData(oldp+572,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__nn),32);
    bufp->fullIData(oldp+573,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__address),32);
    bufp->fullIData(oldp+574,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__tt),32);
    bufp->fullIData(oldp+575,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__cc),32);
    bufp->fullIData(oldp+576,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__aah),32);
    bufp->fullIData(oldp+577,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__aal),32);
    bufp->fullIData(oldp+578,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__dd),32);
    bufp->fullIData(oldp+579,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__sum),32);
    bufp->fullIData(oldp+580,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__start_address),32);
    bufp->fullIData(oldp+581,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__end_address),32);
    bufp->fullIData(oldp+582,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__line_no),32);
    bufp->fullIData(oldp+583,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__character_count),32);
    bufp->fullIData(oldp+584,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__comment_with_percent_found),32);
    bufp->fullIData(oldp+585,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__comment_with_double_minus_found),32);
    VHighRiscTb___024root__trace_full_dtype____0(vlSelf, bufp, 586, vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem_data_b);
    bufp->fullBit(oldp+588,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_b));
    bufp->fullBit(oldp+589,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_reg_b));
    bufp->fullBit(oldp+590,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_b));
    bufp->fullBit(oldp+591,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b));
    bufp->fullBit(oldp+592,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_b));
    bufp->fullBit(oldp+593,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_out));
    bufp->fullBit(oldp+594,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_x));
    bufp->fullWData(oldp+595,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__ram_initf),2048);
    bufp->fullBit(oldp+659,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_b));
    bufp->fullBit(oldp+660,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_b));
    bufp->fullBit(oldp+661,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_b));
    bufp->fullBit(oldp+662,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__good_to_go_b));
    bufp->fullBit(oldp+663,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__init_file_b_port));
    bufp->fullBit(oldp+664,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_nmram_write_b));
    bufp->fullSData(oldp+665,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__wa_mult_x),16);
    bufp->fullBit(oldp+666,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_data_b));
    bufp->fullBit(oldp+667,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_outdata_aclr_b_prev));
    bufp->fullBit(oldp+668,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_b));
    bufp->fullBit(oldp+669,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_b1));
    bufp->fullBit(oldp+670,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_b_signal));
    bufp->fullWData(oldp+671,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__cread_during_write_mode_mixed_ports),169);
    bufp->fullQData(oldp+677,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_ram_block_type),57);
    bufp->fullIData(oldp+679,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byte_size),32);
    bufp->fullIData(oldp+680,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_a),32);
    bufp->fullIData(oldp+681,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_b),32);
    bufp->fullIData(oldp+682,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_aclr_flag_b),32);
    bufp->fullIData(oldp+683,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i),32);
    bufp->fullQData(oldp+684,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_write_time_b),64);
    VHighRiscTb___024root__trace_full_dtype____1(vlSelf, bufp, 686, vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem_data_b);
    bufp->fullBit(oldp+688,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_b));
    bufp->fullSData(oldp+689,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_reg_a),16);
    bufp->fullBit(oldp+690,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_reg_b));
    bufp->fullBit(oldp+691,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_b));
    bufp->fullBit(oldp+692,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b));
    bufp->fullBit(oldp+693,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_b));
    bufp->fullSData(oldp+694,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_address_a),14);
    bufp->fullBit(oldp+695,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_out));
    bufp->fullBit(oldp+696,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_x));
    bufp->fullWData(oldp+697,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__ram_initf),2048);
    bufp->fullBit(oldp+761,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_b));
    bufp->fullBit(oldp+762,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_b));
    bufp->fullBit(oldp+763,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_b));
    bufp->fullBit(oldp+764,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__good_to_go_b));
    bufp->fullBit(oldp+765,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__init_file_b_port));
    bufp->fullBit(oldp+766,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_nmram_write_a));
    bufp->fullBit(oldp+767,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_nmram_write_b));
    bufp->fullSData(oldp+768,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__wa_mult_x),16);
    bufp->fullBit(oldp+769,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_data_b));
    bufp->fullSData(oldp+770,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_data_a),16);
    bufp->fullBit(oldp+771,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_outdata_aclr_b_prev));
    bufp->fullBit(oldp+772,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_b));
    bufp->fullBit(oldp+773,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_b1));
    bufp->fullBit(oldp+774,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_b_signal));
    bufp->fullWData(oldp+775,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__cread_during_write_mode_mixed_ports),169);
    bufp->fullQData(oldp+781,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_ram_block_type),57);
    bufp->fullIData(oldp+783,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byte_size),32);
    bufp->fullIData(oldp+784,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_a),32);
    bufp->fullIData(oldp+785,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_b),32);
    bufp->fullIData(oldp+786,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_aclr_flag_a),32);
    bufp->fullIData(oldp+787,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_aclr_flag_b),32);
    bufp->fullIData(oldp+788,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i),32);
    bufp->fullIData(oldp+789,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_count),32);
    bufp->fullQData(oldp+790,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_write_time_a),64);
    bufp->fullQData(oldp+792,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_write_time_b),64);
    bufp->fullSData(oldp+794,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[0]),16);
    bufp->fullSData(oldp+795,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[1]),16);
    bufp->fullSData(oldp+796,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[2]),16);
    bufp->fullSData(oldp+797,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[3]),16);
    bufp->fullSData(oldp+798,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[4]),16);
    bufp->fullSData(oldp+799,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[5]),16);
    bufp->fullSData(oldp+800,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[6]),16);
    bufp->fullSData(oldp+801,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[7]),16);
    bufp->fullSData(oldp+802,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[8]),16);
    bufp->fullSData(oldp+803,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[9]),16);
    bufp->fullSData(oldp+804,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[10]),16);
    bufp->fullSData(oldp+805,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[11]),16);
    bufp->fullSData(oldp+806,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[12]),16);
    bufp->fullSData(oldp+807,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[13]),16);
    bufp->fullSData(oldp+808,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[14]),16);
    bufp->fullSData(oldp+809,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[15]),16);
    bufp->fullSData(oldp+810,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[16]),16);
    bufp->fullSData(oldp+811,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[17]),16);
    bufp->fullSData(oldp+812,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[18]),16);
    bufp->fullSData(oldp+813,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[19]),16);
    bufp->fullSData(oldp+814,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[20]),16);
    bufp->fullSData(oldp+815,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[21]),16);
    bufp->fullSData(oldp+816,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[22]),16);
    bufp->fullSData(oldp+817,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[23]),16);
    bufp->fullSData(oldp+818,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[24]),16);
    bufp->fullSData(oldp+819,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[25]),16);
    bufp->fullSData(oldp+820,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[26]),16);
    bufp->fullSData(oldp+821,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[27]),16);
    bufp->fullSData(oldp+822,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[28]),16);
    bufp->fullSData(oldp+823,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[29]),16);
    bufp->fullSData(oldp+824,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[30]),16);
    bufp->fullSData(oldp+825,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[31]),16);
    bufp->fullSData(oldp+826,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[0]),16);
    bufp->fullSData(oldp+827,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[1]),16);
    bufp->fullSData(oldp+828,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[2]),16);
    bufp->fullSData(oldp+829,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[3]),16);
    bufp->fullSData(oldp+830,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[4]),16);
    bufp->fullSData(oldp+831,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[5]),16);
    bufp->fullSData(oldp+832,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[6]),16);
    bufp->fullSData(oldp+833,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[7]),16);
    bufp->fullSData(oldp+834,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[8]),16);
    bufp->fullSData(oldp+835,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[9]),16);
    bufp->fullSData(oldp+836,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[10]),16);
    bufp->fullSData(oldp+837,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[11]),16);
    bufp->fullSData(oldp+838,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[12]),16);
    bufp->fullSData(oldp+839,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[13]),16);
    bufp->fullSData(oldp+840,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[14]),16);
    bufp->fullSData(oldp+841,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[15]),16);
    bufp->fullSData(oldp+842,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[16]),16);
    bufp->fullSData(oldp+843,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[17]),16);
    bufp->fullSData(oldp+844,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[18]),16);
    bufp->fullSData(oldp+845,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[19]),16);
    bufp->fullSData(oldp+846,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[20]),16);
    bufp->fullSData(oldp+847,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[21]),16);
    bufp->fullSData(oldp+848,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[22]),16);
    bufp->fullSData(oldp+849,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[23]),16);
    bufp->fullSData(oldp+850,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[24]),16);
    bufp->fullSData(oldp+851,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[25]),16);
    bufp->fullSData(oldp+852,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[26]),16);
    bufp->fullSData(oldp+853,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[27]),16);
    bufp->fullSData(oldp+854,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[28]),16);
    bufp->fullSData(oldp+855,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[29]),16);
    bufp->fullSData(oldp+856,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[30]),16);
    bufp->fullSData(oldp+857,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[31]),16);
    bufp->fullSData(oldp+858,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_address_a),14);
    bufp->fullSData(oldp+859,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_data_a),16);
    bufp->fullIData(oldp+860,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_aclr_flag_a),32);
    bufp->fullIData(oldp+861,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_count),32);
    bufp->fullQData(oldp+862,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_write_time_a),64);
    bufp->fullSData(oldp+864,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a),16);
    bufp->fullSData(oldp+865,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a),16);
    bufp->fullSData(oldp+866,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a),14);
    bufp->fullSData(oldp+867,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out),16);
    bufp->fullSData(oldp+868,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_x),16);
    bufp->fullBit(oldp+869,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a));
    bufp->fullBit(oldp+870,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_a));
    bufp->fullBit(oldp+871,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a));
    bufp->fullBit(oldp+872,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_a));
    bufp->fullBit(oldp+873,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__good_to_go_a));
    bufp->fullBit(oldp+874,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_nmram_write_a));
    bufp->fullBit(oldp+875,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a1));
    bufp->fullBit(oldp+876,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal));
    bufp->fullBit(oldp+877,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken_a_reg));
    bufp->fullBit(oldp+878,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken0_b_reg));
    bufp->fullSData(oldp+879,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a),16);
    bufp->fullSData(oldp+880,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a),16);
    bufp->fullSData(oldp+881,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a),14);
    bufp->fullSData(oldp+882,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out),16);
    bufp->fullSData(oldp+883,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_x),16);
    bufp->fullBit(oldp+884,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a));
    bufp->fullBit(oldp+885,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_a));
    bufp->fullBit(oldp+886,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_a));
    bufp->fullBit(oldp+887,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__good_to_go_a));
    bufp->fullBit(oldp+888,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a1));
    bufp->fullBit(oldp+889,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal));
    bufp->fullBit(oldp+890,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken_a_reg));
    bufp->fullBit(oldp+891,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken0_b_reg));
    bufp->fullSData(oldp+892,(vlSelfRef.HighRiscTb__DOT__OutVal),16);
    bufp->fullSData(oldp+893,(vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal
                              .__PVT__out),16);
    bufp->fullBit(oldp+894,(vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal
                            .__PVT__Overflow));
    bufp->fullBit(oldp+895,(vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal
                            .__PVT__Parity));
    bufp->fullBit(oldp+896,(vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal
                            .__PVT__Negative));
    bufp->fullBit(oldp+897,(vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal
                            .__PVT__Zero));
    bufp->fullBit(oldp+898,(vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal
                            .__PVT__Carry));
    bufp->fullBit(oldp+899,(vlSymsp->TOP__assertionmath.temp_carry));
    bufp->fullBit(oldp+900,(vlSymsp->TOP__assertionmath.parity_sum));
    bufp->fullSData(oldp+901,(vlSymsp->TOP__assertionmath.expFlags
                              .__PVT__out),16);
    bufp->fullBit(oldp+902,(vlSymsp->TOP__assertionmath.expFlags
                            .__PVT__Overflow));
    bufp->fullBit(oldp+903,(vlSymsp->TOP__assertionmath.expFlags
                            .__PVT__Parity));
    bufp->fullBit(oldp+904,(vlSymsp->TOP__assertionmath.expFlags
                            .__PVT__Negative));
    bufp->fullBit(oldp+905,(vlSymsp->TOP__assertionmath.expFlags
                            .__PVT__Zero));
    bufp->fullBit(oldp+906,(vlSymsp->TOP__assertionmath.expFlags
                            .__PVT__Carry));
    bufp->fullSData(oldp+907,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa),16);
    bufp->fullIData(oldp+908,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i5),32);
    bufp->fullIData(oldp+909,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low),32);
    bufp->fullIData(oldp+910,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_b_bit_count_low),32);
    bufp->fullIData(oldp+911,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_b_bit_count_high),32);
    bufp->fullSData(oldp+912,((0x000003ffU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__LEDs))),10);
    bufp->fullSData(oldp+913,(vlSelfRef.HighRiscTb__DOT__uut__DOT__LEDs),16);
    bufp->fullCData(oldp+914,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags),5);
    bufp->fullCData(oldp+915,((0x00000080U | ((0x00000040U 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags) 
                                                    >> 1U)) 
                                                  << 6U)) 
                                              | ((0x00000020U 
                                                  & ((~ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags)) 
                                                     << 5U)) 
                                                 | (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags))))),8);
    bufp->fullSData(oldp+916,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair),16);
    bufp->fullBit(oldp+917,((2U == (0x0000000fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                                   >> 0x0000000cU)))));
    bufp->fullCData(oldp+918,((0x0000000fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                              >> 0x0000000cU))),4);
    bufp->fullCData(oldp+919,((0x0000003fU & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))),6);
    bufp->fullCData(oldp+920,((0x0000003fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                              >> 6U))),6);
    bufp->fullCData(oldp+921,((0x0000003fU & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))),6);
    bufp->fullBit(oldp+922,((IData)(((0x0fc0U == (0x0fc0U 
                                                  & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))) 
                                     & ((2U != (0x0000000fU 
                                                & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                                   >> 0x0000000cU))) 
                                        & (0U != (0x0000000fU 
                                                  & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                                     >> 0x0000000cU))))))));
    bufp->fullSData(oldp+923,((0x000001ffU & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))),9);
    bufp->fullSData(oldp+924,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData),16);
    bufp->fullBit(oldp+925,(vlSelfRef.HighRiscTb__DOT__uut__DOT__VGA_BLANK_N));
    bufp->fullBit(oldp+926,(vlSelfRef.HighRiscTb__DOT__uut__DOT__VGA_SYNC_N));
    bufp->fullBit(oldp+927,(vlSelfRef.HighRiscTb__DOT__uut__DOT__VGA_HS));
    bufp->fullBit(oldp+928,(vlSelfRef.HighRiscTb__DOT__uut__DOT__VGA_VS));
    bufp->fullSData(oldp+929,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress),16);
    bufp->fullSData(oldp+930,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress),16);
    bufp->fullSData(oldp+931,((0x00003fffU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress))),14);
    bufp->fullSData(oldp+932,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextX),11);
    bufp->fullSData(oldp+933,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY),10);
    bufp->fullSData(oldp+934,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__hCount),11);
    bufp->fullSData(oldp+935,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__vCount),10);
    bufp->fullBit(oldp+936,((1U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__SlaveWriteEnable))));
    bufp->fullBit(oldp+937,((1U & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__SlaveWriteEnable) 
                                   >> 1U))));
    bufp->fullCData(oldp+938,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__SlaveWriteEnable),4);
    bufp->fullCData(oldp+939,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__BlockInUse),2);
    bufp->fullSData(oldp+940,((0x000001ffU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress))),9);
    bufp->fullQData(oldp+941,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortWriteEnable),33);
    bufp->fullBit(oldp+943,((1U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortWriteEnable))));
    bufp->fullBit(oldp+944,((1U & (IData)((vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortWriteEnable 
                                           >> 1U)))));
    bufp->fullCData(oldp+945,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortInUse),5);
    bufp->fullSData(oldp+946,(vlSelfRef.HighRiscTb__DOT__uut__DOT__DataAssertVal),16);
    bufp->fullSData(oldp+947,(vlSelfRef.HighRiscTb__DOT__uut__DOT__DataAssertVal),16);
    bufp->fullSData(oldp+948,((0x00003fffU & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.Address))),14);
    bufp->fullSData(oldp+949,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc),16);
    bufp->fullSData(oldp+950,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutDest),16);
    bufp->fullSData(oldp+951,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest),16);
    bufp->fullBit(oldp+952,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteEnable));
    bufp->fullBit(oldp+953,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__OffsetEnable));
    bufp->fullCData(oldp+954,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutFlags),5);
    bufp->fullSData(oldp+955,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc),16);
    bufp->fullSData(oldp+956,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest),16);
    bufp->fullSData(oldp+957,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutDest),16);
    bufp->fullSData(oldp+958,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.Address),16);
    bufp->fullBit(oldp+959,((1U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__SlaveWriteEnable))));
    bufp->fullBit(oldp+960,((1U & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__SlaveWriteEnable) 
                                   >> 1U))));
    bufp->fullCData(oldp+961,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__SlaveWriteEnable),4);
    bufp->fullCData(oldp+962,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__BlockInUse),2);
    bufp->fullSData(oldp+963,((0x000001ffU & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.Address))),9);
    bufp->fullQData(oldp+964,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortWriteEnable),33);
    bufp->fullBit(oldp+966,((1U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortWriteEnable))));
    bufp->fullBit(oldp+967,((1U & (IData)((vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortWriteEnable 
                                           >> 1U)))));
    bufp->fullCData(oldp+968,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortInUse),5);
    bufp->fullBit(oldp+969,(vlSelfRef.HighRiscTb__DOT__CLOCK_50));
    bufp->fullSData(oldp+970,(vlSelfRef.HighRiscTb__DOT__SW),10);
    bufp->fullCData(oldp+971,(vlSelfRef.HighRiscTb__DOT__KEY),4);
    bufp->fullBit(oldp+972,(vlSelfRef.HighRiscTb__DOT__tbClk));
    bufp->fullSData(oldp+973,(vlSelfRef.HighRiscTb__DOT__ClockCount),16);
    bufp->fullSData(oldp+974,(vlSelfRef.HighRiscTb__DOT__SWRead1),16);
    bufp->fullSData(oldp+975,(vlSelfRef.HighRiscTb__DOT__SWRead2),16);
    bufp->fullBit(oldp+976,((1U & (~ (IData)(vlSelfRef.HighRiscTb__DOT__CLOCK_50)))));
    bufp->fullCData(oldp+977,((0x000000fcU & (((0x00000038U 
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
    bufp->fullCData(oldp+978,((0x000000fcU & (((0x00000038U 
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
    bufp->fullCData(oldp+979,((0x000000ffU & ((0x000000c0U 
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
    bufp->fullBit(oldp+980,((1U & (~ (IData)(vlSelfRef.HighRiscTb__DOT__KEY)))));
    bufp->fullSData(oldp+981,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_reg_a),16);
    bufp->fullSData(oldp+982,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_a),16);
    bufp->fullSData(oldp+983,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a),16);
    bufp->fullBit(oldp+984,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_b));
    bufp->fullSData(oldp+985,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out_b),16);
    bufp->fullBit(oldp+986,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_b));
    bufp->fullBit(oldp+987,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse0));
    bufp->fullBit(oldp+988,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse1));
    bufp->fullBit(oldp+989,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_flag));
    bufp->fullBit(oldp+990,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_prev));
    bufp->fullBit(oldp+991,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_flag));
    bufp->fullBit(oldp+992,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_prev));
    bufp->fullBit(oldp+993,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_outdata_aclr_a_prev));
    bufp->fullBit(oldp+994,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a));
    bufp->fullBit(oldp+995,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a2));
    bufp->fullBit(oldp+996,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b2));
    bufp->fullBit(oldp+997,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken1_b_reg));
    bufp->fullSData(oldp+998,(vlSelfRef.HighRiscTb__DOT__SW),16);
    bufp->fullSData(oldp+999,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers
                              [(0x0000003fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                               >> 6U))]),16);
    bufp->fullSData(oldp+1000,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers
                               [(0x0000003fU & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))]),16);
    bufp->fullBit(oldp+1001,(((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteEnable) 
                              & (0x0f80U == (0x0fc0U 
                                             & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))))));
    bufp->fullSData(oldp+1002,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteData),16);
    bufp->fullBit(oldp+1003,((IData)(((0xa000U == (0xe000U 
                                                   & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))) 
                                      & ((0x00001000U 
                                          & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
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
    bufp->fullBit(oldp+1004,((IData)((((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                       >> 0x0000000fU) 
                                      & ((0x00004000U 
                                          & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                          ? ((0x00002000U 
                                              & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                              ? ((0x00001000U 
                                                  & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                                  ? 
                                                 VL_COUNTONES_I(
                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 
                                                                 >> 0x00000010U))
                                                  : 
                                                 VL_COUNTONES_I(
                                                                (0x0000ffffU 
                                                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)))
                                              : ((0x00001000U 
                                                  & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                                  ? 
                                                 VL_COUNTONES_I((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8))
                                                  : 
                                                 VL_COUNTONES_I((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7))))
                                          : (((0x00001000U 
                                               & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
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
                                             & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                                >> 0x0000000dU)))))));
    bufp->fullSData(oldp+1005,((0x0000ffffU & ((~ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc)) 
                                               & (- (IData)((IData)(
                                                                    (0xb000U 
                                                                     == 
                                                                     (0xf000U 
                                                                      & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))))))))),16);
    bufp->fullIData(oldp+1006,((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 
                                & ((- (IData)((3U == 
                                               (3U 
                                                & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                                   >> 0x0000000dU))))) 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                                    >> 0x0000000fU))))))),32);
    bufp->fullSData(oldp+1007,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteData),16);
    bufp->fullSData(oldp+1008,((0x0000ffffU & ((IData)(
                                                       ((0x0fc0U 
                                                         == 
                                                         (0x0fc0U 
                                                          & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))) 
                                                        & ((2U 
                                                            != 
                                                            (0x0000000fU 
                                                             & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                                                >> 0x0000000cU))) 
                                                           & (0U 
                                                              != 
                                                              (0x0000000fU 
                                                               & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                                                  >> 0x0000000cU))))))
                                                ? ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__OffsetEnable)
                                                    ? 
                                                   ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteData) 
                                                    + 
                                                    VL_EXTENDS_II(16,9, 
                                                                  (0x000001ffU 
                                                                   & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))))
                                                    : (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteData))
                                                : ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__OffsetEnable)
                                                    ? 
                                                   ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress) 
                                                    + 
                                                    VL_EXTENDS_II(16,9, 
                                                                  (0x000001ffU 
                                                                   & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))))
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress)))))),16);
    bufp->fullCData(oldp+1009,((((IData)(((0x0fc0U 
                                           == (0x0fc0U 
                                               & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))) 
                                          & ((2U != 
                                              (0x0000000fU 
                                               & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                                  >> 0x0000000cU))) 
                                             & (0U 
                                                != 
                                                (0x0000000fU 
                                                 & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                                    >> 0x0000000cU)))))) 
                                 << 1U) | (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__OffsetEnable))),2);
    bufp->fullSData(oldp+1010,(((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteEnable)
                                 ? (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteData)
                                 : vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers
                                [(0x0000003fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                                 >> 6U))])),16);
    bufp->fullSData(oldp+1011,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_a),16);
    bufp->fullSData(oldp+1012,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a),16);
    bufp->fullBit(oldp+1013,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_b));
    bufp->fullSData(oldp+1014,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out_b),16);
    bufp->fullBit(oldp+1015,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a));
    bufp->fullBit(oldp+1016,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_b));
    bufp->fullBit(oldp+1017,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse0));
    bufp->fullBit(oldp+1018,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse1));
    bufp->fullBit(oldp+1019,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_flag));
    bufp->fullBit(oldp+1020,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_prev));
    bufp->fullBit(oldp+1021,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_flag));
    bufp->fullBit(oldp+1022,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_prev));
    bufp->fullBit(oldp+1023,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_outdata_aclr_a_prev));
    bufp->fullBit(oldp+1024,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a));
    bufp->fullBit(oldp+1025,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a2));
    bufp->fullBit(oldp+1026,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b2));
    bufp->fullBit(oldp+1027,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken1_b_reg));
    bufp->fullCData(oldp+1028,((0x000000ffU & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair) 
                                               >> (0x0000000fU 
                                                   & ((7U 
                                                       | (8U 
                                                          & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY) 
                                                             << 3U))) 
                                                      - (IData)(7U)))))),8);
    bufp->fullSData(oldp+1029,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__SlaveReadData[0]),16);
    bufp->fullSData(oldp+1030,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__SlaveReadData[1]),16);
    bufp->fullSData(oldp+1031,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__SlaveReadData[2]),16);
    bufp->fullSData(oldp+1032,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__SlaveReadData[3]),16);
    bufp->fullSData(oldp+1033,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.ReadData),16);
    bufp->fullSData(oldp+1034,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__SlaveReadData[0]),16);
    bufp->fullSData(oldp+1035,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__SlaveReadData[1]),16);
    bufp->fullSData(oldp+1036,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__SlaveReadData[2]),16);
    bufp->fullSData(oldp+1037,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__SlaveReadData[3]),16);
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_full_dtype____0(VHighRiscTb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_full_dtype____0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullBit(oldp+0,(__VdtypeVar[0]));
    bufp->fullBit(oldp+1,(__VdtypeVar[1]));
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_full_dtype____1(VHighRiscTb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_full_dtype____1\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullBit(oldp+0,(__VdtypeVar[0]));
    bufp->fullBit(oldp+1,(__VdtypeVar[1]));
}
