// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHighRiscTb.h for the primary calling header

#include "VHighRiscTb__pch.h"

void VHighRiscTb___024root___timing_ready(VHighRiscTb___024root* vlSelf);

VL_ATTR_COLD void VHighRiscTb___024root___eval_static(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___eval_static\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[1U] = (1ULL | vlSelfRef.__VactTriggered[1U]);
    vlSelfRef.__VactTriggered[1U] = (2ULL | vlSelfRef.__VactTriggered[1U]);
    vlSelfRef.__VactTriggered[1U] = (4ULL | vlSelfRef.__VactTriggered[1U]);
    vlSelfRef.__VactTriggered[1U] = (8ULL | vlSelfRef.__VactTriggered[1U]);
    vlSelfRef.__VactTriggered[1U] = (0x0000000000000010ULL 
                                     | vlSelfRef.__VactTriggered[1U]);
    vlSelfRef.__VactTriggered[1U] = (0x0000000000000020ULL 
                                     | vlSelfRef.__VactTriggered[1U]);
    vlSelfRef.__VactTriggered[1U] = (0x0000000000000040ULL 
                                     | vlSelfRef.__VactTriggered[1U]);
    vlSelfRef.__VactTriggered[1U] = (0x0000000000000080ULL 
                                     | vlSelfRef.__VactTriggered[1U]);
    vlSelfRef.__VactTriggered[1U] = (0x0000000000000100ULL 
                                     | vlSelfRef.__VactTriggered[1U]);
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__CLOCK_50__0 
        = vlSelfRef.HighRiscTb__DOT__CLOCK_50;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__Reset__0 
        = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__Reset;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__ClockCount__0 
        = vlSelfRef.HighRiscTb__DOT__ClockCount;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__OutVal__0 
        = vlSelfRef.HighRiscTb__DOT__OutVal;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__SW__0 
        = vlSelfRef.HighRiscTb__DOT__SW;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__SWRead1__0 
        = vlSelfRef.HighRiscTb__DOT__SWRead1;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__SWRead2__0 
        = vlSelfRef.HighRiscTb__DOT__SWRead2;
    vlSelfRef.__Vtrigprevexpr___TOP__HighRiscTb__DOT__check_1__DOT__DataAssertVal__0 
        = vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataAssertVal;
    vlSelfRef.__Vtrigprevexpr___TOP____024unit____Venumtab_enum_name15__0 
        = VHighRiscTb___024unit::__Venumtab_enum_name15;
    vlSelfRef.__Vtrigprevexpr___TOP____024unit____Venumtab_enum_valid15__0 
        = VHighRiscTb___024unit::__Venumtab_enum_valid15;
    vlSelfRef.__Vtrigprevexpr_hab8c834f__1 = (2U == 
                                              (0x0000000fU 
                                               & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                                  >> 0x0000000cU)));
    VHighRiscTb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((1U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void VHighRiscTb___024root___eval_final(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___eval_final\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VHighRiscTb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
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

VL_ATTR_COLD bool VHighRiscTb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VHighRiscTb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VHighRiscTb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VHighRiscTb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
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
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void VHighRiscTb___024root___stl_sequent__TOP__0(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___stl_sequent__TOP__0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VHighRiscTb_expFlags_t__struct__0 __Vfunc_calc_adc__0__Vfuncout;
    __Vfunc_calc_adc__0__Vfuncout.__PVT__out = 0;
    __Vfunc_calc_adc__0__Vfuncout.__PVT__Overflow = 0;
    __Vfunc_calc_adc__0__Vfuncout.__PVT__Parity = 0;
    __Vfunc_calc_adc__0__Vfuncout.__PVT__Negative = 0;
    __Vfunc_calc_adc__0__Vfuncout.__PVT__Zero = 0;
    __Vfunc_calc_adc__0__Vfuncout.__PVT__Carry = 0;
    SData/*15:0*/ __Vfunc_calc_adc__0__a;
    __Vfunc_calc_adc__0__a = 0;
    SData/*15:0*/ __Vfunc_calc_adc__0__b;
    __Vfunc_calc_adc__0__b = 0;
    SData/*15:0*/ __Vfunc_calc_adc__0__y;
    __Vfunc_calc_adc__0__y = 0;
    SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_12;
    __VdfgRegularize_h6e95ff9d_0_12 = 0;
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
    CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_45;
    __VdfgRegularize_h6e95ff9d_0_45 = 0;
    SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_48;
    __VdfgRegularize_h6e95ff9d_0_48 = 0;
    SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_49;
    __VdfgRegularize_h6e95ff9d_0_49 = 0;
    // Body
    vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__Reset 
        = (1U & (~ (IData)(vlSelfRef.HighRiscTb__DOT__KEY)));
    __Vfunc_calc_adc__0__b = vlSelfRef.HighRiscTb__DOT__SWRead2;
    __Vfunc_calc_adc__0__a = vlSelfRef.HighRiscTb__DOT__SWRead1;
    __Vfunc_calc_adc__0__y = 0;
    __Vfunc_calc_adc__0__y = ((0xfffeU & (IData)(__Vfunc_calc_adc__0__y)) 
                              | (1U & ((IData)(__Vfunc_calc_adc__0__a) 
                                       ^ (IData)(__Vfunc_calc_adc__0__b))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              ((IData)(__Vfunc_calc_adc__0__a) 
                                               & (IData)(__Vfunc_calc_adc__0__b)));
    __Vfunc_calc_adc__0__y = ((0xfffdU & (IData)(__Vfunc_calc_adc__0__y)) 
                              | (2U & ((0xfffffffeU 
                                        & ((IData)(__Vfunc_calc_adc__0__a) 
                                           ^ (IData)(__Vfunc_calc_adc__0__b))) 
                                       ^ ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                          << 1U))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__0__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__0__b)) 
                                                   >> 1U)) 
                                               | (((IData)(__Vfunc_calc_adc__0__a) 
                                                   & (IData)(__Vfunc_calc_adc__0__b)) 
                                                  >> 1U)));
    __Vfunc_calc_adc__0__y = ((0xfffbU & (IData)(__Vfunc_calc_adc__0__y)) 
                              | (4U & ((0xfffffffcU 
                                        & ((IData)(__Vfunc_calc_adc__0__a) 
                                           ^ (IData)(__Vfunc_calc_adc__0__b))) 
                                       ^ ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                          << 2U))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__0__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__0__b)) 
                                                   >> 2U)) 
                                               | (((IData)(__Vfunc_calc_adc__0__a) 
                                                   & (IData)(__Vfunc_calc_adc__0__b)) 
                                                  >> 2U)));
    __Vfunc_calc_adc__0__y = ((0xfff7U & (IData)(__Vfunc_calc_adc__0__y)) 
                              | (8U & ((0xfffffff8U 
                                        & ((IData)(__Vfunc_calc_adc__0__a) 
                                           ^ (IData)(__Vfunc_calc_adc__0__b))) 
                                       ^ ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                          << 3U))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__0__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__0__b)) 
                                                   >> 3U)) 
                                               | (((IData)(__Vfunc_calc_adc__0__a) 
                                                   & (IData)(__Vfunc_calc_adc__0__b)) 
                                                  >> 3U)));
    __Vfunc_calc_adc__0__y = ((0xffefU & (IData)(__Vfunc_calc_adc__0__y)) 
                              | (0x00000010U & ((0xfffffff0U 
                                                 & ((IData)(__Vfunc_calc_adc__0__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__0__b))) 
                                                ^ ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                   << 4U))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__0__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__0__b)) 
                                                   >> 4U)) 
                                               | (((IData)(__Vfunc_calc_adc__0__a) 
                                                   & (IData)(__Vfunc_calc_adc__0__b)) 
                                                  >> 4U)));
    __Vfunc_calc_adc__0__y = ((0xffdfU & (IData)(__Vfunc_calc_adc__0__y)) 
                              | (0x00000020U & ((0xffffffe0U 
                                                 & ((IData)(__Vfunc_calc_adc__0__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__0__b))) 
                                                ^ ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                   << 5U))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__0__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__0__b)) 
                                                   >> 5U)) 
                                               | (((IData)(__Vfunc_calc_adc__0__a) 
                                                   & (IData)(__Vfunc_calc_adc__0__b)) 
                                                  >> 5U)));
    __Vfunc_calc_adc__0__y = ((0xffbfU & (IData)(__Vfunc_calc_adc__0__y)) 
                              | (0x00000040U & ((0xffffffc0U 
                                                 & ((IData)(__Vfunc_calc_adc__0__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__0__b))) 
                                                ^ ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                   << 6U))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__0__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__0__b)) 
                                                   >> 6U)) 
                                               | (((IData)(__Vfunc_calc_adc__0__a) 
                                                   & (IData)(__Vfunc_calc_adc__0__b)) 
                                                  >> 6U)));
    __Vfunc_calc_adc__0__y = ((0xff7fU & (IData)(__Vfunc_calc_adc__0__y)) 
                              | (0x00000080U & ((0xffffff80U 
                                                 & ((IData)(__Vfunc_calc_adc__0__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__0__b))) 
                                                ^ ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                   << 7U))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__0__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__0__b)) 
                                                   >> 7U)) 
                                               | (((IData)(__Vfunc_calc_adc__0__a) 
                                                   & (IData)(__Vfunc_calc_adc__0__b)) 
                                                  >> 7U)));
    __Vfunc_calc_adc__0__y = ((0xfeffU & (IData)(__Vfunc_calc_adc__0__y)) 
                              | (0x00000100U & ((0xffffff00U 
                                                 & ((IData)(__Vfunc_calc_adc__0__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__0__b))) 
                                                ^ ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                   << 8U))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__0__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__0__b)) 
                                                   >> 8U)) 
                                               | (((IData)(__Vfunc_calc_adc__0__a) 
                                                   & (IData)(__Vfunc_calc_adc__0__b)) 
                                                  >> 8U)));
    __Vfunc_calc_adc__0__y = ((0xfdffU & (IData)(__Vfunc_calc_adc__0__y)) 
                              | (0x00000200U & ((0xfffffe00U 
                                                 & ((IData)(__Vfunc_calc_adc__0__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__0__b))) 
                                                ^ ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                   << 9U))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__0__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__0__b)) 
                                                   >> 9U)) 
                                               | (((IData)(__Vfunc_calc_adc__0__a) 
                                                   & (IData)(__Vfunc_calc_adc__0__b)) 
                                                  >> 9U)));
    __Vfunc_calc_adc__0__y = ((0xfbffU & (IData)(__Vfunc_calc_adc__0__y)) 
                              | (0x00000400U & ((0xfffffc00U 
                                                 & ((IData)(__Vfunc_calc_adc__0__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__0__b))) 
                                                ^ ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                   << 0x0000000aU))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__0__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__0__b)) 
                                                   >> 0x0aU)) 
                                               | (((IData)(__Vfunc_calc_adc__0__a) 
                                                   & (IData)(__Vfunc_calc_adc__0__b)) 
                                                  >> 0x0aU)));
    __Vfunc_calc_adc__0__y = ((0xf7ffU & (IData)(__Vfunc_calc_adc__0__y)) 
                              | (0x00000800U & ((0xfffff800U 
                                                 & ((IData)(__Vfunc_calc_adc__0__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__0__b))) 
                                                ^ ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                   << 0x0000000bU))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__0__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__0__b)) 
                                                   >> 0x0bU)) 
                                               | (((IData)(__Vfunc_calc_adc__0__a) 
                                                   & (IData)(__Vfunc_calc_adc__0__b)) 
                                                  >> 0x0bU)));
    __Vfunc_calc_adc__0__y = ((0xefffU & (IData)(__Vfunc_calc_adc__0__y)) 
                              | (0x00001000U & ((0xfffff000U 
                                                 & ((IData)(__Vfunc_calc_adc__0__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__0__b))) 
                                                ^ ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                   << 0x0000000cU))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__0__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__0__b)) 
                                                   >> 0x0cU)) 
                                               | (((IData)(__Vfunc_calc_adc__0__a) 
                                                   & (IData)(__Vfunc_calc_adc__0__b)) 
                                                  >> 0x0cU)));
    __Vfunc_calc_adc__0__y = ((0xdfffU & (IData)(__Vfunc_calc_adc__0__y)) 
                              | (0x00002000U & ((0xffffe000U 
                                                 & ((IData)(__Vfunc_calc_adc__0__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__0__b))) 
                                                ^ ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                   << 0x0000000dU))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__0__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__0__b)) 
                                                   >> 0x0dU)) 
                                               | (((IData)(__Vfunc_calc_adc__0__a) 
                                                   & (IData)(__Vfunc_calc_adc__0__b)) 
                                                  >> 0x0dU)));
    __Vfunc_calc_adc__0__y = ((0xbfffU & (IData)(__Vfunc_calc_adc__0__y)) 
                              | (0x00004000U & ((0xffffc000U 
                                                 & ((IData)(__Vfunc_calc_adc__0__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__0__b))) 
                                                ^ ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                   << 0x0000000eU))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__0__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__0__b)) 
                                                   >> 0x0eU)) 
                                               | (((IData)(__Vfunc_calc_adc__0__a) 
                                                   & (IData)(__Vfunc_calc_adc__0__b)) 
                                                  >> 0x0eU)));
    __Vfunc_calc_adc__0__y = ((0x7fffU & (IData)(__Vfunc_calc_adc__0__y)) 
                              | (0x00008000U & ((0xffff8000U 
                                                 & ((IData)(__Vfunc_calc_adc__0__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__0__b))) 
                                                ^ ((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                   << 0x0000000fU))));
    vlSymsp->TOP__assertionmath.temp_carry = (1U & 
                                              (((IData)(vlSymsp->TOP__assertionmath.temp_carry) 
                                                & (((IData)(__Vfunc_calc_adc__0__a) 
                                                    ^ (IData)(__Vfunc_calc_adc__0__b)) 
                                                   >> 0x0fU)) 
                                               | (((IData)(__Vfunc_calc_adc__0__a) 
                                                   & (IData)(__Vfunc_calc_adc__0__b)) 
                                                  >> 0x0fU)));
    vlSymsp->TOP__assertionmath.expFlags.__PVT__out 
        = __Vfunc_calc_adc__0__y;
    vlSymsp->TOP__assertionmath.expFlags.__PVT__Carry 
        = vlSymsp->TOP__assertionmath.temp_carry;
    vlSymsp->TOP__assertionmath.expFlags.__PVT__Zero 
        = (0U == VL_EXTENDS_II(32,16, (IData)(__Vfunc_calc_adc__0__y)));
    vlSymsp->TOP__assertionmath.expFlags.__PVT__Negative 
        = (1U & ((IData)(__Vfunc_calc_adc__0__y) >> 0x0fU));
    vlSymsp->TOP__assertionmath.expFlags.__PVT__Overflow 
        = (1U & (((~ (((IData)(__Vfunc_calc_adc__0__b) 
                       | (IData)(__Vfunc_calc_adc__0__a)) 
                      >> 0x0fU)) & ((IData)(__Vfunc_calc_adc__0__y) 
                                    >> 0x0fU)) | ((
                                                   ((IData)(__Vfunc_calc_adc__0__b) 
                                                    & (IData)(__Vfunc_calc_adc__0__a)) 
                                                   >> 0x0fU) 
                                                  & (~ 
                                                     ((IData)(__Vfunc_calc_adc__0__y) 
                                                      >> 0x0fU)))));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & (IData)(__Vfunc_calc_adc__0__y));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__0__y) 
                                                  >> 1U)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__0__y) 
                                                  >> 2U)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__0__y) 
                                                  >> 3U)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__0__y) 
                                                  >> 4U)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__0__y) 
                                                  >> 5U)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__0__y) 
                                                  >> 6U)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__0__y) 
                                                  >> 7U)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__0__y) 
                                                  >> 8U)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__0__y) 
                                                  >> 9U)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__0__y) 
                                                  >> 0x0aU)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__0__y) 
                                                  >> 0x0bU)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__0__y) 
                                                  >> 0x0cU)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__0__y) 
                                                  >> 0x0dU)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__0__y) 
                                                  >> 0x0eU)));
    vlSymsp->TOP__assertionmath.parity_sum = (1U & 
                                              ((IData)(vlSymsp->TOP__assertionmath.parity_sum) 
                                               + ((IData)(__Vfunc_calc_adc__0__y) 
                                                  >> 0x0fU)));
    vlSymsp->TOP__assertionmath.expFlags.__PVT__Parity 
        = (1U & (~ (IData)(vlSymsp->TOP__assertionmath.parity_sum)));
    __Vfunc_calc_adc__0__Vfuncout = vlSymsp->TOP__assertionmath.expFlags;
    vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal 
        = __Vfunc_calc_adc__0__Vfuncout;
    vlSelfRef.HighRiscTb__DOT__OutVal = vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal
        .__PVT__out;
    vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction 
        = ((0U == (3U & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress) 
                         >> 0x0000000eU))) ? (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.SlaveReadData0)
            : ((1U == (3U & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress) 
                             >> 0x0000000eU))) ? (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__IMux__DOT__SlaveData2)
                : ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__IMux__DOT__SlaveData3) 
                   & (- (IData)((3U == (3U & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress) 
                                              >> 0x0000000eU))))))));
    vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteEnable 
        = ((2U != (0x0000000fU & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                  >> 0x0000000cU))) 
           & (0U != (0x0000000fU & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                    >> 0x0000000cU))));
    vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__OffsetEnable 
        = (IData)(((0U == (0xf000U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))) 
                   & ((2U != (0x0000000fU & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                             >> 0x0000000cU))) 
                      & ((0x00000080U | ((0x00000040U 
                                          & ((~ ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags) 
                                                 >> 1U)) 
                                             << 6U)) 
                                         | ((0x00000020U 
                                             & ((~ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags)) 
                                                << 5U)) 
                                            | (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags)))) 
                         >> (7U & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                   >> 9U))))));
    vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest 
        = ((0x3fU == (0x0000003fU & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                     >> 6U))) ? (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress)
            : ((0x3eU == (0x0000003fU & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                         >> 6U))) ? (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iAluMuxA__DOT__Flags)
                : vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers
               [(0x0000003fU & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                >> 6U))]));
    vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc 
        = ((0x3fU == (0x0000003fU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction)))
            ? (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress)
            : ((0x3eU == (0x0000003fU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction)))
                ? (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iAluMuxB__DOT__Flags)
                : vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers
               [(0x0000003fU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))]));
    vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataAssertVal 
        = ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc) 
           & (- (IData)((2U == (0x0000000fU & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                               >> 0x0000000cU))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = VL_MULS_III(32, 
                                                           VL_EXTENDS_II(32,16, (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest)), 
                                                           VL_EXTENDS_II(32,16, (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = (0x0000ffffU 
                                                & VL_DIVS_III(16, (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest), (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = (0x0000ffffU 
                                                & VL_MODDIVS_III(16, (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest), (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc)));
    __VdfgRegularize_h6e95ff9d_0_12 = ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc) 
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
    __VdfgRegularize_h6e95ff9d_0_49 = (((((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
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
                                           << 4U) | 
                                          ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_61) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64)))));
    __VdfgRegularize_h6e95ff9d_0_48 = (((((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
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
                                           << 4U) | 
                                          ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79)))));
    __VdfgRegularize_h6e95ff9d_0_45 = ((0x00001000U 
                                        & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
                                        ? ((((4U & 
                                              ((((~ 
                                                  (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest) 
                                                    >> 0x0000000fU) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5))) 
                                                 & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc) 
                                                    >> 0x0000000fU)) 
                                                | (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest) 
                                                    >> 0x0000000fU) 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc) 
                                                        >> 0x0000000fU)) 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))) 
                                               << 2U)) 
                                             | ((2U 
                                                 & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags) 
                                                    >> 2U)) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5))) 
                                            << 2U) 
                                           | (((0U 
                                                == 
                                                VL_EXTENDS_II(32,16, (IData)(__VdfgRegularize_h6e95ff9d_0_49))) 
                                               << 1U) 
                                              | (1U 
                                                 & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43) 
                                                     & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                        >> 0x0000000fU)) 
                                                    | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                       >> 0x0000000fU)))))
                                        : ((((4U & 
                                              ((((~ 
                                                  ((IData)(__VdfgRegularize_h6e95ff9d_0_12) 
                                                   >> 0x0000000fU)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)) 
                                                | ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)) 
                                                   & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                      >> 0x0000000fU))) 
                                               << 2U)) 
                                             | ((2U 
                                                 & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags) 
                                                    >> 2U)) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6))) 
                                            << 2U) 
                                           | (((0U 
                                                == 
                                                VL_EXTENDS_II(32,16, (IData)(__VdfgRegularize_h6e95ff9d_0_48))) 
                                               << 1U) 
                                              | (1U 
                                                 & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27) 
                                                     & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                        >> 0x0000000fU)) 
                                                    | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                       >> 0x0000000fU))))));
    if ((0x00008000U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))) {
        if ((0x00004000U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))) {
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutDest 
                = (0x0000ffffU & ((0x00002000U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
                                   ? ((0x00001000U 
                                       & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
                                       ? (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 
                                          >> 0x00000010U)
                                       : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                                   : ((0x00001000U 
                                       & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
                                       ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)
                                       : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7))));
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutFlags 
                = ((((2U & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags) 
                            >> 3U)) | (1U & (~ ((0x00002000U 
                                                 & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
                                                 ? 
                                                ((0x00001000U 
                                                  & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
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
                                                  & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
                                                  ? 
                                                 VL_COUNTONES_I((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8))
                                                  : 
                                                 VL_COUNTONES_I((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7))))))) 
                    << 3U) | (((0x00002000U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
                                ? ((0x00001000U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
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
                                : ((0x00001000U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
                                    ? ((2U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                              >> 0x0000000eU)) 
                                       | (0U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8))))
                                    : ((2U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7) 
                                              >> 0x0000000eU)) 
                                       | (0U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))))) 
                              << 1U));
        } else if ((0x00002000U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))) {
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutDest 
                = (0x0000ffffU & ((0x00001000U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
                                   ? (IData)(__VdfgRegularize_h6e95ff9d_0_49)
                                   : (IData)(__VdfgRegularize_h6e95ff9d_0_48)));
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutFlags 
                = ((0x00000010U & (IData)(__VdfgRegularize_h6e95ff9d_0_45)) 
                   | ((8U & ((~ ((0x00001000U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
                                  ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64) 
                                     + ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63) 
                                        + ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62) 
                                           + ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_61) 
                                              + ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60) 
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
                                     + ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78) 
                                        + ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77) 
                                           + ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76) 
                                              + ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75) 
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
                             << 3U)) | (7U & (IData)(__VdfgRegularize_h6e95ff9d_0_45))));
        } else {
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutDest 
                = (0x0000ffffU & ((0x00001000U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
                                   ? ((0x00000020U 
                                       & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
                                       ? ((0x0000f800U 
                                           & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                              << 0x0000000bU)) 
                                          | (0x000007ffU 
                                             & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest)))
                                       : VL_EXTENDS_II(16,11, 
                                                       ((0x000007c0U 
                                                         & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                                            << 6U)) 
                                                        | (0x0000003fU 
                                                           & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest)))))
                                   : VL_EXTENDS_II(16,6, 
                                                   (0x0000003fU 
                                                    & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction)))));
            vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutFlags 
                = vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags;
        }
    } else {
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutDest 
            = (0x0000ffffU & ((0x00004000U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
                               ? ((0x00002000U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
                                   ? ((0x00001000U 
                                       & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
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
                                          & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
                                          ? (IData)(__VdfgRegularize_h6e95ff9d_0_12)
                                          : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))
                               : ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc) 
                                  & (- (IData)((3U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                                    >> 0x0000000cU))))))));
        vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutFlags 
            = ((0x0000001eU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags)) 
               | (1U & ((0x00004000U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
                         ? ((0x00002000U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
                             ? ((0x00001000U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
                                 ? (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc)
                                 : ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc) 
                                    >> 0x0000000fU))
                             : (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags))
                         : (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags))));
    }
}

void VHighRiscTb_Bus__B2_P2___nba_sequent__TOP__HighRiscTb__DOT__uut__DOT__Ibus__1(VHighRiscTb_Bus__B2_P2* vlSelf);
void VHighRiscTb_Bus__B2_P2___nba_comb__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0(VHighRiscTb_Bus__B2_P2* vlSelf);
void VHighRiscTb_Bus__B2_P2___act_comb__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0(VHighRiscTb_Bus__B2_P2* vlSelf);

VL_ATTR_COLD bool VHighRiscTb___024root___eval_phase__stl(VHighRiscTb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root___eval_phase__stl\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
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
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                VHighRiscTb___024root___stl_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.__Vm_traceActivity[3U] = 1U;
                    vlSelfRef.__Vm_traceActivity[4U] = 1U;
                    vlSelfRef.__Vm_traceActivity[5U] = 1U;
                    vlSelfRef.__Vm_traceActivity[6U] = 1U;
                }
                VHighRiscTb_Bus__B2_P2___nba_sequent__TOP__HighRiscTb__DOT__uut__DOT__Ibus__1((&vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus));
                VHighRiscTb_Bus__B2_P2___nba_comb__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0((&vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus));
                {
                    // Inlined CFunc: _nba_comb__TOP__2
                    vlSelfRef.HighRiscTb__DOT__uut__DOT__SlaveReadData3 
                        = ((- (IData)((0U == (0x0000001fU 
                                              & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.Address) 
                                                 >> 9U))))) 
                           & (IData)(vlSelfRef.HighRiscTb__DOT__SW));
                }
                VHighRiscTb_Bus__B2_P2___act_comb__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0((&vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus));
                {
                    // Inlined CFunc: _nba_comb__TOP__3
                    vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__LoadValue 
                        = ((1U == (0x0000000fU & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                                  >> 0x0000000cU)))
                            ? (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.ReadData)
                            : (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutDest));
                    vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__nextCount 
                        = (0x0000ffffU & ((IData)((
                                                   (0x0fc0U 
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
                                               ? ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__LoadValue) 
                                                  + 
                                                  VL_EXTENDS_II(16,9, 
                                                                (0x000001ffU 
                                                                 & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))))
                                               : (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__LoadValue))
                                           : ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__OffsetEnable)
                                               ? ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress) 
                                                  + 
                                                  VL_EXTENDS_II(16,9, 
                                                                (0x000001ffU 
                                                                 & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))))
                                               : ((IData)(1U) 
                                                  + (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress)))));
                    vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__nextWriteA 
                        = ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteEnable)
                            ? (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__LoadValue)
                            : vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers
                           [(0x0000003fU & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                            >> 6U))]);
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
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: @( HighRiscTb.ClockCount)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 65 is active: @( HighRiscTb.OutVal)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 66 is active: @( HighRiscTb.SW)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 67 is active: @( HighRiscTb.SWRead1)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 68 is active: @( HighRiscTb.SWRead2)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 69 is active: @( HighRiscTb.check_1.DataAssertVal)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 70 is active: @( $unit.__Venumtab_enum_name15)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 71 is active: @( $unit.__Venumtab_enum_valid15)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 72 is active: @( (4'h2 == HighRiscTb.uut.iProcesor.iDecoder.Instruction[15:12]))\n");
    }
    if ((1U & (IData)((triggers[1U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 73 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
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
    vlSelf->HighRiscTb__DOT__uut__DOT__LEDs = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4992647548616940729ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__Addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17536098416829658699ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__SlaveReadData3 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6055929757378477704ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3719822869516462336ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5552890332547106217ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProcesor__DOT__MemWriteEnable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12015826964318675266ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iAluMuxB__DOT__Flags = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11667674525531670591ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iAluMuxA__DOT__Flags = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10629476427119740097ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9997526805802696392ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__Reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9377094963792879700ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__LoadValue = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3429033328165360528ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__OffsetEnable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6524936020789846546ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__nextCount = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13850648801973906379ull);
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
        vlSelf->HighRiscTb__DOT__uut__DOT__iVga__DOT__VgaRam[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12584857346560736316ull);
    }
    vlSelf->HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5094238667633048955ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iVga__DOT__nextX = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16263741271809624964ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2025403922432363087ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__hCount = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 18046109976784008519ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__vCount = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18167339223953033948ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__IMux__DOT__SlaveData2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15912596353145540266ull);
    vlSelf->HighRiscTb__DOT__uut__DOT__IMux__DOT__SlaveData3 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16381712008420583255ull);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__RamBlock[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17373248084072785981ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__RomBlock[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11504891616004794122ull);
    }
    vlSelf->HighRiscTb__DOT__check_1__DOT__DataAssertVal = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13199860789047414113ull);
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
    vlSelf->__VdfgRegularize_h6e95ff9d_0_27 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_43 = 0;
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
    vlSelf->__VdlyVal__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__RamBlock__v0 = 0;
    vlSelf->__VdlyDim0__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__RamBlock__v0 = 0;
    vlSelf->__VdlySet__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__RamBlock__v0 = 0;
    vlSelf->__Vsampled_TOP__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction = 0;
    vlSelf->__Vsampled_TOP__HighRiscTb__DOT__check_1__DOT__DataAssertVal = 0;
    vlSelf->__Vsampled_TOP__HighRiscTb__DOT__check_1__DOT__DataVal.__PVT__out = 0;
    vlSelf->__Vsampled_TOP__HighRiscTb__DOT__check_1__DOT__DataVal.__PVT__Overflow = 0;
    vlSelf->__Vsampled_TOP__HighRiscTb__DOT__check_1__DOT__DataVal.__PVT__Parity = 0;
    vlSelf->__Vsampled_TOP__HighRiscTb__DOT__check_1__DOT__DataVal.__PVT__Negative = 0;
    vlSelf->__Vsampled_TOP__HighRiscTb__DOT__check_1__DOT__DataVal.__PVT__Zero = 0;
    vlSelf->__Vsampled_TOP__HighRiscTb__DOT__check_1__DOT__DataVal.__PVT__Carry = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__CLOCK_50__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__Reset__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__ClockCount__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__OutVal__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__SW__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__SWRead1__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__SWRead2__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HighRiscTb__DOT__check_1__DOT__DataAssertVal__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP____024unit____Venumtab_enum_valid15__0[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr_hab8c834f__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
