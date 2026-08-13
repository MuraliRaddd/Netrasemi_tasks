// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHighRiscTb.h for the primary calling header

#include "VHighRiscTb__pch.h"

VL_ATTR_COLD void VHighRiscTb_ALTERA_DEVICE_FAMILIES___eval_static__TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev(VHighRiscTb_ALTERA_DEVICE_FAMILIES* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VHighRiscTb_ALTERA_DEVICE_FAMILIES___eval_static__TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelfRef.__PVT__IS_FAMILY_ARRIA10__Vstatic__is_arria10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2833340700754576157ull);
    vlSelfRef.__PVT__IS_FAMILY_ARRIAGX__Vstatic__is_arriagx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6970868735939518051ull);
    vlSelfRef.__PVT__IS_FAMILY_ARRIAIIGX__Vstatic__is_arriaiigx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1025809894878036409ull);
    vlSelfRef.__PVT__IS_FAMILY_ARRIAIIGZ__Vstatic__is_arriaiigz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6540970712581288632ull);
    vlSelfRef.__PVT__IS_FAMILY_ARRIAVGZ__Vstatic__is_arriavgz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2528235188361129496ull);
    vlSelfRef.__PVT__IS_FAMILY_ARRIAV__Vstatic__is_arriav = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8312754320032230206ull);
    vlSelfRef.__PVT__IS_FAMILY_CYCLONE10LP__Vstatic__is_cyclone10lp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16302736669255876232ull);
    vlSelfRef.__PVT__IS_FAMILY_CYCLONEII__Vstatic__is_cycloneii = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4890264525800382359ull);
    vlSelfRef.__PVT__IS_FAMILY_CYCLONEIIILS__Vstatic__is_cycloneiiils = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2669101296491043443ull);
    vlSelfRef.__PVT__IS_FAMILY_CYCLONEIII__Vstatic__is_cycloneiii = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1021785303461277996ull);
    vlSelfRef.__PVT__IS_FAMILY_CYCLONEIVE__Vstatic__is_cycloneive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7986424702832048517ull);
    vlSelfRef.__PVT__IS_FAMILY_CYCLONEIVGX__Vstatic__is_cycloneivgx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3370553518777799430ull);
    vlSelfRef.__PVT__IS_FAMILY_CYCLONEV__Vstatic__is_cyclonev = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17136207332933208540ull);
    vlSelfRef.__PVT__IS_FAMILY_CYCLONE__Vstatic__is_cyclone = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15228686980163505421ull);
    vlSelfRef.__PVT__IS_FAMILY_HARDCOPYII__Vstatic__is_hardcopyii = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8639517918597626222ull);
    vlSelfRef.__PVT__IS_FAMILY_HARDCOPYIII__Vstatic__is_hardcopyiii = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8034833988827300225ull);
    vlSelfRef.__PVT__IS_FAMILY_HARDCOPYIV__Vstatic__is_hardcopyiv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3139690380868861005ull);
    vlSelfRef.__PVT__IS_FAMILY_MAX10__Vstatic__is_max10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7720366126160375386ull);
    vlSelfRef.__PVT__IS_FAMILY_MAXII__Vstatic__is_maxii = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11468630076898788423ull);
    vlSelfRef.__PVT__IS_FAMILY_MAXV__Vstatic__is_maxv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5464474292374210565ull);
    vlSelfRef.__PVT__IS_FAMILY_STRATIX10__Vstatic__is_stratix10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4193028507642225814ull);
    vlSelfRef.__PVT__IS_FAMILY_STRATIXGX__Vstatic__is_stratixgx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8243532398469199889ull);
    vlSelfRef.__PVT__IS_FAMILY_STRATIXIIGX__Vstatic__is_stratixiigx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13227590935369979554ull);
    vlSelfRef.__PVT__IS_FAMILY_STRATIXII__Vstatic__is_stratixii = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6715302467621996340ull);
    vlSelfRef.__PVT__IS_FAMILY_STRATIXIII__Vstatic__is_stratixiii = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13515023509138657437ull);
    vlSelfRef.__PVT__IS_FAMILY_STRATIXIV__Vstatic__is_stratixiv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17840725340883770791ull);
    vlSelfRef.__PVT__IS_FAMILY_STRATIXV__Vstatic__is_stratixv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14976581868279237743ull);
    vlSelfRef.__PVT__IS_FAMILY_STRATIX__Vstatic__is_stratix = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15786857601916922515ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_STRATIXGX__Vstatic__var_family_stratixgx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9795356526424687027ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_CYCLONE__Vstatic__var_family_cyclone = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 522042504744819128ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_STRATIXIIGX__Vstatic__var_family_stratixiigx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15809695309009616514ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_STRATIXIII__Vstatic__var_family_stratixiii = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2156630122920418977ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_ARRIAVGZ__Vstatic__var_family_arriavgz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 465210768378479995ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_STRATIXV__Vstatic__var_family_stratixv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18339152500093239017ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_ARRIA10__Vstatic__var_family_arria10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5040777144117470521ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_CYCLONE10LP__Vstatic__var_family_cyclone10lp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4887982995497487962ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_STRATIXII__Vstatic__var_family_stratixii = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2082834269461937452ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_CYCLONEIVGX__Vstatic__var_family_cycloneivgx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 918427782635652947ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_CYCLONEIVE__Vstatic__var_family_cycloneive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13592669918927599398ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_CYCLONEIII__Vstatic__var_family_cycloneiii = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13654584683536358911ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_STRATIX_HC__Vstatic__var_family_stratix_hc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12957193266753157984ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_STRATIX__Vstatic__var_family_stratix = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3109772915570205438ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_MAXII__Vstatic__var_family_maxii = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3479801624073875011ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_MAXV__Vstatic__var_family_maxv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 215929981997953469ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_CYCLONEII__Vstatic__var_family_cycloneii = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10910553622729699535ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_STRATIXIV__Vstatic__var_family_stratixiv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8770726842939620ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_ARRIAIIGZ__Vstatic__var_family_arriaiigz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7667903759973193352ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_ARRIAIIGX__Vstatic__var_family_arriaiigx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5298285307132531845ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_HARDCOPYIII__Vstatic__var_family_hardcopyiii = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17933570667854355830ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_HARDCOPYIV__Vstatic__var_family_hardcopyiv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 813428545759437316ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_CYCLONEV__Vstatic__var_family_cyclonev = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10178702688047688620ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_ARRIAV__Vstatic__var_family_arriav = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3112071725671828481ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_MAX10__Vstatic__var_family_max10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6354928051350798971ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_STRATIX10__Vstatic__var_family_stratix10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11354873908856704361ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_BASE_STRATIXII__Vstatic__var_family_base_stratixii = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3975457705801236000ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_BASE_STRATIX__Vstatic__var_family_base_stratix = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15058467942941849393ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_BASE_CYCLONEII__Vstatic__var_family_base_cycloneii = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18335057491603708058ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_BASE_CYCLONE__Vstatic__var_family_base_cyclone = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10487116410073341612ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_HAS_ALTERA_MULT_ADD_FLOW__Vstatic__var_family_has_altera_mult_add_flow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10004571823645930426ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_IS_ALTMULT_ADD_EOL__Vstatic__var_family_is_altmult_add_eol = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15171236026666009645ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_HAS_STRATIXII_STYLE_RAM__Vstatic__var_family_has_stratixii_style_ram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7079932313101467427ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_HAS_STRATIXIII_STYLE_RAM__Vstatic__var_family_has_stratixiii_style_ram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9750322452575088016ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_HAS_STRATIX_STYLE_PLL__Vstatic__var_family_has_stratix_style_pll = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4790861468760646555ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_HAS_STRATIXII_STYLE_PLL__Vstatic__var_family_has_stratixii_style_pll = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13731747897670143504ull);
    vlSelfRef.__PVT__FEATURE_FAMILY_HAS_INVERTED_OUTPUT_DDIO__Vstatic__var_family_has_inverted_output_ddio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8149274069946942791ull);
    vlSelfRef.__PVT__IS_VALID_FAMILY__Vstatic__is_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9696157506232981319ull);
}
