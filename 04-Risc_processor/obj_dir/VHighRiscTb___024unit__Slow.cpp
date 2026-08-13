// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHighRiscTb.h for the primary calling header

#include "VHighRiscTb__pch.h"
VlUnpacked<CData/*0:0*/, 16> VHighRiscTb___024unit::__Venumtab_enum_valid15;
VlUnpacked<std::string, 16> VHighRiscTb___024unit::__Venumtab_enum_name15;

void VHighRiscTb___024unit___ctor_var_reset(VHighRiscTb___024unit* vlSelf);

VHighRiscTb___024unit::VHighRiscTb___024unit() = default;
VHighRiscTb___024unit::~VHighRiscTb___024unit() = default;

void VHighRiscTb___024unit::ctor(VHighRiscTb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    VHighRiscTb___024unit___ctor_var_reset(this);
}

void VHighRiscTb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VHighRiscTb___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
