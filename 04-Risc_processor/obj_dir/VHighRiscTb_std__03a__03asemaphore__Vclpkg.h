// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VHighRiscTb.h for the primary calling header

#ifndef VERILATED_VHIGHRISCTB_STD__03A__03ASEMAPHORE__VCLPKG_H_
#define VERILATED_VHIGHRISCTB_STD__03A__03ASEMAPHORE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VHighRiscTb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VHighRiscTb_std__03a__03asemaphore__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VHighRiscTb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VHighRiscTb_std__03a__03asemaphore__Vclpkg();
    ~VHighRiscTb_std__03a__03asemaphore__Vclpkg();
    void ctor(VHighRiscTb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VHighRiscTb_std__03a__03asemaphore__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VHighRiscTb__Syms;

class VHighRiscTb_std__03a__03asemaphore : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_keyCount;
    IData/*31:0*/ __PVT__m_nextKeyCount;
    QData/*63:0*/ __PVT__m_ticket;
    QData/*63:0*/ __PVT__m_nextTicket;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::semaphore"; }
    VlClass* clone() const { return new VHighRiscTb_std__03a__03asemaphore(*this); }
    VlCoroutine __VnoInFunc_get(VHighRiscTb__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_put(VHighRiscTb__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_try_get(VHighRiscTb__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount, IData/*31:0*/ &try_get__Vfuncrtn);
  private:
    void _ctor_var_reset(VHighRiscTb__Syms* __restrict vlSymsp);
  public:
    VHighRiscTb_std__03a__03asemaphore() = default;
    void init(VHighRiscTb__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    ~VHighRiscTb_std__03a__03asemaphore() {}
};


#endif  // guard
