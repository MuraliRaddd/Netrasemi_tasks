// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHighRiscTb.h for the primary calling header

#include "VHighRiscTb__pch.h"

VL_ATTR_COLD void VHighRiscTb___024root___eval_final(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___eval_final\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VHighRiscTb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VHighRiscTb___024root___eval_phase__stl(VHighRiscTb___024root* vlSelf);

VL_ATTR_COLD void VHighRiscTb___024root___eval_settle(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___eval_settle\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VHighRiscTb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("HighRiscTb.sv", 6, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = VHighRiscTb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool VHighRiscTb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VHighRiscTb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VHighRiscTb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] HighRiscTb.uut.iDataMemory.iRAM.altsyncram_component.m_default.altsyncram_inst.i_good_to_write_a)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] HighRiscTb.uut.iDataMemory.iRAM.altsyncram_component.m_default.altsyncram_inst.i_good_to_write_b)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([hybrid] HighRiscTb.uut.iProgramMemory.iRom.altsyncram_component.m_default.altsyncram_inst.i_good_to_write_a)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([hybrid] HighRiscTb.uut.iProgramMemory.iRom.altsyncram_component.m_default.altsyncram_inst.i_good_to_write_b)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VHighRiscTb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void VHighRiscTb___024root___stl_sequent__TOP__2(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___stl_sequent__TOP__2\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteData 
        = ((1U == (0x0000000fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                  >> 0x0000000cU)))
            ? (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.ReadData)
            : (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutDest));
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
    vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__nextCount 
        = (0x0000ffffU & ((IData)(((0x0fc0U == (0x0fc0U 
                                                & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))) 
                                   & ((2U != (0x0000000fU 
                                              & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                                 >> 0x0000000cU))) 
                                      & (0U != (0x0000000fU 
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
                               : ((IData)(1U) + (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress)))));
    vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__nextWriteA 
        = ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteEnable)
            ? (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteData)
            : vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers
           [(0x0000003fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                            >> 6U))]);
}

void VHighRiscTb___024root___act_comb__TOP__0(VHighRiscTb___024root* vlSelf);
VL_ATTR_COLD void VHighRiscTb_Bus__B2_P2___stl_sequent__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0(VHighRiscTb_Bus__B2_P2* vlSelf);
VL_ATTR_COLD void VHighRiscTb_Bus__B2_P2___stl_sequent__TOP__HighRiscTb__DOT__uut__DOT__Ibus__0(VHighRiscTb_Bus__B2_P2* vlSelf);
void VHighRiscTb___024root___nba_comb__TOP__1(VHighRiscTb___024root* vlSelf);
void VHighRiscTb_Bus__B2_P2___nba_comb__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0(VHighRiscTb_Bus__B2_P2* vlSelf);
void VHighRiscTb_Bus__B2_P2___nba_comb__TOP__HighRiscTb__DOT__uut__DOT__Ibus__0(VHighRiscTb_Bus__B2_P2* vlSelf);

VL_ATTR_COLD bool VHighRiscTb___024root___eval_phase__stl(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___eval_phase__stl\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[1U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[1U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
        vlSelfRef.__VstlTriggered[0U] = (QData)((IData)(
                                                        (((((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b__0)) 
                                                           << 3U) 
                                                          | (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a__0)) 
                                                             << 2U)) 
                                                         | ((((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a__0 
            = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a;
        vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b__0 
            = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b;
        vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a__0 
            = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a;
        vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b__0 
            = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
            vlSelfRef.__VstlDidInit = 1U;
            vlSelfRef.__VstlTriggered[0U] = (1ULL | vlSelfRef.__VstlTriggered[0U]);
            vlSelfRef.__VstlTriggered[0U] = (2ULL | vlSelfRef.__VstlTriggered[0U]);
            vlSelfRef.__VstlTriggered[0U] = (4ULL | vlSelfRef.__VstlTriggered[0U]);
            vlSelfRef.__VstlTriggered[0U] = (8ULL | vlSelfRef.__VstlTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VHighRiscTb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = VHighRiscTb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[1U])) {
                VHighRiscTb___024root___act_comb__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.__Vm_traceActivity[3U] = 1U;
                    vlSelfRef.__Vm_traceActivity[4U] = 1U;
                    vlSelfRef.__Vm_traceActivity[5U] = 1U;
                    vlSelfRef.__Vm_traceActivity[6U] = 1U;
                    vlSelfRef.__Vm_traceActivity[7U] = 1U;
                    vlSelfRef.__Vm_traceActivity[8U] = 1U;
                    vlSelfRef.__Vm_traceActivity[9U] = 1U;
                    vlSelfRef.__Vm_traceActivity[10U] = 1U;
                }
                VHighRiscTb_Bus__B2_P2___stl_sequent__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0((&vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus));
                VHighRiscTb_Bus__B2_P2___stl_sequent__TOP__HighRiscTb__DOT__uut__DOT__Ibus__0((&vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus));
                VHighRiscTb___024root___nba_comb__TOP__1(vlSelf);
                VHighRiscTb_Bus__B2_P2___nba_comb__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0((&vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus));
                VHighRiscTb_Bus__B2_P2___nba_comb__TOP__HighRiscTb__DOT__uut__DOT__Ibus__0((&vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus));
                VHighRiscTb___024root___stl_sequent__TOP__2(vlSelf);
            }
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__3
                    vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a2 
                        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a;
                }
            }
            if ((2ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__4
                    vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b2 
                        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b;
                }
            }
            if ((4ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__5
                    vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a2 
                        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a;
                }
            }
            if ((8ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__6
                    vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b2 
                        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b;
                }
            }
            if ((1ULL & (vlSelfRef.__VstlTriggered[1U] 
                         | vlSelfRef.__VstlTriggered[0U]))) {
                {
                    // Inlined CFunc: _stl_comb__TOP__0
                    vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a 
                        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a2;
                }
            }
            if (((1ULL & vlSelfRef.__VstlTriggered[1U]) 
                 | (2ULL & vlSelfRef.__VstlTriggered[0U]))) {
                {
                    // Inlined CFunc: _stl_comb__TOP__1
                    vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b 
                        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b2;
                }
            }
            if (((1ULL & vlSelfRef.__VstlTriggered[1U]) 
                 | (4ULL & vlSelfRef.__VstlTriggered[0U]))) {
                {
                    // Inlined CFunc: _stl_comb__TOP__2
                    vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a 
                        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a2;
                }
            }
            if (((1ULL & vlSelfRef.__VstlTriggered[1U]) 
                 | (8ULL & vlSelfRef.__VstlTriggered[0U]))) {
                {
                    // Inlined CFunc: _stl_comb__TOP__3
                    vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b 
                        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b2;
                }
            }
        }
    }
    return (__VstlExecute);
}

bool VHighRiscTb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VHighRiscTb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VHighRiscTb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge HighRiscTb.CLOCK_50)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge HighRiscTb.uut.iProcesor.iPC.Reset)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge 1'h1)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge 1'h1)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge 1'h0)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( HighRiscTb.uut.iDataMemory.iRAM.altsyncram_component.m_default.altsyncram_inst.i_address_reg_a)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( HighRiscTb.uut.iDataMemory.iRAM.altsyncram_component.m_default.altsyncram_inst.i_byteena_mask_reg_a_out)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @( HighRiscTb.uut.iDataMemory.iRAM.altsyncram_component.m_default.altsyncram_inst.i_data_reg_a)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @( HighRiscTb.uut.iDataMemory.iRAM.altsyncram_component.m_default.altsyncram_inst.i_force_reread_a_signal)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @( HighRiscTb.uut.iDataMemory.iRAM.altsyncram_component.m_default.altsyncram_inst.i_numwords_a)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @( HighRiscTb.uut.iDataMemory.iRAM.altsyncram_component.m_default.altsyncram_inst.i_original_data_a)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @( HighRiscTb.uut.iDataMemory.iRAM.altsyncram_component.m_default.altsyncram_inst.i_q_tmp2_a)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 12 is active: @( HighRiscTb.uut.iDataMemory.iRAM.altsyncram_component.m_default.altsyncram_inst.i_wren_reg_a)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 13 is active: @( 1'h0)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 14 is active: @(edge 1'h1)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 15 is active: @( HighRiscTb.uut.iProgramMemory.iRom.altsyncram_component.m_default.altsyncram_inst.i_address_reg_a)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000010U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 16 is active: @( HighRiscTb.uut.iProgramMemory.iRom.altsyncram_component.m_default.altsyncram_inst.i_byteena_mask_reg_a_out)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000011U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 17 is active: @( HighRiscTb.uut.iProgramMemory.iRom.altsyncram_component.m_default.altsyncram_inst.i_data_reg_a)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000012U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 18 is active: @( HighRiscTb.uut.iProgramMemory.iRom.altsyncram_component.m_default.altsyncram_inst.i_force_reread_a_signal)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000013U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 19 is active: @( HighRiscTb.uut.iProgramMemory.iRom.altsyncram_component.m_default.altsyncram_inst.i_numwords_a)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000014U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 20 is active: @( HighRiscTb.uut.iProgramMemory.iRom.altsyncram_component.m_default.altsyncram_inst.i_original_data_a)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000015U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 21 is active: @( HighRiscTb.uut.iProgramMemory.iRom.altsyncram_component.m_default.altsyncram_inst.i_q_tmp2_a)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000016U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 22 is active: @( HighRiscTb.uut.iProgramMemory.iRom.altsyncram_component.m_default.altsyncram_inst.i_wren_reg_a)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000017U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 23 is active: @(edge 1'h1)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000018U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 24 is active: @( HighRiscTb.uut.iDataMemory.iRAM.altsyncram_component.m_default.altsyncram_inst.i_address_reg_b)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000019U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 25 is active: @( HighRiscTb.uut.iDataMemory.iRAM.altsyncram_component.m_default.altsyncram_inst.i_byteena_mask_reg_b_out)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 26 is active: @( HighRiscTb.uut.iDataMemory.iRAM.altsyncram_component.m_default.altsyncram_inst.i_data_reg_b)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 27 is active: @( HighRiscTb.uut.iDataMemory.iRAM.altsyncram_component.m_default.altsyncram_inst.i_force_reread_b_signal)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 28 is active: @( HighRiscTb.uut.iDataMemory.iRAM.altsyncram_component.m_default.altsyncram_inst.i_numwords_b)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 29 is active: @( HighRiscTb.uut.iDataMemory.iRAM.altsyncram_component.m_default.altsyncram_inst.i_q_tmp2_b)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 30 is active: @( HighRiscTb.uut.iDataMemory.iRAM.altsyncram_component.m_default.altsyncram_inst.i_rden_reg_b)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 31 is active: @( HighRiscTb.uut.iDataMemory.iRAM.altsyncram_component.m_default.altsyncram_inst.i_wren_reg_b)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000020U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 32 is active: @( HighRiscTb.uut.iProgramMemory.iRom.altsyncram_component.m_default.altsyncram_inst.i_address_reg_b)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000021U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 33 is active: @( HighRiscTb.uut.iProgramMemory.iRom.altsyncram_component.m_default.altsyncram_inst.i_byteena_mask_reg_b_out)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000022U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 34 is active: @( HighRiscTb.uut.iProgramMemory.iRom.altsyncram_component.m_default.altsyncram_inst.i_data_reg_b)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000023U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 35 is active: @( HighRiscTb.uut.iProgramMemory.iRom.altsyncram_component.m_default.altsyncram_inst.i_force_reread_b_signal)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000024U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 36 is active: @( HighRiscTb.uut.iProgramMemory.iRom.altsyncram_component.m_default.altsyncram_inst.i_numwords_b)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000025U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 37 is active: @( HighRiscTb.uut.iProgramMemory.iRom.altsyncram_component.m_default.altsyncram_inst.i_q_tmp2_b)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000026U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 38 is active: @( HighRiscTb.uut.iProgramMemory.iRom.altsyncram_component.m_default.altsyncram_inst.i_rden_reg_b)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000027U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 39 is active: @( HighRiscTb.uut.iProgramMemory.iRom.altsyncram_component.m_default.altsyncram_inst.i_wren_reg_b)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: @(negedge 1'h1)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 65 is active: @(negedge 1'h1)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 66 is active: @(edge HighRiscTb.uut.iDataMemory.iRAM.altsyncram_component.m_default.altsyncram_inst.i_write_flag_a)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 67 is active: @( HighRiscTb.uut.iDataMemory.iRAM.altsyncram_component.m_default.altsyncram_inst.i_read_flag_a)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 68 is active: @( HighRiscTb.uut.iProgramMemory.iRom.altsyncram_component.m_default.altsyncram_inst.i_read_flag_a)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 69 is active: @([hybrid] HighRiscTb.uut.iDataMemory.iRAM.altsyncram_component.m_default.altsyncram_inst.i_good_to_write_a)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 70 is active: @([hybrid] HighRiscTb.uut.iDataMemory.iRAM.altsyncram_component.m_default.altsyncram_inst.i_good_to_write_b)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 71 is active: @([hybrid] HighRiscTb.uut.iProgramMemory.iRom.altsyncram_component.m_default.altsyncram_inst.i_good_to_write_a)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 72 is active: @([hybrid] HighRiscTb.uut.iProgramMemory.iRom.altsyncram_component.m_default.altsyncram_inst.i_good_to_write_b)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 73 is active: @( (4'h2 == HighRiscTb.uut.Ibus.ReadData[15:12]))\n");
    }
    if ((1U & (IData)((triggers[1U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 74 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[1U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 75 is active: @([true] __VdynSched.evaluate())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VHighRiscTb___024root___dump_triggers__act_ext(const VlUnpacked<QData/*63:0*/, 3> &ext, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___dump_triggers__act_ext\n"); );
    // Locals
    VlUnpacked<QData/*63:0*/, 2> vec;
    IData/*31:0*/ i;
    VlUnpacked<QData/*63:0*/, 2> pre;
    IData/*31:0*/ j;
    // Body
    i = 0U;
    do {
        vec[i] = ext[i];
        i = ((IData)(1U) + i);
    } while ((2U > i));
    VHighRiscTb___024root___dump_triggers__act(vec, tag);
    j = 0U;
    do {
        pre[j] = ext[j];
        j = ((IData)(1U) + j);
    } while ((1U > j));
    do {
        pre[j] = 0ULL;
        j = ((IData)(1U) + j);
    } while ((2U > j));
    VHighRiscTb___024root___dump_triggers__act(pre, 
                                               VL_CONCATN_NNN(tag, " pre"s));
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VHighRiscTb___024root___ctor_var_reset(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___ctor_var_reset\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->HighRiscTb__DOT__CLOCK_50 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10839600513466198653ull);
    vlSelf->HighRiscTb__DOT__SW = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2689578815385606617ull);
    vlSelf->HighRiscTb__DOT__KEY = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8427569349882902029ull);
    vlSelf->HighRiscTb__DOT__tbClk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14817498339698684081ull);
    vlSelf->HighRiscTb__DOT__AddrAssert = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4474537913350332281ull);
    vlSelf->HighRiscTb__DOT__ClockCount = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7560123020919654001ull);
    vlSelf->HighRiscTb__DOT__SWRead1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8855078322122578570ull);
    vlSelf->HighRiscTb__DOT__SWRead2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5327411495978888943ull);
    vlSelf->HighRiscTb__DOT__OutVal = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7404545286443685129ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__VGA_BLANK_N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7189723849968183462ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__VGA_SYNC_N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9154171883677797650ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__VGA_HS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16829933084550188495ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__VGA_VS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7065343762764512221ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__DataAssertVal = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14143117674911308701ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__LEDs = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4992647548616940729ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3719822869516462336ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5552890332547106217ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProcesor__DOT__MemWriteEnable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12015826964318675266ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iAluMuxB__DOT__Flags = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11667674525531670591ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iAluMuxA__DOT__Flags = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10629476427119740097ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__Reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9377094963792879700ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__OffsetEnable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6524936020789846546ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__nextCount = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13850648801973906379ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteData = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3058495405985969033ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteEnable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1189885170236521854ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4075648936138140339ull);
    }
    vlSelf->HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__nextWriteA = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10372945111687413623ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutFlags = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13194557283222801582ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6028371314058252493ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3124458995593665512ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutDest = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13451695249013097588ull);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem_data[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 930780571774648901ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem_data_b[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209917616661910723ull);
    }
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 931966053574159832ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4567746860690841301ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6726085449242349780ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa2b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12330252140580096474ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__init_temp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16915214708403376068ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13431630972180325943ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14005680085143598275ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wb2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 862638533850312051ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9487859650080911355ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_reg_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3427852022549968823ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13023314657235202218ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1769580192276430255ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_reg_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6339431461769363350ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10157111914941565581ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14344410344247008409ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_output_latch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2551315574079561888ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16026790322334847904ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13876509046054615348ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 10491603907807349297ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4973033776556494974ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_ecc_reg_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1784870594931301647ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_ecc_tmp_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12741462782105460533ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_address_a = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 2599581863574196434ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_tmp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17152085505891743669ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7954464361225873557ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10025329563266837843ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10948739933710951869ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_x = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3361559057851731348ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_x = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4742969831701840542ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8259843958996186934ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_out_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1326649452788387072ull);
    VL_SCOPED_RAND_RESET_W(2048, vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__ram_initf, __VscopeHash, 12906701189275452297ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12871595472386879279ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17309086861625551911ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 783697156785983098ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6971225829048031299ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5697253804078036148ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17268495886405322417ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8186899431279311967ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14104148474687357117ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__good_to_go_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13483420626785696100ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__good_to_go_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13318326056319240798ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__file_desc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7828187014116906118ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__init_file_b_port = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12690407806677949240ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_nmram_write_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1890188551853750774ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_nmram_write_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1292541348188176093ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__wa_mult_x = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11311953287997069522ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__wa_mult_x_ii = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3347377878802753801ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__wa_mult_x_iii = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 111835367107345676ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__add_reg_a_mult_wa = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 14880905318520948351ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__add_reg_b_mult_wb = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4929277186782429644ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__add_reg_a_mult_wa_pl_wa = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 9772743563600210926ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__add_reg_b_mult_wb_pl_wb = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3774758832942354258ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8826880894040464101ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 939013166096140605ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_data_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9956094671683881869ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_data_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14568408922156544862ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10172646719522978231ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_prev = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1476510417947849625ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13190382273571445353ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_prev = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10425374804348444217ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_outdata_aclr_a_prev = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8459549444046193368ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_outdata_aclr_b_prev = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12921175573794215757ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 571757778114193311ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2449652589839085555ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10065773179867467886ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_b1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6473900051186595748ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3191672081473187681ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_b_signal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1313152071025119175ull);
    VL_SCOPED_RAND_RESET_W(169, vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__cread_during_write_mode_mixed_ports, __VscopeHash, 11481017241850964708ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_ram_block_type = VL_SCOPED_RAND_RESET_Q(57, __VscopeHash, 3970379163487069725ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byte_size = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6781149874327657516ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14572044798771101098ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12542222070473886918ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5266734791322894867ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18252094464391244429ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken_a_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7607548851220337643ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken0_b_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1476662221590782673ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken1_b_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3355686380221736162ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16589527485283483768ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4444530201269221315ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_aclr_flag_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2473495003807796296ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_aclr_flag_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15142241065707143084ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a_idx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11927235348656415915ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__init_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9824942324727257374ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5057744455034495164ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17719997481487996931ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16934437120133141671ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3713140860324945423ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2203968126550833696ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5809887742860014308ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14070226692697724801ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14274668186636352514ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__k = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4025395758551217499ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__k2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15308591873684982657ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__k3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18144344640984050762ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__k4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10710392332806345077ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_div_wa = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10711697510308650030ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_div_wb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11153296244154269339ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j_plus_i2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9557133562552922622ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j2_plus_i5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16806459259529287383ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j3_plus_i5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11277610182974886765ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j_plus_i2_div_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1585803380332720844ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j2_plus_i5_div_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2584427245378074ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j3_plus_i5_div_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3469150903434346409ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j3_plus_i5_div_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7031283624068109066ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15352971741846941777ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5036486094828237109ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_high = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3306937093454768706ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_b_bit_count_low = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17202191477248507275ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_b_bit_count_high = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10542352577403010949ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_write_time_a = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2013124337497647870ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_write_time_b = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16602066489389479339ull);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem_data[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8710762001438027963ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem_data_b[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17617422307207378357ull);
    }
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 877751683464994379ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7123139777222478606ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5957290967326745889ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa2b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5858945950904156441ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__init_temp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16643595199472256494ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2449070308081283981ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3203457199839427243ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wb2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14851826398604201337ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16177676050430939590ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_reg_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5022746114006047882ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6316114451852640008ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6935499034926728772ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_reg_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10817381807072436833ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15992351036247170339ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3657881047450162309ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_output_latch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 959766592001944248ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3079091240996906939ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2682068294451964013ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 13812303548203924735ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12526052684848892413ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_ecc_reg_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11591263871669822390ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_ecc_tmp_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18343054613112657166ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_address_a = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 17945225669634049900ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_tmp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11386668103750563223ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17892465534906670413ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16681691933733985468ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7897791612477511027ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_x = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3221450752820569658ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_x = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3997711473503835338ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18321360242347760885ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_out_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8391473850131932707ull);
    VL_SCOPED_RAND_RESET_W(2048, vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__ram_initf, __VscopeHash, 5221094183943330528ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13328052569202242848ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8319712748588202532ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2018779548008412849ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13221321921177745144ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8310731861747025355ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5356509981234343994ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4516449179554909722ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13767167842351593436ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__good_to_go_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13942136867058491517ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__good_to_go_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17903397799848269621ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__file_desc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13040758417013738328ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__init_file_b_port = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12104659976901902351ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_nmram_write_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10396309111614169209ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_nmram_write_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8868967378919385968ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__wa_mult_x = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11932895601807748181ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__wa_mult_x_ii = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2405475339349772822ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__wa_mult_x_iii = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15372677562121560406ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__add_reg_a_mult_wa = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 5751381965762673351ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__add_reg_b_mult_wb = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11640892177970760277ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__add_reg_a_mult_wa_pl_wa = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 2043488024229741348ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__add_reg_b_mult_wb_pl_wb = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10329013196327852102ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4962021494260130692ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13936932869423041587ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_data_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2626633610955872014ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_data_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2009322205909330040ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10415718889653161116ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_prev = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12128976194499218140ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14866377034495233426ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_prev = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3428661212187808916ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_outdata_aclr_a_prev = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3063816340001386965ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_outdata_aclr_b_prev = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5798605149721404698ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7425996506398804247ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16001321983973927716ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4075487125783969411ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_b1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13780136783202048240ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16509743237707336663ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_b_signal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5176557493103106593ull);
    VL_SCOPED_RAND_RESET_W(169, vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__cread_during_write_mode_mixed_ports, __VscopeHash, 3829572237903042152ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_ram_block_type = VL_SCOPED_RAND_RESET_Q(57, __VscopeHash, 10058791875898062710ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byte_size = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2209324674745077753ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17497625819807072513ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10010450297837515773ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16267277097587972740ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13922369124051141582ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken_a_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17621922067006935523ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken0_b_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17708889603518146181ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken1_b_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7629520964133793959ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8114074811847435899ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12876802895817271992ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_aclr_flag_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3505335484473533076ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_aclr_flag_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2168816320949815886ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a_idx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 432198715591543573ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__init_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 789642923678263142ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11362723997097245194ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4990333205291842350ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12951818247933116757ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 630809972911023728ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3142019438916329818ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12643511244662596451ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16352631197443701864ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17521503715147677268ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__k = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9407092729710536553ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__k2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11399700500249708289ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__k3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7309661100278436524ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__k4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12322660725967207849ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_div_wa = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 791065880335608058ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_div_wb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13040311747479578479ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j_plus_i2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11990751749741772292ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j2_plus_i5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9382164599365657527ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j3_plus_i5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12144978382278280522ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j_plus_i2_div_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15410807040774124524ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j2_plus_i5_div_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17830752782998488128ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j3_plus_i5_div_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9371384665388588310ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__j3_plus_i5_div_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7095069712734992133ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6513380186065476639ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2649178144582123385ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_high = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3337761898377383182ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_b_bit_count_low = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18050714290347138089ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_b_bit_count_high = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10029946244358903031ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_write_time_a = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7076941204037228036ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_write_time_b = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5635679072683172879ull);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->HighRiscTb__DOT__uut__DOT__iVga__DOT__VgaRam[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12584857346560736316ull);
    }
    vlSelf->HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5094238667633048955ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iVga__DOT__nextX = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16263741271809624964ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2025403922432363087ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__hCount = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 18046109976784008519ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__vCount = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18167339223953033948ull);
    vlSelf->HighRiscTb__DOT__check_1__DOT__DataVal.__PVT__out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13936107360399953714ull);
    vlSelf->HighRiscTb__DOT__check_1__DOT__DataVal.__PVT__Overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13936107360399953714ull);
    vlSelf->HighRiscTb__DOT__check_1__DOT__DataVal.__PVT__Parity = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13936107360399953714ull);
    vlSelf->HighRiscTb__DOT__check_1__DOT__DataVal.__PVT__Negative = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13936107360399953714ull);
    vlSelf->HighRiscTb__DOT__check_1__DOT__DataVal.__PVT__Zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13936107360399953714ull);
    vlSelf->HighRiscTb__DOT__check_1__DOT__DataVal.__PVT__Carry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13936107360399953714ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_5 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_6 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_7 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_8 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_12 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_27 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_43 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_48 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_49 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_50 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_51 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_52 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_53 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_54 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_55 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_56 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_57 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_58 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_59 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_60 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_61 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_62 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_63 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_64 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_65 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_66 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_67 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_68 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_69 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_70 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_71 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_72 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_73 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_74 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_75 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_76 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_77 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_78 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_79 = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__SWRead1 = 0;
    vlSelf->__VdlyMask__HighRiscTb__DOT__SWRead1 = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__SWRead2 = 0;
    vlSelf->__VdlyMask__HighRiscTb__DOT__SWRead2 = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__LEDs = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_flag = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_a = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__good_to_go_a = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_nmram_write_a = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a1 = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_a = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken_a_reg = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse0 = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken0_b_reg = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out_b = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_x = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_a = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__good_to_go_a = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a1 = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_flag = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_a = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out_b = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken_a_reg = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse0 = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken0_b_reg = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_x = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken1_b_reg = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse1 = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken1_b_reg = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse1 = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_b = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_b = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_flag = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_a = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_prev = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_reg_a = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_flag = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_b = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_prev = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_a = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_prev = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_b = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_prev = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__VGA_BLANK_N = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__nextX = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__hCount = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__VGA_SYNC_N = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__VGA_HS = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__vCount = 0;
    vlSelf->__Vdly__HighRiscTb__DOT__uut__DOT__VGA_VS = 0;
    vlSelf->__VdlyVal__HighRiscTb__DOT__uut__DOT__iVga__DOT__VgaRam__v0 = 0;
    vlSelf->__VdlyDim0__HighRiscTb__DOT__uut__DOT__iVga__DOT__VgaRam__v0 = 0;
    vlSelf->__VdlySet__HighRiscTb__DOT__uut__DOT__iVga__DOT__VgaRam__v0 = 0;
    vlSelf->__VdlyVal__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers__v0 = 0;
    vlSelf->__VdlyDim0__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers__v0 = 0;
    vlSelf->__VdlySet__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers__v0 = 0;
    vlSelf->__Vsampled_TOP__HighRiscTb__DOT__uut__DOT__Ibus__ReadData = 0;
    vlSelf->__Vsampled_TOP__HighRiscTb__DOT__uut__DOT__DataAssertVal = 0;
    vlSelf->__Vsampled_TOP__HighRiscTb__DOT__check_1__DOT__DataVal.__PVT__out = 0;
    vlSelf->__Vsampled_TOP__HighRiscTb__DOT__check_1__DOT__DataVal.__PVT__Overflow = 0;
    vlSelf->__Vsampled_TOP__HighRiscTb__DOT__check_1__DOT__DataVal.__PVT__Parity = 0;
    vlSelf->__Vsampled_TOP__HighRiscTb__DOT__check_1__DOT__DataVal.__PVT__Negative = 0;
    vlSelf->__Vsampled_TOP__HighRiscTb__DOT__check_1__DOT__DataVal.__PVT__Zero = 0;
    vlSelf->__Vsampled_TOP__HighRiscTb__DOT__check_1__DOT__DataVal.__PVT__Carry = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b__0 = 0;
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__CLOCK_50__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__Reset__0 = 0;
    vlSelf->__Vtrigprevexpr_h287c1b58__0 = 0;
    vlSelf->__Vtrigprevexpr_h9251ca32__0 = 0;
    vlSelf->__Vtrigprevexpr_h287c1e88__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_a__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_data_a__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_a__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_data_a__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_b__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_out__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_b__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_b_signal__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_b__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_b__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_b__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_b__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_b__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_out__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_b__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_b_signal__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_b__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_b__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_b__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_b__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_a__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a__0 = 0;
    vlSelf->__Vtrigprevexpr_h21aafd83__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
