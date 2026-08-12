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
#include "VHighRiscTb_std.h"
#include "VHighRiscTb_assertionmath.h"
#include "VHighRiscTb_Bus__B2_P2.h"
#include "VHighRiscTb_ALTERA_MF_MEMORY_INITIALIZATION.h"
#include "VHighRiscTb_ALTERA_DEVICE_FAMILIES.h"
#include "VHighRiscTb_std__03a__03asemaphore__Vclpkg.h"
#include "VHighRiscTb_std__03a__03aprocess__Vclpkg.h"

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
    VHighRiscTb_ALTERA_DEVICE_FAMILIES TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev;
    VHighRiscTb_ALTERA_MF_MEMORY_INITIALIZATION TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem;
    VHighRiscTb_ALTERA_DEVICE_FAMILIES TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev;
    VHighRiscTb_ALTERA_MF_MEMORY_INITIALIZATION TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem;
    VHighRiscTb_assertionmath      TOP__assertionmath;
    VHighRiscTb_std                TOP__std;
    VHighRiscTb_std__03a__03aprocess__Vclpkg TOP__std__03a__03aprocess__Vclpkg;
    VHighRiscTb_std__03a__03asemaphore__Vclpkg TOP__std__03a__03asemaphore__Vclpkg;

    // CONSTRUCTORS
    VHighRiscTb__Syms(VerilatedContext* contextp, const char* namep, VHighRiscTb* modelp);
    ~VHighRiscTb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
