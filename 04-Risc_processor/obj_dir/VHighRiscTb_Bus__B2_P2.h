// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VHighRiscTb.h for the primary calling header

#ifndef VERILATED_VHIGHRISCTB_BUS__B2_P2_H_
#define VERILATED_VHIGHRISCTB_BUS__B2_P2_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VHighRiscTb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VHighRiscTb_Bus__B2_P2 final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ __PVT__SlaveWriteEnable;
    CData/*1:0*/ __PVT__BlockInUse;
    CData/*4:0*/ __PVT__PortInUse;
    CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_45;
    SData/*15:0*/ Address;
    SData/*15:0*/ ReadData;
    SData/*15:0*/ __PVT__SlaveReadData0;
    SData/*15:0*/ __PVT__SlaveReadData1;
    SData/*15:0*/ __PVT__PortReadData0;
    SData/*15:0*/ __PVT__PortReadData1;
    QData/*32:0*/ __PVT__PortWriteEnable;
    VlUnpacked<SData/*15:0*/, 4> __PVT__SlaveReadData;
    VlUnpacked<SData/*15:0*/, 32> __PVT__PortReadData;

    // INTERNAL VARIABLES
    VHighRiscTb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VHighRiscTb_Bus__B2_P2();
    ~VHighRiscTb_Bus__B2_P2();
    void ctor(VHighRiscTb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VHighRiscTb_Bus__B2_P2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
