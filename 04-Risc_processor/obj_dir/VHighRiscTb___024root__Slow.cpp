// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHighRiscTb.h for the primary calling header

#include "VHighRiscTb__pch.h"

void VHighRiscTb___024root___ctor_var_reset(VHighRiscTb___024root* vlSelf);

VHighRiscTb___024root::VHighRiscTb___024root(VHighRiscTb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VHighRiscTb___024root___ctor_var_reset(this);
}

void VHighRiscTb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VHighRiscTb___024root::~VHighRiscTb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
