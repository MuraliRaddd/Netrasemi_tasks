// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHighRiscTb.h for the primary calling header

#include "VHighRiscTb__pch.h"


VHighRiscTb_ALTERA_MF_MEMORY_INITIALIZATION::VHighRiscTb_ALTERA_MF_MEMORY_INITIALIZATION() = default;
VHighRiscTb_ALTERA_MF_MEMORY_INITIALIZATION::~VHighRiscTb_ALTERA_MF_MEMORY_INITIALIZATION() = default;

void VHighRiscTb_ALTERA_MF_MEMORY_INITIALIZATION::ctor(VHighRiscTb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void VHighRiscTb_ALTERA_MF_MEMORY_INITIALIZATION::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VHighRiscTb_ALTERA_MF_MEMORY_INITIALIZATION::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
