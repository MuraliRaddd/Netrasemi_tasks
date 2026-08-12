// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHighRiscTb.h for the primary calling header

#include "VHighRiscTb__pch.h"

void VHighRiscTb_Bus__B2_P2___ctor_var_reset(VHighRiscTb_Bus__B2_P2* vlSelf);

VHighRiscTb_Bus__B2_P2::VHighRiscTb_Bus__B2_P2() = default;
VHighRiscTb_Bus__B2_P2::~VHighRiscTb_Bus__B2_P2() = default;

void VHighRiscTb_Bus__B2_P2::ctor(VHighRiscTb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    VHighRiscTb_Bus__B2_P2___ctor_var_reset(this);
}

void VHighRiscTb_Bus__B2_P2::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VHighRiscTb_Bus__B2_P2::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
