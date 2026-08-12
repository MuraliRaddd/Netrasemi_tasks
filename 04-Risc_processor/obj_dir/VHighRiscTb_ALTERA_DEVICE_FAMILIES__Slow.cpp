// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHighRiscTb.h for the primary calling header

#include "VHighRiscTb__pch.h"


VHighRiscTb_ALTERA_DEVICE_FAMILIES::VHighRiscTb_ALTERA_DEVICE_FAMILIES() = default;
VHighRiscTb_ALTERA_DEVICE_FAMILIES::~VHighRiscTb_ALTERA_DEVICE_FAMILIES() = default;

void VHighRiscTb_ALTERA_DEVICE_FAMILIES::ctor(VHighRiscTb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void VHighRiscTb_ALTERA_DEVICE_FAMILIES::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VHighRiscTb_ALTERA_DEVICE_FAMILIES::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
