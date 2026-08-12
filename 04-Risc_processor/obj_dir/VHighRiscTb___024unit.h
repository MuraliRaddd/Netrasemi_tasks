// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VHighRiscTb.h for the primary calling header

#ifndef VERILATED_VHIGHRISCTB___024UNIT_H_
#define VERILATED_VHIGHRISCTB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VHighRiscTb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VHighRiscTb___024unit final {
  public:

    // INTERNAL VARIABLES
    VHighRiscTb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VHighRiscTb___024unit();
    ~VHighRiscTb___024unit();
    void ctor(VHighRiscTb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VHighRiscTb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
