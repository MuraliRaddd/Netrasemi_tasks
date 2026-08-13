// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VHIGHRISCTB__SYMS_H_
#define VERILATED_VHIGHRISCTB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VHighRiscTb.h"

// INCLUDE MODULE CLASSES
#include "VHighRiscTb___024root.h"
#include "VHighRiscTb___024unit.h"
#include "VHighRiscTb_assertionmath.h"
#include "VHighRiscTb_Bus__B2_P2.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VHighRiscTb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VHighRiscTb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VHighRiscTb___024root          TOP;
    VHighRiscTb_Bus__B2_P2         TOP__HighRiscTb__DOT__uut__DOT__Dbus;
    VHighRiscTb_Bus__B2_P2         TOP__HighRiscTb__DOT__uut__DOT__Ibus;
    VHighRiscTb___024unit          TOP____024unit;
    VHighRiscTb_assertionmath      TOP__assertionmath;

    // CONSTRUCTORS
    VHighRiscTb__Syms(VerilatedContext* contextp, const char* namep, VHighRiscTb* modelp);
    ~VHighRiscTb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
