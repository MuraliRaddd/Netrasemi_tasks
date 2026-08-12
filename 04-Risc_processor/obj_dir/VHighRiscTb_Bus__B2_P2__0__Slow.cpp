// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHighRiscTb.h for the primary calling header

#include "VHighRiscTb__pch.h"

VL_ATTR_COLD void VHighRiscTb_Bus__B2_P2___stl_sequent__TOP__HighRiscTb__DOT__uut__DOT__Ibus__0(VHighRiscTb_Bus__B2_P2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VHighRiscTb_Bus__B2_P2___stl_sequent__TOP__HighRiscTb__DOT__uut__DOT__Ibus__0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SlaveReadData[0U] = vlSelfRef.__PVT__SlaveReadData0;
    vlSelfRef.__PVT__SlaveReadData[1U] = vlSelfRef.__PVT__SlaveReadData1;
    vlSelfRef.__PVT__PortReadData[0U] = vlSelfRef.__PVT__PortReadData0;
    vlSelfRef.__PVT__PortReadData[1U] = vlSelfRef.__PVT__PortReadData1;
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

VL_ATTR_COLD void VHighRiscTb_Bus__B2_P2___stl_sequent__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0(VHighRiscTb_Bus__B2_P2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VHighRiscTb_Bus__B2_P2___stl_sequent__TOP__HighRiscTb__DOT__uut__DOT__Dbus__0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SlaveReadData[0U] = vlSelfRef.__PVT__SlaveReadData0;
    vlSelfRef.__PVT__SlaveReadData[1U] = vlSelfRef.__PVT__SlaveReadData1;
    vlSelfRef.__PVT__PortReadData[0U] = vlSelfRef.__PVT__PortReadData0;
    vlSelfRef.__PVT__PortReadData[1U] = vlSelfRef.__PVT__PortReadData1;
}

VL_ATTR_COLD void VHighRiscTb_Bus__B2_P2___ctor_var_reset(VHighRiscTb_Bus__B2_P2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VHighRiscTb_Bus__B2_P2___ctor_var_reset\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->Address = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 224589347255615128ull);
    vlSelf->ReadData = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8259542740087719551ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__SlaveReadData[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3114366133812400802ull);
    }
    vlSelf->__PVT__SlaveReadData0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8874514192215088368ull);
    vlSelf->__PVT__SlaveReadData1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9959525468525140475ull);
    vlSelf->__PVT__SlaveWriteEnable = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16282714229521063496ull);
    vlSelf->__PVT__BlockInUse = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 472813977484191275ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__PortReadData[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15964772816217023232ull);
    }
    vlSelf->__PVT__PortReadData0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17592359766657480795ull);
    vlSelf->__PVT__PortReadData1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7436875308007036332ull);
    vlSelf->__PVT__PortWriteEnable = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 10519715583493740368ull);
    vlSelf->__PVT__PortInUse = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6078897135763494071ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_45 = 0;
}
