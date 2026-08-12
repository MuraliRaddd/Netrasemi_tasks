// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VHighRiscTb__pch.h"

VHighRiscTb__Syms::VHighRiscTb__Syms(VerilatedContext* contextp, const char* namep, VHighRiscTb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(8633);
    // Setup sub module instances
    TOP__HighRiscTb__DOT__uut__DOT__Dbus.ctor(this, "HighRiscTb.uut.Dbus");
    TOP__HighRiscTb__DOT__uut__DOT__Ibus.ctor(this, "HighRiscTb.uut.Ibus");
    TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.ctor(this, "HighRiscTb.uut.iDataMemory.iRAM.altsyncram_component.m_default.altsyncram_inst.dev");
    TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.ctor(this, "HighRiscTb.uut.iDataMemory.iRAM.altsyncram_component.m_default.altsyncram_inst.mem");
    TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.ctor(this, "HighRiscTb.uut.iProgramMemory.iRom.altsyncram_component.m_default.altsyncram_inst.dev");
    TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.ctor(this, "HighRiscTb.uut.iProgramMemory.iRom.altsyncram_component.m_default.altsyncram_inst.mem");
    TOP__assertionmath.ctor(this, "assertionmath");
    TOP__std.ctor(this, "std");
    TOP__std__03a__03aprocess__Vclpkg.ctor(this, "std::process__Vclpkg");
    TOP__std__03a__03asemaphore__Vclpkg.ctor(this, "std::semaphore__Vclpkg");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-15);
    // Setup each module's pointers to their submodules
    TOP.__PVT__HighRiscTb__DOT__uut__DOT__Dbus = &TOP__HighRiscTb__DOT__uut__DOT__Dbus;
    TOP.__PVT__HighRiscTb__DOT__uut__DOT__Ibus = &TOP__HighRiscTb__DOT__uut__DOT__Ibus;
    TOP.__PVT__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev = &TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev;
    TOP.__PVT__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem = &TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem;
    TOP.__PVT__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev = &TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev;
    TOP.__PVT__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem = &TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem;
    TOP.__PVT__assertionmath = &TOP__assertionmath;
    TOP.__PVT__std = &TOP__std;
    TOP.std__03a__03aprocess__Vclpkg = &TOP__std__03a__03aprocess__Vclpkg;
    TOP.std__03a__03asemaphore__Vclpkg = &TOP__std__03a__03asemaphore__Vclpkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__HighRiscTb__DOT__uut__DOT__Dbus.__Vconfigure(true);
    TOP__HighRiscTb__DOT__uut__DOT__Ibus.__Vconfigure(false);
    TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__Vconfigure(true);
    TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__Vconfigure(true);
    TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__Vconfigure(false);
    TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__Vconfigure(false);
    TOP__assertionmath.__Vconfigure(true);
    TOP__std.__Vconfigure(true);
    TOP__std__03a__03aprocess__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03asemaphore__Vclpkg.__Vconfigure(true);
}

VHighRiscTb__Syms::~VHighRiscTb__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__std__03a__03asemaphore__Vclpkg.dtor();
    TOP__std__03a__03aprocess__Vclpkg.dtor();
    TOP__std.dtor();
    TOP__assertionmath.dtor();
    TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.dtor();
    TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.dtor();
    TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.dtor();
    TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.dtor();
    TOP__HighRiscTb__DOT__uut__DOT__Ibus.dtor();
    TOP__HighRiscTb__DOT__uut__DOT__Dbus.dtor();
}
