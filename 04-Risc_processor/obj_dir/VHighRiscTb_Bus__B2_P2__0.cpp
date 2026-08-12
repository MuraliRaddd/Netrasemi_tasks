// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHighRiscTb.h for the primary calling header

#include "VHighRiscTb__pch.h"

void VHighRiscTb_Bus__B2_P2___eval_initial__TOP__HighRiscTb__DOT__uut__DOT__Ibus(VHighRiscTb_Bus__B2_P2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VHighRiscTb_Bus__B2_P2___eval_initial__TOP__HighRiscTb__DOT__uut__DOT__Ibus\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SlaveReadData[2U] = 0U;
    vlSelfRef.__PVT__PortReadData[2U] = 0U;
    vlSelfRef.__PVT__PortReadData[3U] = 0U;
    vlSelfRef.__PVT__PortReadData[4U] = 0U;
    vlSelfRef.__PVT__PortReadData[5U] = 0U;
    vlSelfRef.__PVT__PortReadData[6U] = 0U;
    vlSelfRef.__PVT__PortReadData[7U] = 0U;
    vlSelfRef.__PVT__PortReadData[8U] = 0U;
    vlSelfRef.__PVT__PortReadData[9U] = 0U;
    vlSelfRef.__PVT__PortReadData[10U] = 0U;
    vlSelfRef.__PVT__PortReadData[11U] = 0U;
    vlSelfRef.__PVT__PortReadData[12U] = 0U;
    vlSelfRef.__PVT__PortReadData[13U] = 0U;
    vlSelfRef.__PVT__PortReadData[14U] = 0U;
    vlSelfRef.__PVT__PortReadData[15U] = 0U;
    vlSelfRef.__PVT__PortReadData[16U] = 0U;
    vlSelfRef.__PVT__PortReadData[17U] = 0U;
    vlSelfRef.__PVT__PortReadData[18U] = 0U;
    vlSelfRef.__PVT__PortReadData[19U] = 0U;
    vlSelfRef.__PVT__PortReadData[20U] = 0U;
    vlSelfRef.__PVT__PortReadData[21U] = 0U;
    vlSelfRef.__PVT__PortReadData[22U] = 0U;
    vlSelfRef.__PVT__PortReadData[23U] = 0U;
    vlSelfRef.__PVT__PortReadData[24U] = 0U;
    vlSelfRef.__PVT__PortReadData[25U] = 0U;
    vlSelfRef.__PVT__PortReadData[26U] = 0U;
    vlSelfRef.__PVT__PortReadData[27U] = 0U;
    vlSelfRef.__PVT__PortReadData[28U] = 0U;
    vlSelfRef.__PVT__PortReadData[29U] = 0U;
    vlSelfRef.__PVT__PortReadData[30U] = 0U;
    vlSelfRef.__PVT__PortReadData[31U] = 0U;
}

void VHighRiscTb_Bus__B2_P2___nba_sequent__TOP__HighRiscTb__DOT__uut__DOT__Ibus__0(VHighRiscTb_Bus__B2_P2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VHighRiscTb_Bus__B2_P2___nba_sequent__TOP__HighRiscTb__DOT__uut__DOT__Ibus__0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__PortInUse = (0x0000001fU & ((IData)(vlSymsp->TOP.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress) 
                                                 >> 9U));
    vlSelfRef.__PVT__PortWriteEnable = 0ULL;
    vlSelfRef.__PVT__PortWriteEnable = ((~ (1ULL << (IData)(vlSelfRef.__PVT__PortInUse))) 
                                        & vlSelfRef.__PVT__PortWriteEnable);
    vlSelfRef.__PVT__SlaveReadData[3U] = vlSelfRef.__PVT__PortReadData
        [vlSelfRef.__PVT__PortInUse];
    vlSelfRef.__PVT__BlockInUse = (3U & ((IData)(vlSymsp->TOP.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress) 
                                         >> 0x0eU));
    vlSelfRef.ReadData = vlSelfRef.__PVT__SlaveReadData
        [vlSelfRef.__PVT__BlockInUse];
    vlSelfRef.__PVT__SlaveWriteEnable = 0U;
    vlSelfRef.__PVT__SlaveWriteEnable = ((~ ((IData)(1U) 
                                             << (IData)(vlSelfRef.__PVT__BlockInUse))) 
                                         & (IData)(vlSelfRef.__PVT__SlaveWriteEnable));
}

void VHighRiscTb_Bus__B2_P2___nba_comb__TOP__HighRiscTb__DOT__uut__DOT__Ibus__0(VHighRiscTb_Bus__B2_P2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VHighRiscTb_Bus__B2_P2___nba_comb__TOP__HighRiscTb__DOT__uut__DOT__Ibus__0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45 = ((0x00001000U 
                                                  & (IData)(vlSelfRef.ReadData))
                                                  ? 
                                                 ((((4U 
                                                     & ((((~ 
                                                           (((IData)(vlSymsp->TOP.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest) 
                                                             >> 0x0000000fU) 
                                                            | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_5))) 
                                                          & ((IData)(vlSymsp->TOP.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc) 
                                                             >> 0x0000000fU)) 
                                                         | (((IData)(vlSymsp->TOP.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest) 
                                                             >> 0x0000000fU) 
                                                            & ((~ 
                                                                ((IData)(vlSymsp->TOP.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc) 
                                                                 >> 0x0000000fU)) 
                                                               & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_5)))) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & ((IData)(vlSymsp->TOP.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags) 
                                                           >> 2U)) 
                                                       | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_5))) 
                                                   << 2U) 
                                                  | (((0U 
                                                       == 
                                                       VL_EXTENDS_II(32,16, (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_49))) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_43) 
                                                            & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_2) 
                                                               >> 0x0000000fU)) 
                                                           | ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1) 
                                                              >> 0x0000000fU)))))
                                                  : 
                                                 ((((4U 
                                                     & ((((~ 
                                                           ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_12) 
                                                            >> 0x0000000fU)) 
                                                          & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_6)) 
                                                         | ((~ (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_6)) 
                                                            & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_0) 
                                                               >> 0x0000000fU))) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & ((IData)(vlSymsp->TOP.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags) 
                                                           >> 2U)) 
                                                       | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_6))) 
                                                   << 2U) 
                                                  | (((0U 
                                                       == 
                                                       VL_EXTENDS_II(32,16, (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_48))) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27) 
                                                            & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3) 
                                                               >> 0x0000000fU)) 
                                                           | ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_0) 
                                                              >> 0x0000000fU))))));
}

void VHighRiscTb_Bus__B2_P2___nba_comb__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0(VHighRiscTb_Bus__B2_P2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VHighRiscTb_Bus__B2_P2___nba_comb__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Address = ((1U == (0x0000000fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                                >> 0x0000000cU)))
                          ? (IData)(vlSymsp->TOP.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc)
                          : (IData)(vlSymsp->TOP.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest));
    vlSelfRef.__PVT__PortInUse = (0x0000001fU & ((IData)(vlSelfRef.Address) 
                                                 >> 9U));
    vlSelfRef.__PVT__PortWriteEnable = 0ULL;
    vlSelfRef.__PVT__PortWriteEnable = (((~ (1ULL << (IData)(vlSelfRef.__PVT__PortInUse))) 
                                         & vlSelfRef.__PVT__PortWriteEnable) 
                                        | (0x00000001ffffffffULL 
                                           & ((QData)((IData)((IData)(
                                                                      ((0x2000U 
                                                                        == 
                                                                        (0xf000U 
                                                                         & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))) 
                                                                       & (0xc000U 
                                                                          == 
                                                                          (0xc000U 
                                                                           & (IData)(vlSelfRef.Address))))))) 
                                              << (IData)(vlSelfRef.__PVT__PortInUse))));
    vlSelfRef.__PVT__SlaveReadData[3U] = vlSelfRef.__PVT__PortReadData
        [vlSelfRef.__PVT__PortInUse];
    vlSelfRef.__PVT__BlockInUse = (3U & ((IData)(vlSelfRef.Address) 
                                         >> 0x0eU));
    vlSelfRef.ReadData = vlSelfRef.__PVT__SlaveReadData
        [vlSelfRef.__PVT__BlockInUse];
    vlSelfRef.__PVT__SlaveWriteEnable = 0U;
    vlSelfRef.__PVT__SlaveWriteEnable = (((~ ((IData)(1U) 
                                              << (IData)(vlSelfRef.__PVT__BlockInUse))) 
                                          & (IData)(vlSelfRef.__PVT__SlaveWriteEnable)) 
                                         | (0x0fU & 
                                            ((2U == 
                                              (0x0000000fU 
                                               & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                                  >> 0x0000000cU))) 
                                             << (IData)(vlSelfRef.__PVT__BlockInUse))));
}
