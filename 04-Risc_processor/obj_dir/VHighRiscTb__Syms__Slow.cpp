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
    Verilated::stackCheck(882);
    // Setup sub module instances
    TOP__HighRiscTb__DOT__uut__DOT__Dbus.ctor(this, "HighRiscTb.uut.Dbus");
    TOP__HighRiscTb__DOT__uut__DOT__Ibus.ctor(this, "HighRiscTb.uut.Ibus");
    TOP____024unit.ctor(this, "$unit");
    TOP__assertionmath.ctor(this, "assertionmath");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__HighRiscTb__DOT__uut__DOT__Dbus = &TOP__HighRiscTb__DOT__uut__DOT__Dbus;
    TOP.__PVT__HighRiscTb__DOT__uut__DOT__Ibus = &TOP__HighRiscTb__DOT__uut__DOT__Ibus;
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.__PVT__assertionmath = &TOP__assertionmath;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__HighRiscTb__DOT__uut__DOT__Dbus.__Vconfigure(true);
    TOP__HighRiscTb__DOT__uut__DOT__Ibus.__Vconfigure(false);
    TOP____024unit.__Vconfigure(true);
    TOP__assertionmath.__Vconfigure(true);
}

VHighRiscTb__Syms::~VHighRiscTb__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__assertionmath.dtor();
    TOP____024unit.dtor();
    TOP__HighRiscTb__DOT__uut__DOT__Ibus.dtor();
    TOP__HighRiscTb__DOT__uut__DOT__Dbus.dtor();
}
