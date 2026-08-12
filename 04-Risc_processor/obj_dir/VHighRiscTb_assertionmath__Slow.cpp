// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHighRiscTb.h for the primary calling header

#include "VHighRiscTb__pch.h"

void VHighRiscTb_assertionmath___ctor_var_reset(VHighRiscTb_assertionmath* vlSelf);

VHighRiscTb_assertionmath::VHighRiscTb_assertionmath() = default;
VHighRiscTb_assertionmath::~VHighRiscTb_assertionmath() = default;

void VHighRiscTb_assertionmath::ctor(VHighRiscTb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    VHighRiscTb_assertionmath___ctor_var_reset(this);
}

void VHighRiscTb_assertionmath::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VHighRiscTb_assertionmath::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
