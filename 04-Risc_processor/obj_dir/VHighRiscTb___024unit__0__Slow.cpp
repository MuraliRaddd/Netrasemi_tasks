// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHighRiscTb.h for the primary calling header

#include "VHighRiscTb__pch.h"

VL_ATTR_COLD void VHighRiscTb___024unit___ctor_var_reset(VHighRiscTb___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VHighRiscTb___024unit___ctor_var_reset\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    for (int __Vi = 0; __Vi < 16; ++__Vi) {
        vlSelf->__Venumtab_enum_valid15[__Vi] = 0U;
    }
    vlSelf->__Venumtab_enum_valid15[0] = 1U;
    vlSelf->__Venumtab_enum_valid15[1] = 1U;
    vlSelf->__Venumtab_enum_valid15[2] = 1U;
    vlSelf->__Venumtab_enum_valid15[3] = 1U;
    vlSelf->__Venumtab_enum_valid15[4] = 1U;
    vlSelf->__Venumtab_enum_valid15[5] = 1U;
    vlSelf->__Venumtab_enum_valid15[6] = 1U;
    vlSelf->__Venumtab_enum_valid15[7] = 1U;
    vlSelf->__Venumtab_enum_valid15[8] = 1U;
    vlSelf->__Venumtab_enum_valid15[9] = 1U;
    vlSelf->__Venumtab_enum_valid15[10] = 1U;
    vlSelf->__Venumtab_enum_valid15[11] = 1U;
    vlSelf->__Venumtab_enum_valid15[12] = 1U;
    vlSelf->__Venumtab_enum_valid15[13] = 1U;
    vlSelf->__Venumtab_enum_valid15[14] = 1U;
    vlSelf->__Venumtab_enum_valid15[15] = 1U;
    for (int __Vi = 0; __Vi < 16; ++__Vi) {
        vlSelf->__Venumtab_enum_name15[__Vi] = ""s;
    }
    vlSelf->__Venumtab_enum_name15[0] = "JR"s;
    vlSelf->__Venumtab_enum_name15[1] = "LOAD"s;
    vlSelf->__Venumtab_enum_name15[2] = "STORE"s;
    vlSelf->__Venumtab_enum_name15[3] = "MOVE"s;
    vlSelf->__Venumtab_enum_name15[4] = "NAND"s;
    vlSelf->__Venumtab_enum_name15[5] = "NOR"s;
    vlSelf->__Venumtab_enum_name15[6] = "ROL"s;
    vlSelf->__Venumtab_enum_name15[7] = "ROR"s;
    vlSelf->__Venumtab_enum_name15[8] = "LIL"s;
    vlSelf->__Venumtab_enum_name15[9] = "LIU"s;
    vlSelf->__Venumtab_enum_name15[10] = "ADC"s;
    vlSelf->__Venumtab_enum_name15[11] = "SUB"s;
    vlSelf->__Venumtab_enum_name15[12] = "DIV"s;
    vlSelf->__Venumtab_enum_name15[13] = "MOD"s;
    vlSelf->__Venumtab_enum_name15[14] = "MUL"s;
    vlSelf->__Venumtab_enum_name15[15] = "MUH"s;
    vlSelf->__VmonitorNum = 0;
    vlSelf->__VmonitorOff = 0;
}
