// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHighRiscTb.h for the primary calling header

#include "VHighRiscTb__pch.h"


VHighRiscTb_std__03a__03aprocess__Vclpkg::VHighRiscTb_std__03a__03aprocess__Vclpkg() = default;
VHighRiscTb_std__03a__03aprocess__Vclpkg::~VHighRiscTb_std__03a__03aprocess__Vclpkg() = default;

void VHighRiscTb_std__03a__03aprocess__Vclpkg::ctor(VHighRiscTb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void VHighRiscTb_std__03a__03aprocess__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VHighRiscTb_std__03a__03aprocess__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
