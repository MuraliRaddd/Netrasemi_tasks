// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VHighRiscTb__Syms.h"


void VHighRiscTb___024root__trace_chg_0_sub_0(VHighRiscTb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VHighRiscTb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_chg_0\n"); );
    // Body
    VHighRiscTb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VHighRiscTb___024root*>(voidSelf);
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VHighRiscTb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VHighRiscTb___024root__trace_chg_dtype____0(VHighRiscTb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 4>& __VdtypeVar);
void VHighRiscTb___024root__trace_chg_dtype____1(VHighRiscTb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 32>& __VdtypeVar);

void VHighRiscTb___024root__trace_chg_0_sub_0(VHighRiscTb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_chg_0_sub_0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        VHighRiscTb___024root__trace_chg_dtype____0(vlSelf, bufp, 0, vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__SlaveReadData);
        VHighRiscTb___024root__trace_chg_dtype____1(vlSelf, bufp, 4, vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData);
        VHighRiscTb___024root__trace_chg_dtype____0(vlSelf, bufp, 36, vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__SlaveReadData);
        VHighRiscTb___024root__trace_chg_dtype____1(vlSelf, bufp, 40, vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity[5U])))) {
        bufp->chgSData(oldp+72,(vlSelfRef.HighRiscTb__DOT__OutVal),16);
        bufp->chgSData(oldp+73,(vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal
                                .__PVT__out),16);
        bufp->chgBit(oldp+74,(vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal
                              .__PVT__Overflow));
        bufp->chgBit(oldp+75,(vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal
                              .__PVT__Parity));
        bufp->chgBit(oldp+76,(vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal
                              .__PVT__Negative));
        bufp->chgBit(oldp+77,(vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal
                              .__PVT__Zero));
        bufp->chgBit(oldp+78,(vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal
                              .__PVT__Carry));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__assertionmath.temp_carry));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__assertionmath.parity_sum));
        bufp->chgSData(oldp+81,(vlSymsp->TOP__assertionmath.expFlags
                                .__PVT__out),16);
        bufp->chgBit(oldp+82,(vlSymsp->TOP__assertionmath.expFlags
                              .__PVT__Overflow));
        bufp->chgBit(oldp+83,(vlSymsp->TOP__assertionmath.expFlags
                              .__PVT__Parity));
        bufp->chgBit(oldp+84,(vlSymsp->TOP__assertionmath.expFlags
                              .__PVT__Negative));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__assertionmath.expFlags
                              .__PVT__Zero));
        bufp->chgBit(oldp+86,(vlSymsp->TOP__assertionmath.expFlags
                              .__PVT__Carry));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgSData(oldp+87,((0x000003ffU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__LEDs))),10);
        bufp->chgSData(oldp+88,(vlSelfRef.HighRiscTb__DOT__uut__DOT__LEDs),16);
        bufp->chgSData(oldp+89,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.SlaveReadData0),16);
        bufp->chgSData(oldp+90,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.SlaveReadData0),16);
        bufp->chgCData(oldp+91,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags),5);
        bufp->chgCData(oldp+92,((0x00000080U | ((0x00000040U 
                                                 & ((~ 
                                                     ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags) 
                                                      >> 1U)) 
                                                    << 6U)) 
                                                | ((0x00000020U 
                                                    & ((~ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags)) 
                                                       << 5U)) 
                                                   | (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags))))),8);
        bufp->chgSData(oldp+93,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+94,(vlSelfRef.HighRiscTb__DOT__uut__DOT__VGA_BLANK_N));
        bufp->chgBit(oldp+95,(vlSelfRef.HighRiscTb__DOT__uut__DOT__VGA_SYNC_N));
        bufp->chgBit(oldp+96,(vlSelfRef.HighRiscTb__DOT__uut__DOT__VGA_HS));
        bufp->chgBit(oldp+97,(vlSelfRef.HighRiscTb__DOT__uut__DOT__VGA_VS));
        bufp->chgSData(oldp+98,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress),16);
        bufp->chgCData(oldp+99,((3U & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress) 
                                       >> 0x0000000eU))),2);
        bufp->chgSData(oldp+100,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress),16);
        bufp->chgSData(oldp+101,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextX),11);
        bufp->chgSData(oldp+102,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY),10);
        bufp->chgSData(oldp+103,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__hCount),11);
        bufp->chgSData(oldp+104,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__vCount),10);
        bufp->chgSData(oldp+105,((0x00003fffU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress))),14);
        bufp->chgBit(oldp+106,((1U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__SlaveWriteEnable))));
        bufp->chgBit(oldp+107,((1U & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__SlaveWriteEnable) 
                                      >> 1U))));
        bufp->chgCData(oldp+108,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__SlaveWriteEnable),4);
        bufp->chgCData(oldp+109,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__BlockInUse),2);
        bufp->chgSData(oldp+110,((0x000001ffU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress))),9);
        bufp->chgQData(oldp+111,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortWriteEnable),33);
        bufp->chgBit(oldp+113,((1U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortWriteEnable))));
        bufp->chgBit(oldp+114,((1U & (IData)((vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortWriteEnable 
                                              >> 1U)))));
        bufp->chgCData(oldp+115,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortInUse),5);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+116,((2U == (0x0000000fU 
                                       & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                          >> 0x0000000cU)))));
        bufp->chgSData(oldp+117,(vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataAssertVal),16);
        bufp->chgSData(oldp+118,(vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataAssertVal),16);
        bufp->chgSData(oldp+119,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.Address),16);
        bufp->chgCData(oldp+120,((3U & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.Address) 
                                        >> 0x0000000eU))),2);
        bufp->chgSData(oldp+121,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction),16);
        bufp->chgCData(oldp+122,((0x0000001fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.Address) 
                                                 >> 9U))),5);
        bufp->chgCData(oldp+123,((0x0000000fU & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                                 >> 0x0000000cU))),4);
        bufp->chgSData(oldp+124,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutDest),16);
        bufp->chgSData(oldp+125,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest),16);
        bufp->chgSData(oldp+126,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc),16);
        bufp->chgCData(oldp+127,((0x0000003fU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))),6);
        bufp->chgBit(oldp+128,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteEnable));
        bufp->chgCData(oldp+129,((0x0000003fU & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                                 >> 6U))),6);
        bufp->chgCData(oldp+130,((0x0000003fU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))),6);
        bufp->chgBit(oldp+131,((IData)(((0x0fc0U == 
                                         (0x0fc0U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))) 
                                        & ((2U != (0x0000000fU 
                                                   & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                                      >> 0x0000000cU))) 
                                           & (0U != 
                                              (0x0000000fU 
                                               & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                                  >> 0x0000000cU))))))));
        bufp->chgBit(oldp+132,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__OffsetEnable));
        bufp->chgSData(oldp+133,((0x000001ffU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))),9);
        bufp->chgBit(oldp+134,(((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteEnable) 
                                & (0x0f80U == (0x0fc0U 
                                               & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))))));
        bufp->chgCData(oldp+135,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutFlags),5);
        bufp->chgSData(oldp+136,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc),16);
        bufp->chgSData(oldp+137,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest),16);
        bufp->chgSData(oldp+138,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutDest),16);
        bufp->chgBit(oldp+139,((IData)(((0xa000U == 
                                         (0xe000U & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))) 
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
        bufp->chgBit(oldp+140,((IData)((((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                         >> 0x0000000fU) 
                                        & ((0x00004000U 
                                            & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
                                            ? ((0x00002000U 
                                                & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
                                                ? (
                                                   (0x00001000U 
                                                    & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
                                                    ? 
                                                   VL_COUNTONES_I(
                                                                  (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 
                                                                   >> 0x00000010U))
                                                    : 
                                                   VL_COUNTONES_I(
                                                                  (0x0000ffffU 
                                                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)))
                                                : (
                                                   (0x00001000U 
                                                    & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
                                                    ? 
                                                   VL_COUNTONES_I((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8))
                                                    : 
                                                   VL_COUNTONES_I((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7))))
                                            : (((0x00001000U 
                                                 & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))
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
                                                               + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65))))))))))))))))) 
                                               & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                                  >> 0x0000000dU)))))));
        bufp->chgSData(oldp+141,((0x0000ffffU & ((~ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc)) 
                                                 & (- (IData)((IData)(
                                                                      (0xb000U 
                                                                       == 
                                                                       (0xf000U 
                                                                        & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))))))))),16);
        bufp->chgIData(oldp+142,((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 
                                  & ((- (IData)((3U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                                     >> 0x0000000dU))))) 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                                      >> 0x0000000fU))))))),32);
        bufp->chgCData(oldp+143,((((IData)(((0x0fc0U 
                                             == (0x0fc0U 
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
                                   << 1U) | (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__OffsetEnable))),2);
        bufp->chgSData(oldp+144,((0x00003fffU & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.Address))),14);
        bufp->chgBit(oldp+145,((1U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__SlaveWriteEnable))));
        bufp->chgBit(oldp+146,((1U & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__SlaveWriteEnable) 
                                      >> 1U))));
        bufp->chgCData(oldp+147,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__SlaveWriteEnable),4);
        bufp->chgCData(oldp+148,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__BlockInUse),2);
        bufp->chgSData(oldp+149,((0x000001ffU & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.Address))),9);
        bufp->chgQData(oldp+150,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortWriteEnable),33);
        bufp->chgBit(oldp+152,((1U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortWriteEnable))));
        bufp->chgBit(oldp+153,((1U & (IData)((vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortWriteEnable 
                                              >> 1U)))));
        bufp->chgCData(oldp+154,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortInUse),5);
    }
    bufp->chgBit(oldp+155,(vlSelfRef.HighRiscTb__DOT__CLOCK_50));
    bufp->chgSData(oldp+156,(vlSelfRef.HighRiscTb__DOT__SW),10);
    bufp->chgCData(oldp+157,(vlSelfRef.HighRiscTb__DOT__KEY),4);
    bufp->chgBit(oldp+158,(vlSelfRef.HighRiscTb__DOT__tbClk));
    bufp->chgSData(oldp+159,(vlSelfRef.HighRiscTb__DOT__ClockCount),16);
    bufp->chgSData(oldp+160,(vlSelfRef.HighRiscTb__DOT__SWRead1),16);
    bufp->chgSData(oldp+161,(vlSelfRef.HighRiscTb__DOT__SWRead2),16);
    bufp->chgBit(oldp+162,((1U & (~ (IData)(vlSelfRef.HighRiscTb__DOT__CLOCK_50)))));
    bufp->chgCData(oldp+163,((0x000000fcU & (((0x00000038U 
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
    bufp->chgCData(oldp+164,((0x000000fcU & (((0x00000038U 
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
    bufp->chgCData(oldp+165,((0x000000ffU & ((0x000000c0U 
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
    bufp->chgBit(oldp+166,((1U & (~ (IData)(vlSelfRef.HighRiscTb__DOT__KEY)))));
    bufp->chgSData(oldp+167,(vlSelfRef.HighRiscTb__DOT__uut__DOT__SlaveReadData3),16);
    bufp->chgSData(oldp+168,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.SlaveReadData1),16);
    bufp->chgSData(oldp+169,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.ReadData),16);
    bufp->chgSData(oldp+170,(vlSelfRef.HighRiscTb__DOT__SW),16);
    bufp->chgSData(oldp+171,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers
                             [(0x0000003fU & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                              >> 6U))]),16);
    bufp->chgSData(oldp+172,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers
                             [(0x0000003fU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction))]),16);
    bufp->chgSData(oldp+173,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__LoadValue),16);
    bufp->chgSData(oldp+174,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__LoadValue),16);
    bufp->chgSData(oldp+175,((0x0000ffffU & ((IData)(
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
    bufp->chgSData(oldp+176,(((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteEnable)
                               ? (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__LoadValue)
                               : vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers
                              [(0x0000003fU & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction) 
                                               >> 6U))])),16);
    bufp->chgCData(oldp+177,((0x000000ffU & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair) 
                                             >> (0x0000000fU 
                                                 & ((7U 
                                                     | (8U 
                                                        & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY) 
                                                           << 3U))) 
                                                    - (IData)(7U)))))),8);
}

void VHighRiscTb___024root__trace_chg_dtype____0(VHighRiscTb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_chg_dtype____0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[0]),16);
    bufp->chgSData(oldp+1,(__VdtypeVar[1]),16);
    bufp->chgSData(oldp+2,(__VdtypeVar[2]),16);
    bufp->chgSData(oldp+3,(__VdtypeVar[3]),16);
}

void VHighRiscTb___024root__trace_chg_dtype____1(VHighRiscTb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_chg_dtype____1\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[0]),16);
    bufp->chgSData(oldp+1,(__VdtypeVar[1]),16);
    bufp->chgSData(oldp+2,(__VdtypeVar[2]),16);
    bufp->chgSData(oldp+3,(__VdtypeVar[3]),16);
    bufp->chgSData(oldp+4,(__VdtypeVar[4]),16);
    bufp->chgSData(oldp+5,(__VdtypeVar[5]),16);
    bufp->chgSData(oldp+6,(__VdtypeVar[6]),16);
    bufp->chgSData(oldp+7,(__VdtypeVar[7]),16);
    bufp->chgSData(oldp+8,(__VdtypeVar[8]),16);
    bufp->chgSData(oldp+9,(__VdtypeVar[9]),16);
    bufp->chgSData(oldp+10,(__VdtypeVar[10]),16);
    bufp->chgSData(oldp+11,(__VdtypeVar[11]),16);
    bufp->chgSData(oldp+12,(__VdtypeVar[12]),16);
    bufp->chgSData(oldp+13,(__VdtypeVar[13]),16);
    bufp->chgSData(oldp+14,(__VdtypeVar[14]),16);
    bufp->chgSData(oldp+15,(__VdtypeVar[15]),16);
    bufp->chgSData(oldp+16,(__VdtypeVar[16]),16);
    bufp->chgSData(oldp+17,(__VdtypeVar[17]),16);
    bufp->chgSData(oldp+18,(__VdtypeVar[18]),16);
    bufp->chgSData(oldp+19,(__VdtypeVar[19]),16);
    bufp->chgSData(oldp+20,(__VdtypeVar[20]),16);
    bufp->chgSData(oldp+21,(__VdtypeVar[21]),16);
    bufp->chgSData(oldp+22,(__VdtypeVar[22]),16);
    bufp->chgSData(oldp+23,(__VdtypeVar[23]),16);
    bufp->chgSData(oldp+24,(__VdtypeVar[24]),16);
    bufp->chgSData(oldp+25,(__VdtypeVar[25]),16);
    bufp->chgSData(oldp+26,(__VdtypeVar[26]),16);
    bufp->chgSData(oldp+27,(__VdtypeVar[27]),16);
    bufp->chgSData(oldp+28,(__VdtypeVar[28]),16);
    bufp->chgSData(oldp+29,(__VdtypeVar[29]),16);
    bufp->chgSData(oldp+30,(__VdtypeVar[30]),16);
    bufp->chgSData(oldp+31,(__VdtypeVar[31]),16);
}

void VHighRiscTb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_cleanup\n"); );
    // Body
    VHighRiscTb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VHighRiscTb___024root*>(voidSelf);
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
