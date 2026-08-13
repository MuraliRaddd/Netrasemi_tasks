// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHighRiscTb.h for the primary calling header

#include "VHighRiscTb__pch.h"

VL_ATTR_COLD void VHighRiscTb_assertionmath___ctor_var_reset(VHighRiscTb_assertionmath* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VHighRiscTb_assertionmath___ctor_var_reset\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->temp_carry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14076213890511053491ull);
    vlSelf->parity_sum = 0;
    vlSelf->__PVT__nInSrc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14918315680395725696ull);
    vlSelf->__PVT__full_product = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2741770256411028963ull);
    vlSelf->expFlags.__PVT__out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9506088466911978335ull);
    vlSelf->expFlags.__PVT__Overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9506088466911978335ull);
    vlSelf->expFlags.__PVT__Parity = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9506088466911978335ull);
    vlSelf->expFlags.__PVT__Negative = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9506088466911978335ull);
    vlSelf->expFlags.__PVT__Zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9506088466911978335ull);
    vlSelf->expFlags.__PVT__Carry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9506088466911978335ull);
}
