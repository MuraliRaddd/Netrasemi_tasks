// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHighRiscTb.h for the primary calling header

#include "VHighRiscTb__pch.h"

VL_ATTR_COLD void VHighRiscTb___024root___eval_initial__TOP(VHighRiscTb___024root* vlSelf);
VlCoroutine VHighRiscTb___024root___eval_initial__TOP__Vtiming__0(VHighRiscTb___024root* vlSelf);
VlCoroutine VHighRiscTb___024root___eval_initial__TOP__Vtiming__1(VHighRiscTb___024root* vlSelf);
VlCoroutine VHighRiscTb___024root___eval_initial__TOP__Vtiming__2(VHighRiscTb___024root* vlSelf);
VlCoroutine VHighRiscTb___024root___eval_initial__TOP__Vtiming__3(VHighRiscTb___024root* vlSelf);
VlCoroutine VHighRiscTb___024root___eval_initial__TOP__Vtiming__4(VHighRiscTb___024root* vlSelf);
void VHighRiscTb_Bus__B2_P2___eval_initial__TOP__HighRiscTb__DOT__uut__DOT__Ibus(VHighRiscTb_Bus__B2_P2* vlSelf);

void VHighRiscTb___024root___eval_initial(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___eval_initial\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VHighRiscTb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VHighRiscTb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VHighRiscTb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    VHighRiscTb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    VHighRiscTb___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    VHighRiscTb___024root___eval_initial__TOP__Vtiming__4(vlSelf);
    VHighRiscTb_Bus__B2_P2___eval_initial__TOP__HighRiscTb__DOT__uut__DOT__Ibus((&vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus));
    VHighRiscTb_Bus__B2_P2___eval_initial__TOP__HighRiscTb__DOT__uut__DOT__Ibus((&vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus));
}

void VHighRiscTb___024root____VbeforeTrig_h859c5ab6__0(VHighRiscTb___024root* vlSelf, const char* __VeventDescription);
void VHighRiscTb___024root____VbeforeTrig_hfc096746__0(VHighRiscTb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine VHighRiscTb___024root___eval_initial__TOP__Vtiming__0(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___eval_initial__TOP__Vtiming__0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ HighRiscTb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    HighRiscTb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSelfRef.HighRiscTb__DOT__CLOCK_50 = 0U;
    vlSelfRef.HighRiscTb__DOT__tbClk = 0U;
    vlSelfRef.HighRiscTb__DOT__SW = 0U;
    vlSelfRef.HighRiscTb__DOT__SWRead1 = 0U;
    vlSelfRef.HighRiscTb__DOT__SWRead2 = 0U;
    vlSelfRef.HighRiscTb__DOT__KEY = 1U;
    vlSelfRef.HighRiscTb__DOT__ClockCount = 0U;
    while ((2U != (0x0000000fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                  >> 0x0000000cU)))) {
        VHighRiscTb___024root____VbeforeTrig_h859c5ab6__0(vlSelf, 
                                                          "@( (4'h2 == HighRiscTb.uut.Ibus.ReadData[15:12]))");
        co_await vlSelfRef.__VtrigSched_h859c5ab6__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (4'h2 == HighRiscTb.uut.Ibus.ReadData[15:12]))", 
                                                             "HighRiscTb.sv", 
                                                             131);
    }
    HighRiscTb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, HighRiscTb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        VHighRiscTb___024root____VbeforeTrig_hfc096746__0(vlSelf, 
                                                          "@(posedge HighRiscTb.CLOCK_50)");
        co_await vlSelfRef.__VtrigSched_hfc096746__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge HighRiscTb.CLOCK_50)", 
                                                             "HighRiscTb.sv", 
                                                             132);
        HighRiscTb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (HighRiscTb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    VL_WRITEF_NX("Final value is equal to %d.\n",1, '#',16,vlSelfRef.HighRiscTb__DOT__uut__DOT__DataAssertVal);
    VL_FINISH_MT("HighRiscTb.sv", 136, "");
    co_return;
}

VlCoroutine VHighRiscTb___024root___eval_initial__TOP__Vtiming__1(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___eval_initial__TOP__Vtiming__1\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x000000174876e800ULL, 
                                         nullptr, "HighRiscTb.sv", 
                                         140);
    VL_WRITEF_NX("TIMEOUT: WriteAssertEnable never asserted.\n",0);
    VL_FINISH_MT("HighRiscTb.sv", 142, "");
    co_return;
}

VlCoroutine VHighRiscTb___024root___eval_initial__TOP__Vtiming__2(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___eval_initial__TOP__Vtiming__2\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        vlSelfRef.HighRiscTb__DOT____VlemExpr_0 = VL_URANDOM_RANGE_I(1U, 3U);
        co_await vlSelfRef.__VdlySched.delay((0x00000000000f4240ULL 
                                              * (QData)((IData)(vlSelfRef.HighRiscTb__DOT____VlemExpr_0))), 
                                             nullptr, 
                                             "HighRiscTb.sv", 
                                             55);
        vlSelfRef.HighRiscTb__DOT__tbClk = (1U & (~ (IData)(vlSelfRef.HighRiscTb__DOT__tbClk)));
        vlSelfRef.HighRiscTb__DOT____VlemExpr_1 = VL_URANDOM_RANGE_I(0U, 0x000003ffU);
        vlSelfRef.HighRiscTb__DOT__SW = (0x000003ffU 
                                         & vlSelfRef.HighRiscTb__DOT____VlemExpr_1);
    }
    co_return;
}

VlCoroutine VHighRiscTb___024root___eval_initial__TOP__Vtiming__3(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___eval_initial__TOP__Vtiming__3\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000989680ULL, 
                                             nullptr, 
                                             "HighRiscTb.sv", 
                                             52);
        vlSelfRef.HighRiscTb__DOT__ClockCount = (0x0000ffffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.HighRiscTb__DOT__ClockCount)));
    }
    co_return;
}

VlCoroutine VHighRiscTb___024root___eval_initial__TOP__Vtiming__4(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___eval_initial__TOP__Vtiming__4\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000004c4b40ULL, 
                                             nullptr, 
                                             "HighRiscTb.sv", 
                                             49);
        vlSelfRef.HighRiscTb__DOT__CLOCK_50 = (1U & 
                                               (~ (IData)(vlSelfRef.HighRiscTb__DOT__CLOCK_50)));
    }
    co_return;
}

void VHighRiscTb___024root___eval_triggers_ext__act(VHighRiscTb___024root* vlSelf, const VlUnpacked<QData/*63:0*/, 2> &latched) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___eval_triggers_ext__act\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VactTrigPreLoopCounter;
    // Body
    __VactTrigPreLoopCounter = 0U;
    do {
        vlSelfRef.__VactTriggered[((IData)(2U) + __VactTrigPreLoopCounter)] 
            = (vlSelfRef.__VactTriggered[__VactTrigPreLoopCounter] 
               & (~ latched[__VactTrigPreLoopCounter]));
        __VactTrigPreLoopCounter = ((IData)(1U) + __VactTrigPreLoopCounter);
    } while ((1U > __VactTrigPreLoopCounter));
}

void VHighRiscTb___024root___eval_triggers_vec__act(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___eval_triggers_vec__act\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h21aafd83__0;
    __Vtrigprevexpr_h21aafd83__0 = 0;
    // Body
    __Vtrigprevexpr_h21aafd83__0 = (2U == (0x0000000fU 
                                           & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                              >> 0x0000000cU)));
    vlSelfRef.__VactTriggered[0U] = (((QData)((IData)(
                                                      (((((((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_b) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_b__0)) 
                                                           << 3U) 
                                                          | (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_b) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_b__0)) 
                                                             << 2U)) 
                                                         | ((((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_b) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_b__0)) 
                                                             << 1U) 
                                                            | (vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_b 
                                                               != vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_b__0))) 
                                                        << 4U) 
                                                       | (((((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_b_signal) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_b_signal__0)) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_b) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_b__0)) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_out) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_out__0)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_b) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_b__0))))))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       ((((((((((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_b) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_b__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_b) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_b__0)) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_b) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_b__0)) 
                                                                 << 1U) 
                                                                | (vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_b 
                                                                   != vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_b__0))) 
                                                            << 0x0000000cU) 
                                                           | ((((((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_b_signal) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_b_signal__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_b) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_b__0)) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_out) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_out__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_b) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_b__0)))) 
                                                              << 8U)) 
                                                          | (((((2U 
                                                                 & ((~ (IData)(vlSelfRef.__Vtrigprevexpr_h9251ca32__0)) 
                                                                    << 1U)) 
                                                                | ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a__0))) 
                                                               << 6U) 
                                                              | ((((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a__0)) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_data_a) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_data_a__0)) 
                                                                    << 4U))) 
                                                             | ((((vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_a 
                                                                   != vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_a__0) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal__0)) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out__0)))))) 
                                                         << 0x00000010U) 
                                                        | ((((((((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a__0)) 
                                                                << 3U) 
                                                               | (4U 
                                                                  & ((~ (IData)(vlSelfRef.__Vtrigprevexpr_h287c1b58__0)) 
                                                                     << 2U))) 
                                                              | (((IData)(vlSelfRef.__Vtrigprevexpr_h287c1e88__0) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a__0)))) 
                                                             << 0x0000000cU) 
                                                            | ((((((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_data_a) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_data_a__0)) 
                                                                    << 2U)) 
                                                                | (((vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_a 
                                                                     != vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_a__0) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal__0)))) 
                                                               << 8U)) 
                                                           | (((((((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out__0)) 
                                                                    << 2U)) 
                                                                | (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a__0)) 
                                                                   << 1U)) 
                                                               << 4U) 
                                                              | ((((2U 
                                                                    & ((~ (IData)(vlSelfRef.__Vtrigprevexpr_h9251ca32__0)) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr_h287c1b58__0)))) 
                                                                  << 2U) 
                                                                 | ((((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__Reset) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__Reset__0))) 
                                                                     << 1U) 
                                                                    | ((IData)(vlSelfRef.HighRiscTb__DOT__CLOCK_50) 
                                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__CLOCK_50__0)))))))))));
    vlSelfRef.__VactTriggered[1U] = VL_EXTEND_QI(64,16, 
                                                 ((VL_EXTEND_II(8,4, 
                                                                (((vlSelfRef.__VdynSched.evaluate() 
                                                                   << 3U) 
                                                                  | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                                     << 2U)) 
                                                                 | ((((IData)(__Vtrigprevexpr_h21aafd83__0) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr_h21aafd83__1)) 
                                                                     << 1U) 
                                                                    | ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b__0))))) 
                                                   << 8U) 
                                                  | (((((((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a__0)) 
                                                         << 3U) 
                                                        | (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b__0)) 
                                                           << 2U)) 
                                                       | ((((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a__0)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a__0)))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a__0)) 
                                                         << 3U) 
                                                        | (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_a) 
                                                            ^ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_a__0)) 
                                                           << 2U)))));
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__CLOCK_50__0 
        = vlSelfRef.HighRiscTb__DOT__CLOCK_50;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__Reset__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__Reset;
    vlSelfRef.__Vtrigprevexpr_h287c1b58__0 = 1U;
    vlSelfRef.__Vtrigprevexpr_h9251ca32__0 = 1U;
    vlSelfRef.__Vtrigprevexpr_h287c1e88__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_a__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_a;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_data_a__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_data_a;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_a__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_a;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_data_a__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_data_a;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_b__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_b;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_out__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_out;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_b__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_b;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_b_signal__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_b_signal;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_b__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_b;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_b__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_b;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_b__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_b;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_b__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_b;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_b__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_b;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_out__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_out;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_b__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_b;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_b_signal__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_b_signal;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_b__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_b;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_b__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_b;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_b__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_b;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_b__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_b;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_a__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_a;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b;
    vlSelfRef.__Vtrigprevexpr_h21aafd83__1 = __Vtrigprevexpr_h21aafd83__0;
    vlSelfRef.__VdynSched.doPostUpdates();
}

bool VHighRiscTb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

void VHighRiscTb___024root___act_sequent__TOP__2(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___act_sequent__TOP__2\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((1U & (~ (IData)(((0x2000U 
                                                != 
                                                (0xf000U 
                                                 & (IData)(vlSelfRef.__Vsampled_TOP__HighRiscTb__DOT__uut__DOT__Ibus__ReadData))) 
                                               | ((IData)(vlSelfRef.__Vsampled_TOP__HighRiscTb__DOT__uut__DOT__DataAssertVal) 
                                                  == vlSelfRef.__Vsampled_TOP__HighRiscTb__DOT__check_1__DOT__DataVal
                                                  .__PVT__out)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: HighRiscChecker.sv:31: Assertion failed in %m: Output RISC value mismatch: received %0d at %0t\n",5, 'M',vlSymsp->name(),"HighRiscTb.check_1.assert_risc", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',16,(IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__DataAssertVal)
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("HighRiscChecker.sv", 31, "");
            }
        }
    }
    VL_WRITEF_NX("ROM[0]=%0h RomQ=%0h Instr=%0h time=%0t\n",5, 'T',-9
                 , '#',16,vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem_data[0U]
                 , '#',16,vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_a
                 , '#',16,(IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData)
                 , '#',64,VL_TIME_UNITED_Q(1e+06));
    if (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteEnable) 
         & (0x10c0U == (0xffc0U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))))) {
        vlSelfRef.__Vdly__HighRiscTb__DOT__SWRead1 
            = vlSelfRef.HighRiscTb__DOT__SW;
        vlSelfRef.__VdlyMask__HighRiscTb__DOT__SWRead1 = 0xffffU;
    }
    if (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteEnable) 
         & (0x1100U == (0xffc0U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))))) {
        vlSelfRef.__Vdly__HighRiscTb__DOT__SWRead2 
            = vlSelfRef.HighRiscTb__DOT__SW;
        vlSelfRef.__VdlyMask__HighRiscTb__DOT__SWRead2 = 0xffffU;
    }
}

void VHighRiscTb___024root___act_comb__TOP__0(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___act_comb__TOP__0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VHighRiscTb_expFlags_t__struct__0 __Vfunc_calc_adc__20__Vfuncout;
    __Vfunc_calc_adc__20__Vfuncout.__PVT__out = 0;
    __Vfunc_calc_adc__20__Vfuncout.__PVT__Overflow = 0;
    __Vfunc_calc_adc__20__Vfuncout.__PVT__Parity = 0;
    __Vfunc_calc_adc__20__Vfuncout.__PVT__Negative = 0;
    __Vfunc_calc_adc__20__Vfuncout.__PVT__Zero = 0;
    __Vfunc_calc_adc__20__Vfuncout.__PVT__Carry = 0;
    SData/*15:0*/ __Vfunc_calc_adc__20__a;
    __Vfunc_calc_adc__20__a = 0;
    SData/*15:0*/ __Vfunc_calc_adc__20__b;
    __Vfunc_calc_adc__20__b = 0;
    SData/*15:0*/ __Vfunc_calc_adc__20__y;
    __Vfunc_calc_adc__20__y = 0;
    // Body
    vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__Reset 
        = (1U & (~ (IData)(vlSelfRef.HighRiscTb__DOT__KEY)));
    __Vfunc_calc_adc__20__b = vlSelfRef.HighRiscTb__DOT__SWRead2;
    __Vfunc_calc_adc__20__a = vlSelfRef.HighRiscTb__DOT__SWRead1;
    __Vfunc_calc_adc__20__y = 0;
    __Vfunc_calc_adc__20__y = ((0xfffeU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (1U & ((IData)(__Vfunc_calc_adc__20__a) 
                                        ^ (IData)(__Vfunc_calc_adc__20__b))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              ((IData)(__Vfunc_calc_adc__20__a) 
                                               & (IData)(__Vfunc_calc_adc__20__b)));
    __Vfunc_calc_adc__20__y = ((0xfffdU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (2U & ((0xfffffffeU 
                                         & ((IData)(__Vfunc_calc_adc__20__a) 
                                            ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                        ^ ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                           << 1U))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 1U)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 1U)));
    __Vfunc_calc_adc__20__y = ((0xfffbU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (4U & ((0xfffffffcU 
                                         & ((IData)(__Vfunc_calc_adc__20__a) 
                                            ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                        ^ ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                           << 2U))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 2U)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 2U)));
    __Vfunc_calc_adc__20__y = ((0xfff7U & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (8U & ((0xfffffff8U 
                                         & ((IData)(__Vfunc_calc_adc__20__a) 
                                            ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                        ^ ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                           << 3U))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 3U)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 3U)));
    __Vfunc_calc_adc__20__y = ((0xffefU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & ((IData)(__Vfunc_calc_adc__20__a) 
                                                     ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                  << 4U))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 4U)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 4U)));
    __Vfunc_calc_adc__20__y = ((0xffdfU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & ((IData)(__Vfunc_calc_adc__20__a) 
                                                     ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                  << 5U))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 5U)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 5U)));
    __Vfunc_calc_adc__20__y = ((0xffbfU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & ((IData)(__Vfunc_calc_adc__20__a) 
                                                     ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                  << 6U))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 6U)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 6U)));
    __Vfunc_calc_adc__20__y = ((0xff7fU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & ((IData)(__Vfunc_calc_adc__20__a) 
                                                     ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                  << 7U))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 7U)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 7U)));
    __Vfunc_calc_adc__20__y = ((0xfeffU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (0x00000100U & ((0xffffff00U 
                                                  & ((IData)(__Vfunc_calc_adc__20__a) 
                                                     ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                  << 8U))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 8U)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 8U)));
    __Vfunc_calc_adc__20__y = ((0xfdffU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (0x00000200U & ((0xfffffe00U 
                                                  & ((IData)(__Vfunc_calc_adc__20__a) 
                                                     ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                  << 9U))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 9U)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 9U)));
    __Vfunc_calc_adc__20__y = ((0xfbffU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (0x00000400U & ((0xfffffc00U 
                                                  & ((IData)(__Vfunc_calc_adc__20__a) 
                                                     ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                  << 0x0000000aU))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 0x0aU)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 0x0aU)));
    __Vfunc_calc_adc__20__y = ((0xf7ffU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (0x00000800U & ((0xfffff800U 
                                                  & ((IData)(__Vfunc_calc_adc__20__a) 
                                                     ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                  << 0x0000000bU))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 0x0bU)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 0x0bU)));
    __Vfunc_calc_adc__20__y = ((0xefffU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (0x00001000U & ((0xfffff000U 
                                                  & ((IData)(__Vfunc_calc_adc__20__a) 
                                                     ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                  << 0x0000000cU))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 0x0cU)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 0x0cU)));
    __Vfunc_calc_adc__20__y = ((0xdfffU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (0x00002000U & ((0xffffe000U 
                                                  & ((IData)(__Vfunc_calc_adc__20__a) 
                                                     ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                  << 0x0000000dU))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 0x0dU)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 0x0dU)));
    __Vfunc_calc_adc__20__y = ((0xbfffU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (0x00004000U & ((0xffffc000U 
                                                  & ((IData)(__Vfunc_calc_adc__20__a) 
                                                     ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                  << 0x0000000eU))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 0x0eU)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 0x0eU)));
    __Vfunc_calc_adc__20__y = ((0x7fffU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (0x00008000U & ((0xffff8000U 
                                                  & ((IData)(__Vfunc_calc_adc__20__a) 
                                                     ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                  << 0x0000000fU))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 0x0fU)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 0x0fU)));
    vlSymsp->TOP__assertionmath.expFlags.__PVT__out 
        = __Vfunc_calc_adc__20__y;
    vlSymsp->TOP__assertionmath.expFlags.__PVT__Carry 
        = vlSymsp->TOP__assertionmath.temp_carry;
    vlSymsp->TOP__assertionmath.expFlags.__PVT__Zero 
        = (0U == VL_EXTENDS_II(32,16, (IData)(__Vfunc_calc_adc__20__y)));
    vlSymsp->TOP__assertionmath.expFlags.__PVT__Negative 
        = (1U & ((IData)(__Vfunc_calc_adc__20__y) >> 0x0fU));
    vlSymsp->TOP__assertionmath.expFlags.__PVT__Overflow 
        = (1U & (((~ (((IData)(__Vfunc_calc_adc__20__b) 
                       | (IData)(__Vfunc_calc_adc__20__a)) 
                      >> 0x0fU)) & ((IData)(__Vfunc_calc_adc__20__y) 
                                    >> 0x0fU)) | ((
                                                   ((IData)(__Vfunc_calc_adc__20__b) 
                                                    & (IData)(__Vfunc_calc_adc__20__a)) 
                                                   >> 0x0fU) 
                                                  & (~ 
                                                     ((IData)(__Vfunc_calc_adc__20__y) 
                                                      >> 0x0fU)))));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & (IData)(__Vfunc_calc_adc__20__y));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 1U)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 2U)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 3U)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 4U)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 5U)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 6U)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 7U)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 8U)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 9U)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 0x0aU)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 0x0bU)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 0x0cU)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 0x0dU)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 0x0eU)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 0x0fU)));
    vlSymsp->TOP__assertionmath.expFlags.__PVT__Parity 
        = (1U & (~ (IData)(vlSymsp->TOP__assertionmath.parity_sum)));
    __Vfunc_calc_adc__20__Vfuncout = vlSymsp->TOP__assertionmath.expFlags;
    vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal 
        = __Vfunc_calc_adc__20__Vfuncout;
    vlSelfRef.HighRiscTb__DOT__OutVal = vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal
        .__PVT__out;
}

void VHighRiscTb___024root___act_sequent__TOP__18(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___act_sequent__TOP__18\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a) 
         & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a2))) {
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_write_time_a 
            = VL_TIME_UNITED_Q(1000);
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_aclr_flag_a = 0U;
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i5 = 0x00000010U;
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_b_bit_count_low 
            = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_b;
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_b_bit_count_high 
            = ((IData)(1U) + vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_b_bit_count_low);
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_address_a 
            = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a;
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low 
            = ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a) 
               << 4U);
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low 
            = ((IData)(1U) + vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low);
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low 
            = ((IData)(1U) + vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low);
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low 
            = ((IData)(1U) + vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low);
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low 
            = ((IData)(1U) + vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low);
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low 
            = ((IData)(1U) + vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low);
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low 
            = ((IData)(1U) + vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low);
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low 
            = ((IData)(1U) + vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low);
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low 
            = ((IData)(1U) + vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low);
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low 
            = ((IData)(1U) + vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low);
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low 
            = ((IData)(1U) + vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low);
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low 
            = ((IData)(1U) + vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low);
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low 
            = ((IData)(1U) + vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low);
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low 
            = ((IData)(1U) + vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low);
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low 
            = ((IData)(1U) + vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low);
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low 
            = ((IData)(1U) + vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low);
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_count 
            = VL_MODDIVS_III(32, vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low, (IData)(1U));
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low 
            = ((IData)(1U) + vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low);
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_data_a 
            = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem_data
            [vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a];
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa 
            = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem_data
            [vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a];
        if ((1U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a))) {
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa 
                = ((0xfffeU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa)) 
                   | (1U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a)));
        }
        if ((2U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a))) {
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa 
                = ((0xfffdU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa)) 
                   | (2U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a)));
        }
        if ((4U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a))) {
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa 
                = ((0xfffbU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa)) 
                   | (4U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a)));
        }
        if ((8U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a))) {
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa 
                = ((0xfff7U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa)) 
                   | (8U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a)));
        }
        if ((0x00000010U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a))) {
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa 
                = ((0xffefU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa)) 
                   | (0x00000010U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a)));
        }
        if ((0x00000020U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a))) {
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa 
                = ((0xffdfU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa)) 
                   | (0x00000020U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a)));
        }
        if ((0x00000040U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a))) {
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa 
                = ((0xffbfU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa)) 
                   | (0x00000040U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a)));
        }
        if ((0x00000080U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a))) {
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa 
                = ((0xff7fU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa)) 
                   | (0x00000080U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a)));
        }
        if ((0x00000100U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a))) {
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa 
                = ((0xfeffU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa)) 
                   | (0x00000100U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a)));
        }
        if ((0x00000200U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a))) {
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa 
                = ((0xfdffU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa)) 
                   | (0x00000200U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a)));
        }
        if ((0x00000400U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a))) {
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa 
                = ((0xfbffU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa)) 
                   | (0x00000400U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a)));
        }
        if ((0x00000800U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a))) {
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa 
                = ((0xf7ffU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa)) 
                   | (0x00000800U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a)));
        }
        if ((0x00001000U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a))) {
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa 
                = ((0xefffU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa)) 
                   | (0x00001000U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a)));
        }
        if ((0x00002000U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a))) {
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa 
                = ((0xdfffU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa)) 
                   | (0x00002000U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a)));
        }
        if ((0x00004000U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a))) {
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa 
                = ((0xbfffU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa)) 
                   | (0x00004000U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a)));
        }
        if ((0x00008000U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a))) {
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa 
                = ((0x7fffU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa)) 
                   | (0x00008000U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a)));
        }
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem_data[vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a] 
            = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa;
    }
}

void VHighRiscTb___024root___eval_act(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___eval_act\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__0
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_a 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_a;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a1 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a1;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a1 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a1;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_a 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_a;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_nmram_write_a 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_nmram_write_a;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken_a_reg 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken_a_reg;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken0_b_reg 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken0_b_reg;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out_b 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out_b;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_x 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_x;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out_b 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out_b;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken_a_reg 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken_a_reg;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken0_b_reg 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken0_b_reg;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_x 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_x;
        }
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__1
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_b 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_b;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_b 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_b;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_flag 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_flag;
        }
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        VHighRiscTb___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000000014ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__3
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_reg_a 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_reg_a;
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__4
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__hCount 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__hCount;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__vCount 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__vCount;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_BLANK_N 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__VGA_BLANK_N;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_SYNC_N 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__VGA_SYNC_N;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_HS 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__VGA_HS;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_VS 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__VGA_VS;
        }
    }
    if ((0x00000000007fa004ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__5
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a;
        }
    }
    if ((0x0000000000003fe4ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__6
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a;
        }
    }
    if ((1ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__7
            vlSelfRef.__VdlySet__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers__v0 = 0U;
            vlSelfRef.__VdlySet__HighRiscTb__DOT__uut__DOT__iVga__DOT__VgaRam__v0 = 0U;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__LEDs 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__LEDs;
        }
    }
    if (((0x0000000000000200ULL & vlSelfRef.__VactTriggered[1U]) 
         | (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        VHighRiscTb___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VactTriggered[1U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__8
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b2 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b2;
        }
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VactTriggered[1U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__9
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a2 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a2;
        }
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VactTriggered[1U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__10
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b2 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b2;
        }
    }
    if ((8ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__11
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken1_b_reg 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken1_b_reg;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken1_b_reg 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken1_b_reg;
        }
    }
    if ((0x0000000000003fe0ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__12
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_prev 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_prev;
        }
    }
    if ((0x00000000ff002000ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__13
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_prev 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_prev;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_b 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_b;
        }
    }
    if ((0x000000ff00002000ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__14
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_prev 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_prev;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_b 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_b;
        }
    }
    if ((0x0000000000004000ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__15
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse0 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse0;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse0 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse0;
        }
    }
    if ((0x0000000000800000ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__16
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse1 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse1;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse1 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse1;
        }
    }
    if (((0x0000000000000600ULL & vlSelfRef.__VactTriggered[1U]) 
         | (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        {
            // Inlined CFunc: _act_comb__TOP__1
            vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.ReadData 
                = vlSelfRef.HighRiscTb__DOT__SW;
        }
    }
    if ((0x000000000000001cULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__17
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_flag 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_flag;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_flag 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_flag;
        }
    }
    if ((4ULL & vlSelfRef.__VactTriggered[1U])) {
        VHighRiscTb___024root___act_sequent__TOP__18(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[1U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__19
            if (vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__good_to_go_a) {
                if (vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_a) {
                    vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a 
                        = ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a)
                            ? ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a) 
                               & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a))
                            : vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem_data
                           [vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a]);
                }
                if (vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a) {
                    vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a = 0U;
                }
            } else {
                vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a = 0U;
            }
        }
    }
    if ((8ULL & vlSelfRef.__VactTriggered[1U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__20
            if (vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__good_to_go_a) {
                if (vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_a) {
                    vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a 
                        = ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a)
                            ? ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a) 
                               & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a))
                            : vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem_data
                           [vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a]);
                }
            } else {
                vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a = 0U;
            }
        }
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__21
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a 
                = (1U & (~ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a)));
            if (vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a) {
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_a 
                    = (1U & (~ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_a)));
            }
            if (vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a) {
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_a 
                    = (1U & (~ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_a)));
            }
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_nmram_write_a = 0U;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken_a_reg = 1U;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken0_b_reg = 1U;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out = 0U;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out_b = 0U;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_x = 0U;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out_b = 0U;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out = 0U;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken_a_reg = 1U;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken0_b_reg = 1U;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_x = 0U;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a 
                = (1U & (~ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a)));
            if (vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a) {
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal 
                    = (1U & (~ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal)));
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a = 0U;
            }
            if (vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a1) {
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal 
                    = (1U & (~ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal)));
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a1 = 0U;
            }
            if (vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a) {
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal 
                    = (1U & (~ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal)));
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a = 0U;
            }
            if (vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a1) {
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal 
                    = (1U & (~ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal)));
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a1 = 0U;
            }
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse0 = 1U;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse0 = 1U;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_flag = 0U;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_flag = 0U;
        }
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__22
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_b 
                = (1U & (~ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_b)));
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_b 
                = (1U & (~ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_b)));
            if (vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_a) {
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_flag = 1U;
            }
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a 
                = (1U & (~ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a)));
            if (vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_b) {
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_flag = 1U;
            }
            if (vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_b) {
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_flag = 1U;
            }
        }
    }
    if ((0x00000000007fa000ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__23
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_a 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_a;
        }
    }
    if ((0x0000000000000014ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__24
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_reg_a 
                = ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_flag)
                    ? 0U : (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_a));
        }
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__25
            vlSelfRef.__VdlyVal__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers__v0 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__nextWriteA;
            vlSelfRef.__VdlyDim0__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers__v0 
                = (0x0000003fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                  >> 6U));
            vlSelfRef.__VdlySet__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers__v0 = 1U;
            if ((2U == (0x0000000fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                       >> 0x0000000cU)))) {
                vlSelfRef.__VdlyVal__HighRiscTb__DOT__uut__DOT__iVga__DOT__VgaRam__v0 
                    = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc;
                vlSelfRef.__VdlyDim0__HighRiscTb__DOT__uut__DOT__iVga__DOT__VgaRam__v0 
                    = (0x00003fffU & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.Address));
                vlSelfRef.__VdlySet__HighRiscTb__DOT__uut__DOT__iVga__DOT__VgaRam__v0 = 1U;
            }
            vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.ReadData 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__VgaRam
                [(0x00003fffU & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.Address))];
            if ((2U == (0x0000000fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                       >> 0x0000000cU)))) {
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__LEDs 
                    = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc;
            }
            if ((0x031fU >= (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextX))) {
                if (((8U <= (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY)) 
                     & (0x0257U >= (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY)))) {
                    vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair 
                        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__VgaRam
                        [(0x00003fffU & (((IData)(0x0000004bU) 
                                          * (0x000001ffU 
                                             & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextX) 
                                                >> 2U))) 
                                         + (0x0000007fU 
                                            & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY) 
                                               >> 3U))))];
                }
            }
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags 
                = ((1U & (IData)(vlSelfRef.HighRiscTb__DOT__KEY))
                    ? (0x0000001fU & (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteEnable) 
                                       & (0x0f80U == 
                                          (0x0fc0U 
                                           & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))))
                                       ? (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteData)
                                       : (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutFlags)))
                    : 0U);
        }
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__26
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken1_b_reg = 1U;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken1_b_reg = 1U;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse1 = 1U;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse1 = 1U;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_flag = 0U;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_flag = 0U;
        }
    }
    if ((0x0000000000003fe0ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__27
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_prev = 0U;
        }
    }
    if ((0x00000000ff002000ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__28
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_prev = 0U;
            if (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_b) 
                 >= vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_b)) {
                if (VL_UNLIKELY((vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_b))) {
                    VL_WRITEF_NX("Warning : Address pointed at port B is out of bound!\nTime: %0t  Instance: %m\n",3, 'M',vlSymsp->name(),"HighRiscTb.uut.iDataMemory.iRAM.altsyncram_component.m_default.altsyncram_inst", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                }
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_b = 0U;
            }
        }
    }
    if ((0x000000ff00002000ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__29
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_prev = 0U;
            if (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_b) 
                 >= vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_b)) {
                if (VL_UNLIKELY((vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_b))) {
                    VL_WRITEF_NX("Warning : Address pointed at port B is out of bound!\nTime: %0t  Instance: %m\n",3, 'M',vlSymsp->name(),"HighRiscTb.uut.iProgramMemory.iRom.altsyncram_component.m_default.altsyncram_inst", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                }
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_b = 0U;
            }
        }
    }
    if ((1ULL & vlSelfRef.__VactTriggered[1U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__30
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse0 = 0U;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse0 = 0U;
        }
    }
    if ((2ULL & vlSelfRef.__VactTriggered[1U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__31
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse1 = 0U;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse1 = 0U;
        }
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered[1U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__32
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a2 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a2;
        }
    }
    if ((4ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__33
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__good_to_go_a 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__good_to_go_a;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__good_to_go_a 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__good_to_go_a;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a;
        }
    }
    if ((0x00000000007fa000ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__34
            if (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a) 
                 >= vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_a)) {
                if (VL_UNLIKELY((vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_a))) {
                    VL_WRITEF_NX("Warning : Address pointed at port A is out of bound!\nTime: %0t  Instance: %m\n",3, 'M',vlSymsp->name(),"HighRiscTb.uut.iProgramMemory.iRom.altsyncram_component.m_default.altsyncram_inst", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                }
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_a 
                    = ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a)
                        ? (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a)
                        : 0U);
            } else if (vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_outdata_aclr_a_prev) {
                vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_outdata_aclr_a_prev = 0U;
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a = 1U;
            } else if ((1U & (((~ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a)) 
                               & (~ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a1))) 
                              & (~ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_prev))))) {
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_a 
                    = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a;
            }
        }
    }
    if ((0x0000000000000014ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__35
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_flag 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_flag;
        }
    }
    if ((0x0000000000003fe0ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__36
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_a 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_a;
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__37
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__nextX 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextX;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY;
        }
    }
    if (((0x0000000000000600ULL & vlSelfRef.__VactTriggered[1U]) 
         | (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        {
            // Inlined CFunc: _act_comb__TOP__2
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteData 
                = ((1U == (0x0000000fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                          >> 0x0000000cU)))
                    ? (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.ReadData)
                    : (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutDest));
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__nextWriteA 
                = ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteEnable)
                    ? (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteData)
                    : vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers
                   [(0x0000003fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                    >> 6U))]);
        }
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__38
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__good_to_go_a = 1U;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a = 0xffffU;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a = 0xffffU;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__good_to_go_a = 1U;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a = 0xffffU;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc;
        }
    }
    if ((0x00000000007fa000ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__39
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_prev 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_prev;
        }
    }
    if ((4ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__40
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_a 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_a;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a;
        }
    }
    if ((0x0000000000000014ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__41
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_flag = 0U;
        }
    }
    if ((0x0000000000003fe0ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__42
            if (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a) 
                 >= vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_a)) {
                if (VL_UNLIKELY((vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_a))) {
                    VL_WRITEF_NX("Warning : Address pointed at port A is out of bound!\nTime: %0t  Instance: %m\n",3, 'M',vlSymsp->name(),"HighRiscTb.uut.iDataMemory.iRAM.altsyncram_component.m_default.altsyncram_inst", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                }
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_a 
                    = ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a)
                        ? (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a)
                        : 0U);
            } else if (vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_outdata_aclr_a_prev) {
                vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_outdata_aclr_a_prev = 0U;
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a = 1U;
            } else if ((1U & ((~ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a)) 
                              & (~ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a1))))) {
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_a 
                    = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a;
            }
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__43
            if ((1U & (IData)(vlSelfRef.HighRiscTb__DOT__KEY))) {
                if ((0x031fU < (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__hCount))) {
                    vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_BLANK_N = 0U;
                    vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__nextX = 0U;
                    if (((0x0357U < (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__hCount)) 
                         & (0x03d0U > (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__hCount)))) {
                        vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__hCount 
                            = (0x000007ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__hCount)));
                        vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_SYNC_N = 0U;
                        vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_HS = 0U;
                    } else if ((0x040fU < (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__hCount))) {
                        vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__hCount = 0U;
                        vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_HS = 1U;
                        vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_SYNC_N = 1U;
                        if ((0x0258U < (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__vCount))) {
                            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY = 0U;
                            if (((0x027cU < (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__vCount)) 
                                 & (0x0283U > (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__vCount)))) {
                                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__vCount 
                                    = (0x000003ffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__vCount)));
                                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_VS = 0U;
                                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_BLANK_N = 0U;
                                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_SYNC_N = 0U;
                            } else {
                                if ((0x0299U < (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__vCount))) {
                                    vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__vCount = 0U;
                                    vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_SYNC_N = 1U;
                                    vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_BLANK_N = 1U;
                                } else {
                                    vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__vCount 
                                        = (0x000003ffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__vCount)));
                                    vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_SYNC_N = 1U;
                                    vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_BLANK_N = 0U;
                                }
                                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_VS = 1U;
                            }
                        } else {
                            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__vCount 
                                = (0x000003ffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__vCount)));
                            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY 
                                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__vCount;
                            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_BLANK_N = 1U;
                        }
                    } else {
                        vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__hCount 
                            = (0x000007ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__hCount)));
                        vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_SYNC_N = 1U;
                        vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_HS = 1U;
                        vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_BLANK_N = 0U;
                    }
                } else {
                    vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__hCount 
                        = (0x000007ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__hCount)));
                    vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__nextX 
                        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__hCount;
                }
            } else {
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__hCount = 0U;
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__vCount = 0U;
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__nextX = 0U;
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY = 0U;
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_BLANK_N = 1U;
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_VS = 1U;
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_HS = 1U;
                vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_SYNC_N = 1U;
            }
        }
    }
    if ((0x00000000007fa000ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__44
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_prev = 0U;
        }
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__45
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_a = 1U;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a = 0U;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a 
                = (0x00003fffU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress));
        }
    }
    if ((4ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__46
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_a 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_a;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a;
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__47
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress;
        }
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__48
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_a = 1U;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a = 0U;
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a 
                = (0x00003fffU & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.Address));
        }
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__49
            vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress 
                = ((1U & (IData)(vlSelfRef.HighRiscTb__DOT__KEY))
                    ? (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__nextCount)
                    : 0U);
        }
    }
    if (((0x0000000000000600ULL & vlSelfRef.__VactTriggered[1U]) 
         | (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        {
            // Inlined CFunc: _act_comb__TOP__3
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__nextCount 
                = (0x0000ffffU & ((IData)(((0x0fc0U 
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
                                   ? ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__OffsetEnable)
                                       ? ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteData) 
                                          + VL_EXTENDS_II(16,9, 
                                                          (0x000001ffU 
                                                           & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))))
                                       : (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteData))
                                   : ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__OffsetEnable)
                                       ? ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress) 
                                          + VL_EXTENDS_II(16,9, 
                                                          (0x000001ffU 
                                                           & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))))
                                       : ((IData)(1U) 
                                          + (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress)))));
        }
    }
}

void VHighRiscTb___024root___nba_comb__TOP__0(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___nba_comb__TOP__0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VHighRiscTb_expFlags_t__struct__0 __Vfunc_calc_adc__20__Vfuncout;
    __Vfunc_calc_adc__20__Vfuncout.__PVT__out = 0;
    __Vfunc_calc_adc__20__Vfuncout.__PVT__Overflow = 0;
    __Vfunc_calc_adc__20__Vfuncout.__PVT__Parity = 0;
    __Vfunc_calc_adc__20__Vfuncout.__PVT__Negative = 0;
    __Vfunc_calc_adc__20__Vfuncout.__PVT__Zero = 0;
    __Vfunc_calc_adc__20__Vfuncout.__PVT__Carry = 0;
    SData/*15:0*/ __Vfunc_calc_adc__20__a;
    __Vfunc_calc_adc__20__a = 0;
    SData/*15:0*/ __Vfunc_calc_adc__20__b;
    __Vfunc_calc_adc__20__b = 0;
    SData/*15:0*/ __Vfunc_calc_adc__20__y;
    __Vfunc_calc_adc__20__y = 0;
    // Body
    __Vfunc_calc_adc__20__b = vlSelfRef.HighRiscTb__DOT__SWRead2;
    __Vfunc_calc_adc__20__a = vlSelfRef.HighRiscTb__DOT__SWRead1;
    __Vfunc_calc_adc__20__y = 0;
    __Vfunc_calc_adc__20__y = ((0xfffeU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (1U & ((IData)(__Vfunc_calc_adc__20__a) 
                                        ^ (IData)(__Vfunc_calc_adc__20__b))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              ((IData)(__Vfunc_calc_adc__20__a) 
                                               & (IData)(__Vfunc_calc_adc__20__b)));
    __Vfunc_calc_adc__20__y = ((0xfffdU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (2U & ((0xfffffffeU 
                                         & ((IData)(__Vfunc_calc_adc__20__a) 
                                            ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                        ^ ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                           << 1U))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 1U)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 1U)));
    __Vfunc_calc_adc__20__y = ((0xfffbU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (4U & ((0xfffffffcU 
                                         & ((IData)(__Vfunc_calc_adc__20__a) 
                                            ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                        ^ ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                           << 2U))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 2U)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 2U)));
    __Vfunc_calc_adc__20__y = ((0xfff7U & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (8U & ((0xfffffff8U 
                                         & ((IData)(__Vfunc_calc_adc__20__a) 
                                            ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                        ^ ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                           << 3U))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 3U)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 3U)));
    __Vfunc_calc_adc__20__y = ((0xffefU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & ((IData)(__Vfunc_calc_adc__20__a) 
                                                     ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                  << 4U))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 4U)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 4U)));
    __Vfunc_calc_adc__20__y = ((0xffdfU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & ((IData)(__Vfunc_calc_adc__20__a) 
                                                     ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                  << 5U))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 5U)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 5U)));
    __Vfunc_calc_adc__20__y = ((0xffbfU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & ((IData)(__Vfunc_calc_adc__20__a) 
                                                     ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                  << 6U))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 6U)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 6U)));
    __Vfunc_calc_adc__20__y = ((0xff7fU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & ((IData)(__Vfunc_calc_adc__20__a) 
                                                     ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                  << 7U))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 7U)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 7U)));
    __Vfunc_calc_adc__20__y = ((0xfeffU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (0x00000100U & ((0xffffff00U 
                                                  & ((IData)(__Vfunc_calc_adc__20__a) 
                                                     ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                  << 8U))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 8U)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 8U)));
    __Vfunc_calc_adc__20__y = ((0xfdffU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (0x00000200U & ((0xfffffe00U 
                                                  & ((IData)(__Vfunc_calc_adc__20__a) 
                                                     ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                  << 9U))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 9U)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 9U)));
    __Vfunc_calc_adc__20__y = ((0xfbffU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (0x00000400U & ((0xfffffc00U 
                                                  & ((IData)(__Vfunc_calc_adc__20__a) 
                                                     ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                  << 0x0000000aU))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 0x0aU)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 0x0aU)));
    __Vfunc_calc_adc__20__y = ((0xf7ffU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (0x00000800U & ((0xfffff800U 
                                                  & ((IData)(__Vfunc_calc_adc__20__a) 
                                                     ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                  << 0x0000000bU))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 0x0bU)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 0x0bU)));
    __Vfunc_calc_adc__20__y = ((0xefffU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (0x00001000U & ((0xfffff000U 
                                                  & ((IData)(__Vfunc_calc_adc__20__a) 
                                                     ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                  << 0x0000000cU))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 0x0cU)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 0x0cU)));
    __Vfunc_calc_adc__20__y = ((0xdfffU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (0x00002000U & ((0xffffe000U 
                                                  & ((IData)(__Vfunc_calc_adc__20__a) 
                                                     ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                  << 0x0000000dU))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 0x0dU)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 0x0dU)));
    __Vfunc_calc_adc__20__y = ((0xbfffU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (0x00004000U & ((0xffffc000U 
                                                  & ((IData)(__Vfunc_calc_adc__20__a) 
                                                     ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                  << 0x0000000eU))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 0x0eU)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 0x0eU)));
    __Vfunc_calc_adc__20__y = ((0x7fffU & (IData)(__Vfunc_calc_adc__20__y)) 
                               | (0x00008000U & ((0xffff8000U 
                                                  & ((IData)(__Vfunc_calc_adc__20__a) 
                                                     ^ (IData)(__Vfunc_calc_adc__20__b))) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                  << 0x0000000fU))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__20__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__20__b)) 
                                                   >> 0x0fU)) 
                                               | (((IData)(__Vfunc_calc_adc__20__a) 
                                                   & (IData)(__Vfunc_calc_adc__20__b)) 
                                                  >> 0x0fU)));
    vlSymsp->TOP__assertionmath.expFlags.__PVT__out 
        = __Vfunc_calc_adc__20__y;
    vlSymsp->TOP__assertionmath.expFlags.__PVT__Carry 
        = vlSymsp->TOP__assertionmath.temp_carry;
    vlSymsp->TOP__assertionmath.expFlags.__PVT__Zero 
        = (0U == VL_EXTENDS_II(32,16, (IData)(__Vfunc_calc_adc__20__y)));
    vlSymsp->TOP__assertionmath.expFlags.__PVT__Negative 
        = (1U & ((IData)(__Vfunc_calc_adc__20__y) >> 0x0fU));
    vlSymsp->TOP__assertionmath.expFlags.__PVT__Overflow 
        = (1U & (((~ (((IData)(__Vfunc_calc_adc__20__b) 
                       | (IData)(__Vfunc_calc_adc__20__a)) 
                      >> 0x0fU)) & ((IData)(__Vfunc_calc_adc__20__y) 
                                    >> 0x0fU)) | ((
                                                   ((IData)(__Vfunc_calc_adc__20__b) 
                                                    & (IData)(__Vfunc_calc_adc__20__a)) 
                                                   >> 0x0fU) 
                                                  & (~ 
                                                     ((IData)(__Vfunc_calc_adc__20__y) 
                                                      >> 0x0fU)))));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & (IData)(__Vfunc_calc_adc__20__y));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 1U)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 2U)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 3U)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 4U)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 5U)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 6U)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 7U)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 8U)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 9U)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 0x0aU)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 0x0bU)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 0x0cU)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 0x0dU)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 0x0eU)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__20__y) 
                                                  >> 0x0fU)));
    vlSymsp->TOP__assertionmath.expFlags.__PVT__Parity 
        = (1U & (~ (IData)(vlSymsp->TOP__assertionmath.parity_sum)));
    __Vfunc_calc_adc__20__Vfuncout = vlSymsp->TOP__assertionmath.expFlags;
    vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal 
        = __Vfunc_calc_adc__20__Vfuncout;
    vlSelfRef.HighRiscTb__DOT__OutVal = vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal
        .__PVT__out;
}

void VHighRiscTb___024root___nba_comb__TOP__1(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___nba_comb__TOP__1\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_13;
    __VdfgRegularize_h6e95ff9d_0_13 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_14;
    __VdfgRegularize_h6e95ff9d_0_14 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_15;
    __VdfgRegularize_h6e95ff9d_0_15 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_16;
    __VdfgRegularize_h6e95ff9d_0_16 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_17;
    __VdfgRegularize_h6e95ff9d_0_17 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_18;
    __VdfgRegularize_h6e95ff9d_0_18 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_19;
    __VdfgRegularize_h6e95ff9d_0_19 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_20;
    __VdfgRegularize_h6e95ff9d_0_20 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_21;
    __VdfgRegularize_h6e95ff9d_0_21 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_22;
    __VdfgRegularize_h6e95ff9d_0_22 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_23;
    __VdfgRegularize_h6e95ff9d_0_23 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_24;
    __VdfgRegularize_h6e95ff9d_0_24 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_25;
    __VdfgRegularize_h6e95ff9d_0_25 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_26;
    __VdfgRegularize_h6e95ff9d_0_26 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_29;
    __VdfgRegularize_h6e95ff9d_0_29 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_30;
    __VdfgRegularize_h6e95ff9d_0_30 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_31;
    __VdfgRegularize_h6e95ff9d_0_31 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_32;
    __VdfgRegularize_h6e95ff9d_0_32 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_33;
    __VdfgRegularize_h6e95ff9d_0_33 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_34;
    __VdfgRegularize_h6e95ff9d_0_34 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_35;
    __VdfgRegularize_h6e95ff9d_0_35 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_36;
    __VdfgRegularize_h6e95ff9d_0_36 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_37;
    __VdfgRegularize_h6e95ff9d_0_37 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_38;
    __VdfgRegularize_h6e95ff9d_0_38 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_39;
    __VdfgRegularize_h6e95ff9d_0_39 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_40;
    __VdfgRegularize_h6e95ff9d_0_40 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_41;
    __VdfgRegularize_h6e95ff9d_0_41 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_42;
    __VdfgRegularize_h6e95ff9d_0_42 = 0;
    // Body
    vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteEnable 
        = ((2U != (0x0000000fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                  >> 0x0000000cU))) 
           & (0U != (0x0000000fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                    >> 0x0000000cU))));
    vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__OffsetEnable 
        = (IData)(((0U == (0xf000U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))) 
                   & ((2U != (0x0000000fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                             >> 0x0000000cU))) 
                      & ((0x00000080U | ((0x00000040U 
                                          & ((~ ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags) 
                                                 >> 1U)) 
                                             << 6U)) 
                                         | ((0x00000020U 
                                             & ((~ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags)) 
                                                << 5U)) 
                                            | (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags)))) 
                         >> (7U & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                   >> 9U))))));
    vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest 
        = ((0x3fU == (0x0000003fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                     >> 6U))) ? (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress)
            : ((0x3eU == (0x0000003fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                         >> 6U))) ? (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iAluMuxA__DOT__Flags)
                : vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers
               [(0x0000003fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                >> 6U))]));
    vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc 
        = ((0x3fU == (0x0000003fU & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData)))
            ? (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress)
            : ((0x3eU == (0x0000003fU & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData)))
                ? (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iAluMuxB__DOT__Flags)
                : vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers
               [(0x0000003fU & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))]));
    vlSelfRef.HighRiscTb__DOT__uut__DOT__DataAssertVal 
        = ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc) 
           & (- (IData)((2U == (0x0000000fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                               >> 0x0000000cU))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = VL_MULS_III(32, 
                                                           VL_EXTENDS_II(32,16, (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest)), 
                                                           VL_EXTENDS_II(32,16, (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = (0x0000ffffU 
                                                & VL_DIVS_III(16, (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest), (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = (0x0000ffffU 
                                                & VL_MODDIVS_III(16, (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest), (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 = ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc) 
                                                 | (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = ((~ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc)) 
                                                & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc) 
                                                & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = (0x0000ffffU 
                                                & ((~ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc)) 
                                                   ^ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc) 
                                                ^ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64 = (1U 
                                                 & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags) 
                                                    ^ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)));
    __VdfgRegularize_h6e95ff9d_0_29 = (1U & (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79 = (1U 
                                                 & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags) 
                                                    ^ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)));
    __VdfgRegularize_h6e95ff9d_0_13 = (1U & (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_29) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                     >> 1U)));
    __VdfgRegularize_h6e95ff9d_0_30 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_29) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                 >> 1U)) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_13) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                     >> 1U)));
    __VdfgRegularize_h6e95ff9d_0_14 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_13) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                 >> 1U)) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_30) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                     >> 2U)));
    __VdfgRegularize_h6e95ff9d_0_31 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_30) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                 >> 2U)) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                >> 2U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_14) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                     >> 2U)));
    __VdfgRegularize_h6e95ff9d_0_15 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_14) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                 >> 2U)) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                >> 2U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_61 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_31) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                     >> 3U)));
    __VdfgRegularize_h6e95ff9d_0_32 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_31) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                 >> 3U)) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                >> 3U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_15) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                     >> 3U)));
    __VdfgRegularize_h6e95ff9d_0_16 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_15) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                 >> 3U)) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                >> 3U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_32) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                     >> 4U)));
    __VdfgRegularize_h6e95ff9d_0_33 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_32) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                 >> 4U)) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                >> 4U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_16) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                     >> 4U)));
    __VdfgRegularize_h6e95ff9d_0_17 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_16) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                 >> 4U)) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                >> 4U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_59 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_33) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                     >> 5U)));
    __VdfgRegularize_h6e95ff9d_0_34 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_33) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                 >> 5U)) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                >> 5U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_17) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                     >> 5U)));
    __VdfgRegularize_h6e95ff9d_0_18 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_17) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                 >> 5U)) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                >> 5U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_34) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                     >> 6U)));
    __VdfgRegularize_h6e95ff9d_0_35 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_34) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                 >> 6U)) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                >> 6U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_18) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                     >> 6U)));
    __VdfgRegularize_h6e95ff9d_0_19 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_18) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                 >> 6U)) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                >> 6U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_35) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                     >> 7U)));
    __VdfgRegularize_h6e95ff9d_0_36 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_35) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                 >> 7U)) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                >> 7U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_19) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                     >> 7U)));
    __VdfgRegularize_h6e95ff9d_0_20 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_19) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                 >> 7U)) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                >> 7U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_36) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                     >> 8U)));
    __VdfgRegularize_h6e95ff9d_0_37 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_36) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                 >> 8U)) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                >> 8U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_71 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_20) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                     >> 8U)));
    __VdfgRegularize_h6e95ff9d_0_21 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_20) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                 >> 8U)) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                >> 8U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_37) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                     >> 9U)));
    __VdfgRegularize_h6e95ff9d_0_38 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_37) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                 >> 9U)) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                >> 9U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_21) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                     >> 9U)));
    __VdfgRegularize_h6e95ff9d_0_22 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_21) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                 >> 9U)) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                >> 9U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_38) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                     >> 0x0000000aU)));
    __VdfgRegularize_h6e95ff9d_0_39 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_38) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                 >> 0x0000000aU)) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                >> 0x0000000aU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_69 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_22) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                     >> 0x0000000aU)));
    __VdfgRegularize_h6e95ff9d_0_23 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_22) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                 >> 0x0000000aU)) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                >> 0x0000000aU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_39) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                     >> 0x0000000bU)));
    __VdfgRegularize_h6e95ff9d_0_40 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_39) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                 >> 0x0000000bU)) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                >> 0x0000000bU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_23) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                     >> 0x0000000bU)));
    __VdfgRegularize_h6e95ff9d_0_24 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_23) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                 >> 0x0000000bU)) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                >> 0x0000000bU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_40) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                     >> 0x0000000cU)));
    __VdfgRegularize_h6e95ff9d_0_41 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_40) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                 >> 0x0000000cU)) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                >> 0x0000000cU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_67 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_24) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                     >> 0x0000000cU)));
    __VdfgRegularize_h6e95ff9d_0_25 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_24) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                 >> 0x0000000cU)) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                >> 0x0000000cU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_41) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                     >> 0x0000000dU)));
    __VdfgRegularize_h6e95ff9d_0_42 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_41) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                 >> 0x0000000dU)) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                >> 0x0000000dU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_25) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                     >> 0x0000000dU)));
    __VdfgRegularize_h6e95ff9d_0_26 = (1U & (((IData)(__VdfgRegularize_h6e95ff9d_0_25) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                 >> 0x0000000dU)) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                >> 0x0000000dU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_42) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                     >> 0x0000000eU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43 = (1U 
                                                 & (((IData)(__VdfgRegularize_h6e95ff9d_0_42) 
                                                     & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                        >> 0x0000000eU)) 
                                                    | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                       >> 0x0000000eU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65 = (1U 
                                                 & ((IData)(__VdfgRegularize_h6e95ff9d_0_26) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                     >> 0x0000000eU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27 = (1U 
                                                 & (((IData)(__VdfgRegularize_h6e95ff9d_0_26) 
                                                     & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                        >> 0x0000000eU)) 
                                                    | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                       >> 0x0000000eU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43) 
                                                ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                   >> 0x0000000fU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27) 
                                                ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                   >> 0x0000000fU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49 = (((
                                                   ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52))) 
                                                   << 0x0000000cU) 
                                                  | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56))) 
                                                     << 8U)) 
                                                 | ((((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_59) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_61) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48 = (((
                                                   ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_67))) 
                                                   << 0x0000000cU) 
                                                  | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_69) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_71))) 
                                                     << 8U)) 
                                                 | ((((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79)))));
    vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutDest 
        = (0x0000ffffU & ((0x00008000U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                           ? ((0x00004000U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                               ? ((0x00002000U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                   ? ((0x00001000U 
                                       & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                       ? (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 
                                          >> 0x00000010U)
                                       : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                                   : ((0x00001000U 
                                       & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                       ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)
                                       : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))
                               : ((0x00002000U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                   ? ((0x00001000U 
                                       & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                       ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49)
                                       : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48))
                                   : ((0x00001000U 
                                       & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                       ? ((0x00000020U 
                                           & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                           ? ((0x0000f800U 
                                               & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                                  << 0x0000000bU)) 
                                              | (0x000007ffU 
                                                 & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest)))
                                           : VL_EXTENDS_II(16,11, 
                                                           ((0x000007c0U 
                                                             & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                                                << 6U)) 
                                                            | (0x0000003fU 
                                                               & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest)))))
                                       : VL_EXTENDS_II(16,6, 
                                                       (0x0000003fU 
                                                        & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))))))
                           : ((0x00004000U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                               ? ((0x00002000U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                   ? ((0x00001000U 
                                       & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                       ? ((0x00008000U 
                                           & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags) 
                                              << 0x0000000fU)) 
                                          | (0x00007fffU 
                                             & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc) 
                                                >> 1U)))
                                       : ((0x0000fffeU 
                                           & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc) 
                                              << 1U)) 
                                          | (1U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags))))
                                   : (~ ((0x00001000U 
                                          & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                          ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12)
                                          : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))
                               : ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc) 
                                  & (- (IData)((3U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                                    >> 0x0000000cU)))))))));
}

void VHighRiscTb___024root___nba_comb__TOP__2(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___nba_comb__TOP__2\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutFlags 
        = ((0x00008000U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
            ? ((0x00004000U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                ? ((((2U & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags) 
                            >> 3U)) | (1U & (~ ((0x00002000U 
                                                 & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                                 ? 
                                                ((0x00001000U 
                                                  & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                                  ? 
                                                 VL_COUNTONES_I(
                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 
                                                                 >> 0x00000010U))
                                                  : 
                                                 VL_COUNTONES_I(
                                                                (0x0000ffffU 
                                                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)))
                                                 : 
                                                ((0x00001000U 
                                                  & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                                  ? 
                                                 VL_COUNTONES_I((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8))
                                                  : 
                                                 VL_COUNTONES_I((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7))))))) 
                    << 3U) | (((0x00002000U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                ? ((0x00001000U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                    ? ((2U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 
                                              >> 0x0000001eU)) 
                                       | (0U == VL_EXTENDS_II(32,16, 
                                                              (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 
                                                               >> 0x00000010U))))
                                    : ((2U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 
                                              >> 0x0000000eU)) 
                                       | (0U == VL_EXTENDS_II(32,16, 
                                                              (0x0000ffffU 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)))))
                                : ((0x00001000U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                    ? ((2U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                              >> 0x0000000eU)) 
                                       | (0U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8))))
                                    : ((2U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7) 
                                              >> 0x0000000eU)) 
                                       | (0U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))))) 
                              << 1U)) : ((0x00002000U 
                                          & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                          ? ((0x00000010U 
                                              & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__VdfgRegularize_h6e95ff9d_0_45)) 
                                             | ((8U 
                                                 & ((~ 
                                                     ((0x00001000U 
                                                       & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                                       ? 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64) 
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
                                                       : 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79) 
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
                                                                     + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65)))))))))))))))))) 
                                                    << 3U)) 
                                                | (7U 
                                                   & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__VdfgRegularize_h6e95ff9d_0_45))))
                                          : (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags)))
            : ((0x0000001eU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags)) 
               | (1U & ((0x00004000U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                         ? ((0x00002000U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                             ? ((0x00001000U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                 ? (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc)
                                 : ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc) 
                                    >> 0x0000000fU))
                             : (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags))
                         : (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags)))));
}

void VHighRiscTb_Bus__B2_P2___nba_sequent__TOP__HighRiscTb__DOT__uut__DOT__Ibus__0(VHighRiscTb_Bus__B2_P2* vlSelf);
void VHighRiscTb_Bus__B2_P2___nba_comb__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0(VHighRiscTb_Bus__B2_P2* vlSelf);
void VHighRiscTb_Bus__B2_P2___nba_comb__TOP__HighRiscTb__DOT__uut__DOT__Ibus__0(VHighRiscTb_Bus__B2_P2* vlSelf);

void VHighRiscTb___024root___eval_nba(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___eval_nba\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__0
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__LEDs 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__LEDs;
            if (vlSelfRef.__VdlySet__HighRiscTb__DOT__uut__DOT__iVga__DOT__VgaRam__v0) {
                vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__VgaRam[vlSelfRef.__VdlyDim0__HighRiscTb__DOT__uut__DOT__iVga__DOT__VgaRam__v0] 
                    = vlSelfRef.__VdlyVal__HighRiscTb__DOT__uut__DOT__iVga__DOT__VgaRam__v0;
            }
            vlSelfRef.HighRiscTb__DOT__SWRead1 = (((IData)(vlSelfRef.__Vdly__HighRiscTb__DOT__SWRead1) 
                                                   & (IData)(vlSelfRef.__VdlyMask__HighRiscTb__DOT__SWRead1)) 
                                                  | ((IData)(vlSelfRef.HighRiscTb__DOT__SWRead1) 
                                                     & (~ (IData)(vlSelfRef.__VdlyMask__HighRiscTb__DOT__SWRead1))));
            vlSelfRef.__VdlyMask__HighRiscTb__DOT__SWRead1 = 0U;
            vlSelfRef.HighRiscTb__DOT__SWRead2 = (((IData)(vlSelfRef.__Vdly__HighRiscTb__DOT__SWRead2) 
                                                   & (IData)(vlSelfRef.__VdlyMask__HighRiscTb__DOT__SWRead2)) 
                                                  | ((IData)(vlSelfRef.HighRiscTb__DOT__SWRead2) 
                                                     & (~ (IData)(vlSelfRef.__VdlyMask__HighRiscTb__DOT__SWRead2))));
            vlSelfRef.__VdlyMask__HighRiscTb__DOT__SWRead2 = 0U;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags;
            if (vlSelfRef.__VdlySet__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers__v0) {
                vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers[vlSelfRef.__VdlyDim0__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers__v0] 
                    = vlSelfRef.__VdlyVal__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers__v0;
            }
        }
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__1
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_a 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_a;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__good_to_go_a 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__good_to_go_a;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_nmram_write_a 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_nmram_write_a;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a1 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a1;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_a 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_a;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken_a_reg 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken_a_reg;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken0_b_reg 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken0_b_reg;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out_b 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out_b;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_x 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_x;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_a 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_a;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__good_to_go_a 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__good_to_go_a;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a1 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a1;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_a 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_a;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out_b 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out_b;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken_a_reg 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken_a_reg;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken0_b_reg 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken0_b_reg;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_x 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_x;
        }
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((0x000000000000001cULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__2
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_flag 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_flag;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_flag 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_flag;
        }
    }
    if ((0x0000000000003fe4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__3
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a;
        }
    }
    if ((0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__4
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse0 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse0;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse0 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse0;
        }
    }
    if ((0x00000000007fa004ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__5
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a;
        }
    }
    if ((0x0000000000000014ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__6
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_flag 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_flag;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_reg_a 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_reg_a;
            vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.ReadData 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_reg_a;
        }
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__7
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken1_b_reg 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken1_b_reg;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken1_b_reg 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken1_b_reg;
        }
    }
    if ((0x0000000000800000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__8
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse1 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse1;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse1 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse1;
        }
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__9
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_b 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_b;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_b 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_b;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_flag 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_flag;
        }
    }
    if ((0x0000000000003fe0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__10
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_a 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_a;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_prev 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_prev;
        }
    }
    if ((0x00000000ff002000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__11
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_b 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_b;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_prev 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_prev;
        }
    }
    if ((0x00000000007fa000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__12
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_prev 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_prev;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_a 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_a;
            vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_a;
        }
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((0x000000ff00002000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__13
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_b 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_b;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_prev 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_prev;
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__14
            vlSelfRef.HighRiscTb__DOT__uut__DOT__VGA_BLANK_N 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_BLANK_N;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextX 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__nextX;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__hCount 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__hCount;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__VGA_SYNC_N 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_SYNC_N;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__VGA_HS 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_HS;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__vCount 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__vCount;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__VGA_VS 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__VGA_VS;
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress 
                = vlSelfRef.__Vdly__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress;
        }
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
        VHighRiscTb_Bus__B2_P2___nba_sequent__TOP__HighRiscTb__DOT__uut__DOT__Ibus__0((&vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus));
    }
    if (((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered[1U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VHighRiscTb___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
    }
    if ((0x00000000007fa003ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VHighRiscTb___024root___nba_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[10U] = 1U;
        VHighRiscTb_Bus__B2_P2___nba_comb__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0((&vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus));
        VHighRiscTb_Bus__B2_P2___nba_comb__TOP__HighRiscTb__DOT__uut__DOT__Ibus__0((&vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus));
        VHighRiscTb___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x00000000007fa017ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__3
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteData 
                = ((1U == (0x0000000fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                          >> 0x0000000cU)))
                    ? (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.ReadData)
                    : (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutDest));
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__nextCount 
                = (0x0000ffffU & ((IData)(((0x0fc0U 
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
                                   ? ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__OffsetEnable)
                                       ? ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteData) 
                                          + VL_EXTENDS_II(16,9, 
                                                          (0x000001ffU 
                                                           & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))))
                                       : (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteData))
                                   : ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__OffsetEnable)
                                       ? ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress) 
                                          + VL_EXTENDS_II(16,9, 
                                                          (0x000001ffU 
                                                           & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))))
                                       : ((IData)(1U) 
                                          + (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress)))));
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__nextWriteA 
                = ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteEnable)
                    ? (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteData)
                    : vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers
                   [(0x0000003fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                    >> 6U))]);
        }
    }
}

void VHighRiscTb___024root___timing_ready(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___timing_ready\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000200ULL & vlSelfRef.__VactTriggered[1U])) {
        vlSelfRef.__VtrigSched_h859c5ab6__0.ready("@( (4'h2 == HighRiscTb.uut.Ibus.ReadData[15:12]))");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hfc096746__0.ready("@(posedge HighRiscTb.CLOCK_50)");
    }
}

void VHighRiscTb___024root___timing_resume(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___timing_resume\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h859c5ab6__0.moveToResumeQueue(
                                                          "@( (4'h2 == HighRiscTb.uut.Ibus.ReadData[15:12]))");
    vlSelfRef.__VtrigSched_hfc096746__0.moveToResumeQueue(
                                                          "@(posedge HighRiscTb.CLOCK_50)");
    vlSelfRef.__VtrigSched_h859c5ab6__0.resume("@( (4'h2 == HighRiscTb.uut.Ibus.ReadData[15:12]))");
    vlSelfRef.__VtrigSched_hfc096746__0.resume("@(posedge HighRiscTb.CLOCK_50)");
    vlSelfRef.__VdynSched.resume();
    if ((0x0000000000000400ULL & vlSelfRef.__VactTriggered[1U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VHighRiscTb___024root___trigger_orInto__act_vec_ext(VlUnpacked<QData/*63:0*/, 3> &out, const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___trigger_orInto__act_vec_ext\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U >= n));
}

void VHighRiscTb___024root___trigger_orInto__act_ext_vec(VlUnpacked<QData/*63:0*/, 2> &out, const VlUnpacked<QData/*63:0*/, 3> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___trigger_orInto__act_ext_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VHighRiscTb___024root___dump_triggers__act_ext(const VlUnpacked<QData/*63:0*/, 3> &ext, const std::string &tag);
#endif  // VL_DEBUG
bool VHighRiscTb___024root___trigger_anySet__act_ext(const VlUnpacked<QData/*63:0*/, 3> &in);

bool VHighRiscTb___024root___eval_phase__act(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___eval_phase__act\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    VHighRiscTb___024root___eval_triggers_vec__act(vlSelf);
    VHighRiscTb___024root___timing_ready(vlSelf);
    VHighRiscTb___024root___trigger_orInto__act_vec_ext(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
    VHighRiscTb___024root___eval_triggers_ext__act(vlSelf, vlSelfRef.__VnbaTriggered);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VHighRiscTb___024root___dump_triggers__act_ext(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VHighRiscTb___024root___trigger_orInto__act_ext_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = VHighRiscTb___024root___trigger_anySet__act_ext(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        VHighRiscTb___024root___timing_resume(vlSelf);
        VHighRiscTb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VHighRiscTb___024root___trigger_anySet__act_ext(const VlUnpacked<QData/*63:0*/, 3> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___trigger_anySet__act_ext\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((3U > n));
    return (0U);
}

bool VHighRiscTb___024root___eval_phase__inact(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___eval_phase__inact\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        vlSelfRef.__VdlySched.resumeZeroDelay();
    }
    return (__VinactExecute);
}

void VHighRiscTb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 2> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((2U > n));
}

bool VHighRiscTb___024root___eval_phase__nba(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___eval_phase__nba\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VHighRiscTb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VHighRiscTb___024root___eval_nba(vlSelf);
        VHighRiscTb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VHighRiscTb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void VHighRiscTb___024root___eval(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___eval\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    {
        // Inlined CFunc: _sample
        vlSelfRef.__Vsampled_TOP__HighRiscTb__DOT__uut__DOT__Ibus__ReadData 
            = vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData;
        vlSelfRef.__Vsampled_TOP__HighRiscTb__DOT__uut__DOT__DataAssertVal 
            = vlSelfRef.HighRiscTb__DOT__uut__DOT__DataAssertVal;
        vlSelfRef.__Vsampled_TOP__HighRiscTb__DOT__check_1__DOT__DataVal 
            = vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal;
    }
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VHighRiscTb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("HighRiscTb.sv", 6, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("HighRiscTb.sv", 6, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    VHighRiscTb___024root___dump_triggers__act_ext(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("HighRiscTb.sv", 6, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = VHighRiscTb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = VHighRiscTb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = VHighRiscTb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void VHighRiscTb___024root____VbeforeTrig_h859c5ab6__0(VHighRiscTb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root____VbeforeTrig_h859c5ab6__0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 2> __VTmp;
    CData/*0:0*/ __Vtrigprevexpr_h21aafd83__0;
    __Vtrigprevexpr_h21aafd83__0 = 0;
    // Body
    __Vtrigprevexpr_h21aafd83__0 = (2U == (0x0000000fU 
                                           & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                              >> 0x0000000cU)));
    __VTmp[0U] = 0ULL;
    __VTmp[1U] = (QData)((IData)((((IData)(__Vtrigprevexpr_h21aafd83__0) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr_h21aafd83__1)) 
                                  << 9U)));
    vlSelfRef.__Vtrigprevexpr_h21aafd83__1 = __Vtrigprevexpr_h21aafd83__0;
    if ((0x0000000000000200ULL & __VTmp[1U])) {
        vlSelfRef.__VtrigSched_h859c5ab6__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[1U] = (vlSelfRef.__VactTriggeredAcc[1U] 
                                        | __VTmp[1U]);
}

void VHighRiscTb___024root____VbeforeTrig_hfc096746__0(VHighRiscTb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root____VbeforeTrig_hfc096746__0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 2> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.HighRiscTb__DOT__CLOCK_50) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__CLOCK_50__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__CLOCK_50__0 
        = vlSelfRef.HighRiscTb__DOT__CLOCK_50;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hfc096746__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void VHighRiscTb___024root___eval_debug_assertions(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___eval_debug_assertions\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
