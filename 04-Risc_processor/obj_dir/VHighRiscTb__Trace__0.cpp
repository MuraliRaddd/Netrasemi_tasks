// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VHighRiscTb__Syms.h"


void VHighRiscTb___024root__trace_chg_0_sub_0(VHighRiscTb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VHighRiscTb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_chg_0\n"); );
    // Body
    VHighRiscTb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VHighRiscTb___024root*>(voidSelf);
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VHighRiscTb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VHighRiscTb___024root__trace_chg_dtype____0(VHighRiscTb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar);
void VHighRiscTb___024root__trace_chg_dtype____1(VHighRiscTb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar);

void VHighRiscTb___024root__trace_chg_0_sub_0(VHighRiscTb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_chg_0_sub_0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__pointer),32);
        bufp->chgIData(oldp+1,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__pointer_max),32);
        bufp->chgIData(oldp+2,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__pointer_min),32);
        bufp->chgIData(oldp+3,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__flag_err),32);
        bufp->chgIData(oldp+4,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__flag),32);
        bufp->chgIData(oldp+5,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__flag_double),32);
        bufp->chgIData(oldp+6,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__flag_triple),32);
        bufp->chgIData(oldp+7,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__flag_single),32);
        bufp->chgIData(oldp+8,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__flag_no_err),32);
        bufp->chgIData(oldp+9,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__flag_uncorr),32);
        bufp->chgIData(oldp+10,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__n),32);
        bufp->chgIData(oldp+11,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__err),32);
        bufp->chgIData(oldp+12,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__found),32);
        bufp->chgIData(oldp+13,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__found_2),32);
        bufp->chgIData(oldp+14,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_mif2ver__Vstatic__r2),32);
        bufp->chgIData(oldp+15,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_mif2ver__Vstatic__j),32);
        bufp->chgIData(oldp+16,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_mif2ver__Vstatic__k),32);
        bufp->chgIData(oldp+17,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_mif2ver__Vstatic__m),32);
        bufp->chgIData(oldp+18,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_mif2ver__Vstatic__n),32);
        bufp->chgCData(oldp+19,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__c),8);
        bufp->chgCData(oldp+20,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__hex),4);
        bufp->chgCData(oldp+21,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_hex2ver__Vstatic__tmp_char),4);
        bufp->chgBit(oldp+22,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__done));
        bufp->chgBit(oldp+23,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__error_status));
        bufp->chgBit(oldp+24,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__first_rec));
        bufp->chgBit(oldp+25,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__last_rec));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__first_normal_record));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__is_word_address_format));
        bufp->chgIData(oldp+28,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__ifp),32);
        bufp->chgIData(oldp+29,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__ofp),32);
        bufp->chgIData(oldp+30,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__r),32);
        bufp->chgIData(oldp+31,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_hex2ver__Vstatic__r2),32);
        bufp->chgIData(oldp+32,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__i),32);
        bufp->chgIData(oldp+33,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__j),32);
        bufp->chgIData(oldp+34,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__k),32);
        bufp->chgIData(oldp+35,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__m),32);
        bufp->chgIData(oldp+36,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_hex2ver__Vstatic__n),32);
        bufp->chgIData(oldp+37,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__off_addr),32);
        bufp->chgIData(oldp+38,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__nn),32);
        bufp->chgIData(oldp+39,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__aaaa),32);
        bufp->chgIData(oldp+40,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__aaaa_pre),32);
        bufp->chgIData(oldp+41,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__tt),32);
        bufp->chgIData(oldp+42,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__cc),32);
        bufp->chgIData(oldp+43,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__aah),32);
        bufp->chgIData(oldp+44,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__aal),32);
        bufp->chgIData(oldp+45,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__dd),32);
        bufp->chgIData(oldp+46,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__sum),32);
        bufp->chgIData(oldp+47,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__line_no),32);
        bufp->chgIData(oldp+48,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__divide_factor),32);
        bufp->chgIData(oldp+49,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__pointer),32);
        bufp->chgIData(oldp+50,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__pointer_max),32);
        bufp->chgIData(oldp+51,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__pointer_min),32);
        bufp->chgIData(oldp+52,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__flag_err),32);
        bufp->chgIData(oldp+53,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__flag),32);
        bufp->chgIData(oldp+54,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__flag_double),32);
        bufp->chgIData(oldp+55,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__flag_triple),32);
        bufp->chgIData(oldp+56,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__flag_single),32);
        bufp->chgIData(oldp+57,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__flag_no_err),32);
        bufp->chgIData(oldp+58,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__flag_uncorr),32);
        bufp->chgIData(oldp+59,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__n),32);
        bufp->chgIData(oldp+60,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__err),32);
        bufp->chgIData(oldp+61,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__found),32);
        bufp->chgIData(oldp+62,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__ecc_parity__Vstatic__found_2),32);
        bufp->chgIData(oldp+63,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_mif2ver__Vstatic__r2),32);
        bufp->chgIData(oldp+64,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_mif2ver__Vstatic__j),32);
        bufp->chgIData(oldp+65,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_mif2ver__Vstatic__k),32);
        bufp->chgIData(oldp+66,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_mif2ver__Vstatic__m),32);
        bufp->chgIData(oldp+67,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_mif2ver__Vstatic__n),32);
        bufp->chgCData(oldp+68,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__c),8);
        bufp->chgCData(oldp+69,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__hex),4);
        bufp->chgCData(oldp+70,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_hex2ver__Vstatic__tmp_char),4);
        bufp->chgBit(oldp+71,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__done));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__error_status));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__first_rec));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__last_rec));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__first_normal_record));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__is_word_address_format));
        bufp->chgIData(oldp+77,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__ifp),32);
        bufp->chgIData(oldp+78,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__ofp),32);
        bufp->chgIData(oldp+79,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__r),32);
        bufp->chgIData(oldp+80,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_hex2ver__Vstatic__r2),32);
        bufp->chgIData(oldp+81,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__i),32);
        bufp->chgIData(oldp+82,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__j),32);
        bufp->chgIData(oldp+83,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__k),32);
        bufp->chgIData(oldp+84,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__m),32);
        bufp->chgIData(oldp+85,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.__PVT__convert_hex2ver__Vstatic__n),32);
        bufp->chgIData(oldp+86,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__off_addr),32);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__nn),32);
        bufp->chgIData(oldp+88,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__aaaa),32);
        bufp->chgIData(oldp+89,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__aaaa_pre),32);
        bufp->chgIData(oldp+90,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__tt),32);
        bufp->chgIData(oldp+91,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__cc),32);
        bufp->chgIData(oldp+92,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__aah),32);
        bufp->chgIData(oldp+93,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__aal),32);
        bufp->chgIData(oldp+94,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__dd),32);
        bufp->chgIData(oldp+95,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__sum),32);
        bufp->chgIData(oldp+96,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__line_no),32);
        bufp->chgIData(oldp+97,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_hex2ver__Vstatic__divide_factor),32);
        bufp->chgBit(oldp+98,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_ARRIA10__Vstatic__is_arria10));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_ARRIAGX__Vstatic__is_arriagx));
        bufp->chgBit(oldp+100,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_ARRIAIIGX__Vstatic__is_arriaiigx));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_ARRIAIIGZ__Vstatic__is_arriaiigz));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_ARRIAVGZ__Vstatic__is_arriavgz));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_ARRIAV__Vstatic__is_arriav));
        bufp->chgBit(oldp+104,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONE10LP__Vstatic__is_cyclone10lp));
        bufp->chgBit(oldp+105,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONEII__Vstatic__is_cycloneii));
        bufp->chgBit(oldp+106,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONEIIILS__Vstatic__is_cycloneiiils));
        bufp->chgBit(oldp+107,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONEIII__Vstatic__is_cycloneiii));
        bufp->chgBit(oldp+108,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONEIVE__Vstatic__is_cycloneive));
        bufp->chgBit(oldp+109,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONEIVGX__Vstatic__is_cycloneivgx));
        bufp->chgBit(oldp+110,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONEV__Vstatic__is_cyclonev));
        bufp->chgBit(oldp+111,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONE__Vstatic__is_cyclone));
        bufp->chgBit(oldp+112,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_HARDCOPYII__Vstatic__is_hardcopyii));
        bufp->chgBit(oldp+113,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_HARDCOPYIII__Vstatic__is_hardcopyiii));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_HARDCOPYIV__Vstatic__is_hardcopyiv));
        bufp->chgBit(oldp+115,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_MAX10__Vstatic__is_max10));
        bufp->chgBit(oldp+116,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_MAXII__Vstatic__is_maxii));
        bufp->chgBit(oldp+117,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_MAXV__Vstatic__is_maxv));
        bufp->chgBit(oldp+118,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIX10__Vstatic__is_stratix10));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIXGX__Vstatic__is_stratixgx));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIXIIGX__Vstatic__is_stratixiigx));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIXII__Vstatic__is_stratixii));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIXIII__Vstatic__is_stratixiii));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIXIV__Vstatic__is_stratixiv));
        bufp->chgBit(oldp+124,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIXV__Vstatic__is_stratixv));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIX__Vstatic__is_stratix));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIXGX__Vstatic__var_family_stratixgx));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_CYCLONE__Vstatic__var_family_cyclone));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIXIIGX__Vstatic__var_family_stratixiigx));
        bufp->chgBit(oldp+129,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIXIII__Vstatic__var_family_stratixiii));
        bufp->chgBit(oldp+130,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_ARRIAVGZ__Vstatic__var_family_arriavgz));
        bufp->chgBit(oldp+131,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIXV__Vstatic__var_family_stratixv));
        bufp->chgBit(oldp+132,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_ARRIA10__Vstatic__var_family_arria10));
        bufp->chgBit(oldp+133,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_CYCLONE10LP__Vstatic__var_family_cyclone10lp));
        bufp->chgBit(oldp+134,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIXII__Vstatic__var_family_stratixii));
        bufp->chgBit(oldp+135,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_CYCLONEIVGX__Vstatic__var_family_cycloneivgx));
        bufp->chgBit(oldp+136,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_CYCLONEIVE__Vstatic__var_family_cycloneive));
        bufp->chgBit(oldp+137,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_CYCLONEIII__Vstatic__var_family_cycloneiii));
        bufp->chgBit(oldp+138,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIX_HC__Vstatic__var_family_stratix_hc));
        bufp->chgBit(oldp+139,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIX__Vstatic__var_family_stratix));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_MAXII__Vstatic__var_family_maxii));
        bufp->chgBit(oldp+141,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_MAXV__Vstatic__var_family_maxv));
        bufp->chgBit(oldp+142,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_CYCLONEII__Vstatic__var_family_cycloneii));
        bufp->chgBit(oldp+143,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIXIV__Vstatic__var_family_stratixiv));
        bufp->chgBit(oldp+144,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_ARRIAIIGZ__Vstatic__var_family_arriaiigz));
        bufp->chgBit(oldp+145,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_ARRIAIIGX__Vstatic__var_family_arriaiigx));
        bufp->chgBit(oldp+146,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HARDCOPYIII__Vstatic__var_family_hardcopyiii));
        bufp->chgBit(oldp+147,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HARDCOPYIV__Vstatic__var_family_hardcopyiv));
        bufp->chgBit(oldp+148,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_CYCLONEV__Vstatic__var_family_cyclonev));
        bufp->chgBit(oldp+149,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_ARRIAV__Vstatic__var_family_arriav));
        bufp->chgBit(oldp+150,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_MAX10__Vstatic__var_family_max10));
        bufp->chgBit(oldp+151,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIX10__Vstatic__var_family_stratix10));
        bufp->chgBit(oldp+152,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_BASE_STRATIXII__Vstatic__var_family_base_stratixii));
        bufp->chgBit(oldp+153,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_BASE_STRATIX__Vstatic__var_family_base_stratix));
        bufp->chgBit(oldp+154,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_BASE_CYCLONEII__Vstatic__var_family_base_cycloneii));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_BASE_CYCLONE__Vstatic__var_family_base_cyclone));
        bufp->chgBit(oldp+156,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HAS_ALTERA_MULT_ADD_FLOW__Vstatic__var_family_has_altera_mult_add_flow));
        bufp->chgBit(oldp+157,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_IS_ALTMULT_ADD_EOL__Vstatic__var_family_is_altmult_add_eol));
        bufp->chgBit(oldp+158,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HAS_STRATIXII_STYLE_RAM__Vstatic__var_family_has_stratixii_style_ram));
        bufp->chgBit(oldp+159,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HAS_STRATIXIII_STYLE_RAM__Vstatic__var_family_has_stratixiii_style_ram));
        bufp->chgBit(oldp+160,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HAS_STRATIX_STYLE_PLL__Vstatic__var_family_has_stratix_style_pll));
        bufp->chgBit(oldp+161,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HAS_STRATIXII_STYLE_PLL__Vstatic__var_family_has_stratixii_style_pll));
        bufp->chgBit(oldp+162,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HAS_INVERTED_OUTPUT_DDIO__Vstatic__var_family_has_inverted_output_ddio));
        bufp->chgBit(oldp+163,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_VALID_FAMILY__Vstatic__is_valid));
        bufp->chgBit(oldp+164,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_ARRIA10__Vstatic__is_arria10));
        bufp->chgBit(oldp+165,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_ARRIAGX__Vstatic__is_arriagx));
        bufp->chgBit(oldp+166,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_ARRIAIIGX__Vstatic__is_arriaiigx));
        bufp->chgBit(oldp+167,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_ARRIAIIGZ__Vstatic__is_arriaiigz));
        bufp->chgBit(oldp+168,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_ARRIAVGZ__Vstatic__is_arriavgz));
        bufp->chgBit(oldp+169,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_ARRIAV__Vstatic__is_arriav));
        bufp->chgBit(oldp+170,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONE10LP__Vstatic__is_cyclone10lp));
        bufp->chgBit(oldp+171,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONEII__Vstatic__is_cycloneii));
        bufp->chgBit(oldp+172,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONEIIILS__Vstatic__is_cycloneiiils));
        bufp->chgBit(oldp+173,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONEIII__Vstatic__is_cycloneiii));
        bufp->chgBit(oldp+174,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONEIVE__Vstatic__is_cycloneive));
        bufp->chgBit(oldp+175,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONEIVGX__Vstatic__is_cycloneivgx));
        bufp->chgBit(oldp+176,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONEV__Vstatic__is_cyclonev));
        bufp->chgBit(oldp+177,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_CYCLONE__Vstatic__is_cyclone));
        bufp->chgBit(oldp+178,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_HARDCOPYII__Vstatic__is_hardcopyii));
        bufp->chgBit(oldp+179,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_HARDCOPYIII__Vstatic__is_hardcopyiii));
        bufp->chgBit(oldp+180,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_HARDCOPYIV__Vstatic__is_hardcopyiv));
        bufp->chgBit(oldp+181,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_MAX10__Vstatic__is_max10));
        bufp->chgBit(oldp+182,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_MAXII__Vstatic__is_maxii));
        bufp->chgBit(oldp+183,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_MAXV__Vstatic__is_maxv));
        bufp->chgBit(oldp+184,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIX10__Vstatic__is_stratix10));
        bufp->chgBit(oldp+185,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIXGX__Vstatic__is_stratixgx));
        bufp->chgBit(oldp+186,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIXIIGX__Vstatic__is_stratixiigx));
        bufp->chgBit(oldp+187,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIXII__Vstatic__is_stratixii));
        bufp->chgBit(oldp+188,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIXIII__Vstatic__is_stratixiii));
        bufp->chgBit(oldp+189,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIXIV__Vstatic__is_stratixiv));
        bufp->chgBit(oldp+190,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIXV__Vstatic__is_stratixv));
        bufp->chgBit(oldp+191,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_FAMILY_STRATIX__Vstatic__is_stratix));
        bufp->chgBit(oldp+192,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIXGX__Vstatic__var_family_stratixgx));
        bufp->chgBit(oldp+193,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_CYCLONE__Vstatic__var_family_cyclone));
        bufp->chgBit(oldp+194,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIXIIGX__Vstatic__var_family_stratixiigx));
        bufp->chgBit(oldp+195,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIXIII__Vstatic__var_family_stratixiii));
        bufp->chgBit(oldp+196,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_ARRIAVGZ__Vstatic__var_family_arriavgz));
        bufp->chgBit(oldp+197,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIXV__Vstatic__var_family_stratixv));
        bufp->chgBit(oldp+198,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_ARRIA10__Vstatic__var_family_arria10));
        bufp->chgBit(oldp+199,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_CYCLONE10LP__Vstatic__var_family_cyclone10lp));
        bufp->chgBit(oldp+200,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIXII__Vstatic__var_family_stratixii));
        bufp->chgBit(oldp+201,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_CYCLONEIVGX__Vstatic__var_family_cycloneivgx));
        bufp->chgBit(oldp+202,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_CYCLONEIVE__Vstatic__var_family_cycloneive));
        bufp->chgBit(oldp+203,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_CYCLONEIII__Vstatic__var_family_cycloneiii));
        bufp->chgBit(oldp+204,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIX_HC__Vstatic__var_family_stratix_hc));
        bufp->chgBit(oldp+205,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIX__Vstatic__var_family_stratix));
        bufp->chgBit(oldp+206,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_MAXII__Vstatic__var_family_maxii));
        bufp->chgBit(oldp+207,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_MAXV__Vstatic__var_family_maxv));
        bufp->chgBit(oldp+208,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_CYCLONEII__Vstatic__var_family_cycloneii));
        bufp->chgBit(oldp+209,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIXIV__Vstatic__var_family_stratixiv));
        bufp->chgBit(oldp+210,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_ARRIAIIGZ__Vstatic__var_family_arriaiigz));
        bufp->chgBit(oldp+211,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_ARRIAIIGX__Vstatic__var_family_arriaiigx));
        bufp->chgBit(oldp+212,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HARDCOPYIII__Vstatic__var_family_hardcopyiii));
        bufp->chgBit(oldp+213,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HARDCOPYIV__Vstatic__var_family_hardcopyiv));
        bufp->chgBit(oldp+214,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_CYCLONEV__Vstatic__var_family_cyclonev));
        bufp->chgBit(oldp+215,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_ARRIAV__Vstatic__var_family_arriav));
        bufp->chgBit(oldp+216,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_MAX10__Vstatic__var_family_max10));
        bufp->chgBit(oldp+217,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_STRATIX10__Vstatic__var_family_stratix10));
        bufp->chgBit(oldp+218,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_BASE_STRATIXII__Vstatic__var_family_base_stratixii));
        bufp->chgBit(oldp+219,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_BASE_STRATIX__Vstatic__var_family_base_stratix));
        bufp->chgBit(oldp+220,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_BASE_CYCLONEII__Vstatic__var_family_base_cycloneii));
        bufp->chgBit(oldp+221,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_BASE_CYCLONE__Vstatic__var_family_base_cyclone));
        bufp->chgBit(oldp+222,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HAS_ALTERA_MULT_ADD_FLOW__Vstatic__var_family_has_altera_mult_add_flow));
        bufp->chgBit(oldp+223,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_IS_ALTMULT_ADD_EOL__Vstatic__var_family_is_altmult_add_eol));
        bufp->chgBit(oldp+224,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HAS_STRATIXII_STYLE_RAM__Vstatic__var_family_has_stratixii_style_ram));
        bufp->chgBit(oldp+225,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HAS_STRATIXIII_STYLE_RAM__Vstatic__var_family_has_stratixiii_style_ram));
        bufp->chgBit(oldp+226,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HAS_STRATIX_STYLE_PLL__Vstatic__var_family_has_stratix_style_pll));
        bufp->chgBit(oldp+227,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HAS_STRATIXII_STYLE_PLL__Vstatic__var_family_has_stratixii_style_pll));
        bufp->chgBit(oldp+228,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__FEATURE_FAMILY_HAS_INVERTED_OUTPUT_DDIO__Vstatic__var_family_has_inverted_output_ddio));
        bufp->chgBit(oldp+229,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev.__PVT__IS_VALID_FAMILY__Vstatic__is_valid));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgCData(oldp+230,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.tolower__Vstatic__conv_char),8);
        bufp->chgWData(oldp+231,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__buffer),2048);
        bufp->chgWData(oldp+295,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__memory_data1),1025);
        bufp->chgWData(oldp+328,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__memory_data2),1025);
        bufp->chgCData(oldp+361,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__c),8);
        bufp->chgCData(oldp+362,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__hex),4);
        bufp->chgCData(oldp+363,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__tmp_char),4);
        bufp->chgIData(oldp+364,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__address_radix),24);
        bufp->chgIData(oldp+365,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__data_radix),24);
        bufp->chgBit(oldp+366,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_width));
        bufp->chgBit(oldp+367,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_depth));
        bufp->chgBit(oldp+368,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_data_radix));
        bufp->chgBit(oldp+369,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_address_radix));
        bufp->chgBit(oldp+370,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__width_found));
        bufp->chgBit(oldp+371,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__depth_found));
        bufp->chgBit(oldp+372,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__data_radix_found));
        bufp->chgBit(oldp+373,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__address_radix_found));
        bufp->chgBit(oldp+374,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_address_data_pairs));
        bufp->chgBit(oldp+375,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_address));
        bufp->chgBit(oldp+376,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_data));
        bufp->chgBit(oldp+377,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__display_address));
        bufp->chgBit(oldp+378,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__invalid_address));
        bufp->chgBit(oldp+379,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_start_address));
        bufp->chgBit(oldp+380,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_end_address));
        bufp->chgBit(oldp+381,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__done));
        bufp->chgBit(oldp+382,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__error_status));
        bufp->chgBit(oldp+383,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__first_rec));
        bufp->chgBit(oldp+384,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__last_rec));
        bufp->chgIData(oldp+385,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__memory_width),32);
        bufp->chgIData(oldp+386,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__memory_depth),32);
        bufp->chgIData(oldp+387,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__value),32);
        bufp->chgIData(oldp+388,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__ifp),32);
        bufp->chgIData(oldp+389,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__ofp),32);
        bufp->chgIData(oldp+390,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__r),32);
        bufp->chgIData(oldp+391,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__i),32);
        bufp->chgIData(oldp+392,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__negative),32);
        bufp->chgIData(oldp+393,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__off_addr),32);
        bufp->chgIData(oldp+394,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__nn),32);
        bufp->chgIData(oldp+395,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__address),32);
        bufp->chgIData(oldp+396,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__tt),32);
        bufp->chgIData(oldp+397,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__cc),32);
        bufp->chgIData(oldp+398,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__aah),32);
        bufp->chgIData(oldp+399,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__aal),32);
        bufp->chgIData(oldp+400,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__dd),32);
        bufp->chgIData(oldp+401,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__sum),32);
        bufp->chgIData(oldp+402,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__start_address),32);
        bufp->chgIData(oldp+403,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__end_address),32);
        bufp->chgIData(oldp+404,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__line_no),32);
        bufp->chgIData(oldp+405,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__character_count),32);
        bufp->chgIData(oldp+406,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__comment_with_percent_found),32);
        bufp->chgIData(oldp+407,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__comment_with_double_minus_found),32);
        bufp->chgCData(oldp+408,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.tolower__Vstatic__conv_char),8);
        bufp->chgWData(oldp+409,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__buffer),2048);
        bufp->chgWData(oldp+473,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__memory_data1),1025);
        bufp->chgWData(oldp+506,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__memory_data2),1025);
        bufp->chgCData(oldp+539,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__c),8);
        bufp->chgCData(oldp+540,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__hex),4);
        bufp->chgCData(oldp+541,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__tmp_char),4);
        bufp->chgIData(oldp+542,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__address_radix),24);
        bufp->chgIData(oldp+543,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__data_radix),24);
        bufp->chgBit(oldp+544,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_width));
        bufp->chgBit(oldp+545,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_depth));
        bufp->chgBit(oldp+546,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_data_radix));
        bufp->chgBit(oldp+547,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_address_radix));
        bufp->chgBit(oldp+548,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__width_found));
        bufp->chgBit(oldp+549,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__depth_found));
        bufp->chgBit(oldp+550,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__data_radix_found));
        bufp->chgBit(oldp+551,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__address_radix_found));
        bufp->chgBit(oldp+552,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_address_data_pairs));
        bufp->chgBit(oldp+553,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_address));
        bufp->chgBit(oldp+554,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_data));
        bufp->chgBit(oldp+555,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__display_address));
        bufp->chgBit(oldp+556,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__invalid_address));
        bufp->chgBit(oldp+557,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_start_address));
        bufp->chgBit(oldp+558,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__get_end_address));
        bufp->chgBit(oldp+559,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__done));
        bufp->chgBit(oldp+560,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__error_status));
        bufp->chgBit(oldp+561,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__first_rec));
        bufp->chgBit(oldp+562,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__last_rec));
        bufp->chgIData(oldp+563,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__memory_width),32);
        bufp->chgIData(oldp+564,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__memory_depth),32);
        bufp->chgIData(oldp+565,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__value),32);
        bufp->chgIData(oldp+566,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__ifp),32);
        bufp->chgIData(oldp+567,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__ofp),32);
        bufp->chgIData(oldp+568,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__r),32);
        bufp->chgIData(oldp+569,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__i),32);
        bufp->chgIData(oldp+570,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__negative),32);
        bufp->chgIData(oldp+571,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__off_addr),32);
        bufp->chgIData(oldp+572,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__nn),32);
        bufp->chgIData(oldp+573,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__address),32);
        bufp->chgIData(oldp+574,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__tt),32);
        bufp->chgIData(oldp+575,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__cc),32);
        bufp->chgIData(oldp+576,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__aah),32);
        bufp->chgIData(oldp+577,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__aal),32);
        bufp->chgIData(oldp+578,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__dd),32);
        bufp->chgIData(oldp+579,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__sum),32);
        bufp->chgIData(oldp+580,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__start_address),32);
        bufp->chgIData(oldp+581,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__end_address),32);
        bufp->chgIData(oldp+582,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__line_no),32);
        bufp->chgIData(oldp+583,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__character_count),32);
        bufp->chgIData(oldp+584,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__comment_with_percent_found),32);
        bufp->chgIData(oldp+585,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem.convert_mif2ver__Vstatic__comment_with_double_minus_found),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        VHighRiscTb___024root__trace_chg_dtype____0(vlSelf, bufp, 586, vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem_data_b);
        bufp->chgBit(oldp+588,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_b));
        bufp->chgBit(oldp+589,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_reg_b));
        bufp->chgBit(oldp+590,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_b));
        bufp->chgBit(oldp+591,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b));
        bufp->chgBit(oldp+592,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_b));
        bufp->chgBit(oldp+593,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_out));
        bufp->chgBit(oldp+594,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_x));
        bufp->chgWData(oldp+595,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__ram_initf),2048);
        bufp->chgBit(oldp+659,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_b));
        bufp->chgBit(oldp+660,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_b));
        bufp->chgBit(oldp+661,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_b));
        bufp->chgBit(oldp+662,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__good_to_go_b));
        bufp->chgBit(oldp+663,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__init_file_b_port));
        bufp->chgBit(oldp+664,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_nmram_write_b));
        bufp->chgSData(oldp+665,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__wa_mult_x),16);
        bufp->chgBit(oldp+666,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_data_b));
        bufp->chgBit(oldp+667,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_outdata_aclr_b_prev));
        bufp->chgBit(oldp+668,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_b));
        bufp->chgBit(oldp+669,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_b1));
        bufp->chgBit(oldp+670,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_b_signal));
        bufp->chgWData(oldp+671,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__cread_during_write_mode_mixed_ports),169);
        bufp->chgQData(oldp+677,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_ram_block_type),57);
        bufp->chgIData(oldp+679,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byte_size),32);
        bufp->chgIData(oldp+680,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_a),32);
        bufp->chgIData(oldp+681,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_b),32);
        bufp->chgIData(oldp+682,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_aclr_flag_b),32);
        bufp->chgIData(oldp+683,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i),32);
        bufp->chgQData(oldp+684,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_write_time_b),64);
        VHighRiscTb___024root__trace_chg_dtype____1(vlSelf, bufp, 686, vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem_data_b);
        bufp->chgBit(oldp+688,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_b));
        bufp->chgSData(oldp+689,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_reg_a),16);
        bufp->chgBit(oldp+690,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_reg_b));
        bufp->chgBit(oldp+691,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_b));
        bufp->chgBit(oldp+692,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b));
        bufp->chgBit(oldp+693,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_b));
        bufp->chgSData(oldp+694,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_address_a),14);
        bufp->chgBit(oldp+695,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_out));
        bufp->chgBit(oldp+696,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_b_x));
        bufp->chgWData(oldp+697,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__ram_initf),2048);
        bufp->chgBit(oldp+761,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_b));
        bufp->chgBit(oldp+762,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_b));
        bufp->chgBit(oldp+763,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_b));
        bufp->chgBit(oldp+764,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__good_to_go_b));
        bufp->chgBit(oldp+765,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__init_file_b_port));
        bufp->chgBit(oldp+766,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_nmram_write_a));
        bufp->chgBit(oldp+767,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_nmram_write_b));
        bufp->chgSData(oldp+768,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__wa_mult_x),16);
        bufp->chgBit(oldp+769,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_data_b));
        bufp->chgSData(oldp+770,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_data_a),16);
        bufp->chgBit(oldp+771,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_outdata_aclr_b_prev));
        bufp->chgBit(oldp+772,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_b));
        bufp->chgBit(oldp+773,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_b1));
        bufp->chgBit(oldp+774,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_b_signal));
        bufp->chgWData(oldp+775,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__cread_during_write_mode_mixed_ports),169);
        bufp->chgQData(oldp+781,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_ram_block_type),57);
        bufp->chgIData(oldp+783,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byte_size),32);
        bufp->chgIData(oldp+784,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_a),32);
        bufp->chgIData(oldp+785,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_numwords_b),32);
        bufp->chgIData(oldp+786,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_aclr_flag_a),32);
        bufp->chgIData(oldp+787,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_aclr_flag_b),32);
        bufp->chgIData(oldp+788,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i),32);
        bufp->chgIData(oldp+789,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_count),32);
        bufp->chgQData(oldp+790,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_write_time_a),64);
        bufp->chgQData(oldp+792,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_write_time_b),64);
        bufp->chgSData(oldp+794,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[0]),16);
        bufp->chgSData(oldp+795,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[1]),16);
        bufp->chgSData(oldp+796,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[2]),16);
        bufp->chgSData(oldp+797,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[3]),16);
        bufp->chgSData(oldp+798,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[4]),16);
        bufp->chgSData(oldp+799,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[5]),16);
        bufp->chgSData(oldp+800,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[6]),16);
        bufp->chgSData(oldp+801,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[7]),16);
        bufp->chgSData(oldp+802,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[8]),16);
        bufp->chgSData(oldp+803,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[9]),16);
        bufp->chgSData(oldp+804,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[10]),16);
        bufp->chgSData(oldp+805,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[11]),16);
        bufp->chgSData(oldp+806,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[12]),16);
        bufp->chgSData(oldp+807,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[13]),16);
        bufp->chgSData(oldp+808,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[14]),16);
        bufp->chgSData(oldp+809,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[15]),16);
        bufp->chgSData(oldp+810,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[16]),16);
        bufp->chgSData(oldp+811,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[17]),16);
        bufp->chgSData(oldp+812,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[18]),16);
        bufp->chgSData(oldp+813,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[19]),16);
        bufp->chgSData(oldp+814,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[20]),16);
        bufp->chgSData(oldp+815,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[21]),16);
        bufp->chgSData(oldp+816,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[22]),16);
        bufp->chgSData(oldp+817,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[23]),16);
        bufp->chgSData(oldp+818,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[24]),16);
        bufp->chgSData(oldp+819,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[25]),16);
        bufp->chgSData(oldp+820,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[26]),16);
        bufp->chgSData(oldp+821,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[27]),16);
        bufp->chgSData(oldp+822,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[28]),16);
        bufp->chgSData(oldp+823,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[29]),16);
        bufp->chgSData(oldp+824,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[30]),16);
        bufp->chgSData(oldp+825,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortReadData[31]),16);
        bufp->chgSData(oldp+826,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[0]),16);
        bufp->chgSData(oldp+827,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[1]),16);
        bufp->chgSData(oldp+828,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[2]),16);
        bufp->chgSData(oldp+829,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[3]),16);
        bufp->chgSData(oldp+830,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[4]),16);
        bufp->chgSData(oldp+831,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[5]),16);
        bufp->chgSData(oldp+832,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[6]),16);
        bufp->chgSData(oldp+833,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[7]),16);
        bufp->chgSData(oldp+834,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[8]),16);
        bufp->chgSData(oldp+835,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[9]),16);
        bufp->chgSData(oldp+836,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[10]),16);
        bufp->chgSData(oldp+837,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[11]),16);
        bufp->chgSData(oldp+838,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[12]),16);
        bufp->chgSData(oldp+839,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[13]),16);
        bufp->chgSData(oldp+840,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[14]),16);
        bufp->chgSData(oldp+841,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[15]),16);
        bufp->chgSData(oldp+842,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[16]),16);
        bufp->chgSData(oldp+843,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[17]),16);
        bufp->chgSData(oldp+844,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[18]),16);
        bufp->chgSData(oldp+845,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[19]),16);
        bufp->chgSData(oldp+846,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[20]),16);
        bufp->chgSData(oldp+847,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[21]),16);
        bufp->chgSData(oldp+848,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[22]),16);
        bufp->chgSData(oldp+849,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[23]),16);
        bufp->chgSData(oldp+850,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[24]),16);
        bufp->chgSData(oldp+851,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[25]),16);
        bufp->chgSData(oldp+852,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[26]),16);
        bufp->chgSData(oldp+853,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[27]),16);
        bufp->chgSData(oldp+854,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[28]),16);
        bufp->chgSData(oldp+855,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[29]),16);
        bufp->chgSData(oldp+856,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[30]),16);
        bufp->chgSData(oldp+857,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortReadData[31]),16);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity[4U])))) {
        bufp->chgSData(oldp+858,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_address_a),14);
        bufp->chgSData(oldp+859,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_original_data_a),16);
        bufp->chgIData(oldp+860,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_aclr_flag_a),32);
        bufp->chgIData(oldp+861,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_count),32);
        bufp->chgQData(oldp+862,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_write_time_a),64);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity[6U])))) {
        bufp->chgSData(oldp+864,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a),16);
        bufp->chgSData(oldp+865,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a),16);
        bufp->chgSData(oldp+866,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a),14);
        bufp->chgSData(oldp+867,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out),16);
        bufp->chgSData(oldp+868,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_x),16);
        bufp->chgBit(oldp+869,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a));
        bufp->chgBit(oldp+870,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_a));
        bufp->chgBit(oldp+871,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a));
        bufp->chgBit(oldp+872,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_a));
        bufp->chgBit(oldp+873,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__good_to_go_a));
        bufp->chgBit(oldp+874,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_nmram_write_a));
        bufp->chgBit(oldp+875,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a1));
        bufp->chgBit(oldp+876,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal));
        bufp->chgBit(oldp+877,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken_a_reg));
        bufp->chgBit(oldp+878,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken0_b_reg));
        bufp->chgSData(oldp+879,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_data_reg_a),16);
        bufp->chgSData(oldp+880,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a),16);
        bufp->chgSData(oldp+881,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_reg_a),14);
        bufp->chgSData(oldp+882,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out),16);
        bufp->chgSData(oldp+883,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_x),16);
        bufp->chgBit(oldp+884,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_wren_reg_a));
        bufp->chgBit(oldp+885,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_rden_reg_a));
        bufp->chgBit(oldp+886,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_write_flag_a));
        bufp->chgBit(oldp+887,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__good_to_go_a));
        bufp->chgBit(oldp+888,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a1));
        bufp->chgBit(oldp+889,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a_signal));
        bufp->chgBit(oldp+890,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken_a_reg));
        bufp->chgBit(oldp+891,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken0_b_reg));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[9U])))) {
        bufp->chgSData(oldp+892,(vlSelfRef.HighRiscTb__DOT__OutVal),16);
        bufp->chgSData(oldp+893,(vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal
                                 .__PVT__out),16);
        bufp->chgBit(oldp+894,(vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal
                               .__PVT__Overflow));
        bufp->chgBit(oldp+895,(vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal
                               .__PVT__Parity));
        bufp->chgBit(oldp+896,(vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal
                               .__PVT__Negative));
        bufp->chgBit(oldp+897,(vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal
                               .__PVT__Zero));
        bufp->chgBit(oldp+898,(vlSelfRef.HighRiscTb__DOT__check_1__DOT__DataVal
                               .__PVT__Carry));
        bufp->chgBit(oldp+899,(vlSymsp->TOP__assertionmath.temp_carry));
        bufp->chgBit(oldp+900,(vlSymsp->TOP__assertionmath.parity_sum));
        bufp->chgSData(oldp+901,(vlSymsp->TOP__assertionmath.expFlags
                                 .__PVT__out),16);
        bufp->chgBit(oldp+902,(vlSymsp->TOP__assertionmath.expFlags
                               .__PVT__Overflow));
        bufp->chgBit(oldp+903,(vlSymsp->TOP__assertionmath.expFlags
                               .__PVT__Parity));
        bufp->chgBit(oldp+904,(vlSymsp->TOP__assertionmath.expFlags
                               .__PVT__Negative));
        bufp->chgBit(oldp+905,(vlSymsp->TOP__assertionmath.expFlags
                               .__PVT__Zero));
        bufp->chgBit(oldp+906,(vlSymsp->TOP__assertionmath.expFlags
                               .__PVT__Carry));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgSData(oldp+907,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__temp_wa),16);
        bufp->chgIData(oldp+908,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i5),32);
        bufp->chgIData(oldp+909,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_a_bit_count_low),32);
        bufp->chgIData(oldp+910,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_b_bit_count_low),32);
        bufp->chgIData(oldp+911,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__port_b_bit_count_high),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgSData(oldp+912,((0x000003ffU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__LEDs))),10);
        bufp->chgSData(oldp+913,(vlSelfRef.HighRiscTb__DOT__uut__DOT__LEDs),16);
        bufp->chgCData(oldp+914,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags),5);
        bufp->chgCData(oldp+915,((0x00000080U | ((0x00000040U 
                                                  & ((~ 
                                                      ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags) 
                                                       >> 1U)) 
                                                     << 6U)) 
                                                 | ((0x00000020U 
                                                     & ((~ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags)) 
                                                        << 5U)) 
                                                    | (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags))))),8);
        bufp->chgSData(oldp+916,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair),16);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[7U] 
                      | vlSelfRef.__Vm_traceActivity[8U])))) {
        bufp->chgBit(oldp+917,((2U == (0x0000000fU 
                                       & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                          >> 0x0000000cU)))));
        bufp->chgCData(oldp+918,((0x0000000fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                                 >> 0x0000000cU))),4);
        bufp->chgCData(oldp+919,((0x0000003fU & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))),6);
        bufp->chgCData(oldp+920,((0x0000003fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                                 >> 6U))),6);
        bufp->chgCData(oldp+921,((0x0000003fU & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))),6);
        bufp->chgBit(oldp+922,((IData)(((0x0fc0U == 
                                         (0x0fc0U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))) 
                                        & ((2U != (0x0000000fU 
                                                   & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                                      >> 0x0000000cU))) 
                                           & (0U != 
                                              (0x0000000fU 
                                               & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                                  >> 0x0000000cU))))))));
        bufp->chgSData(oldp+923,((0x000001ffU & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))),9);
        bufp->chgSData(oldp+924,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgBit(oldp+925,(vlSelfRef.HighRiscTb__DOT__uut__DOT__VGA_BLANK_N));
        bufp->chgBit(oldp+926,(vlSelfRef.HighRiscTb__DOT__uut__DOT__VGA_SYNC_N));
        bufp->chgBit(oldp+927,(vlSelfRef.HighRiscTb__DOT__uut__DOT__VGA_HS));
        bufp->chgBit(oldp+928,(vlSelfRef.HighRiscTb__DOT__uut__DOT__VGA_VS));
        bufp->chgSData(oldp+929,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress),16);
        bufp->chgSData(oldp+930,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress),16);
        bufp->chgSData(oldp+931,((0x00003fffU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress))),14);
        bufp->chgSData(oldp+932,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextX),11);
        bufp->chgSData(oldp+933,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY),10);
        bufp->chgSData(oldp+934,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__hCount),11);
        bufp->chgSData(oldp+935,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__vCount),10);
        bufp->chgBit(oldp+936,((1U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__SlaveWriteEnable))));
        bufp->chgBit(oldp+937,((1U & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__SlaveWriteEnable) 
                                      >> 1U))));
        bufp->chgCData(oldp+938,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__SlaveWriteEnable),4);
        bufp->chgCData(oldp+939,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__BlockInUse),2);
        bufp->chgSData(oldp+940,((0x000001ffU & (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress))),9);
        bufp->chgQData(oldp+941,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortWriteEnable),33);
        bufp->chgBit(oldp+943,((1U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortWriteEnable))));
        bufp->chgBit(oldp+944,((1U & (IData)((vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortWriteEnable 
                                              >> 1U)))));
        bufp->chgCData(oldp+945,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__PortInUse),5);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[10U]))) {
        bufp->chgSData(oldp+946,(vlSelfRef.HighRiscTb__DOT__uut__DOT__DataAssertVal),16);
        bufp->chgSData(oldp+947,(vlSelfRef.HighRiscTb__DOT__uut__DOT__DataAssertVal),16);
        bufp->chgSData(oldp+948,((0x00003fffU & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.Address))),14);
        bufp->chgSData(oldp+949,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc),16);
        bufp->chgSData(oldp+950,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutDest),16);
        bufp->chgSData(oldp+951,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest),16);
        bufp->chgBit(oldp+952,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteEnable));
        bufp->chgBit(oldp+953,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__OffsetEnable));
        bufp->chgCData(oldp+954,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutFlags),5);
        bufp->chgSData(oldp+955,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc),16);
        bufp->chgSData(oldp+956,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest),16);
        bufp->chgSData(oldp+957,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutDest),16);
        bufp->chgSData(oldp+958,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.Address),16);
        bufp->chgBit(oldp+959,((1U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__SlaveWriteEnable))));
        bufp->chgBit(oldp+960,((1U & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__SlaveWriteEnable) 
                                      >> 1U))));
        bufp->chgCData(oldp+961,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__SlaveWriteEnable),4);
        bufp->chgCData(oldp+962,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__BlockInUse),2);
        bufp->chgSData(oldp+963,((0x000001ffU & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.Address))),9);
        bufp->chgQData(oldp+964,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortWriteEnable),33);
        bufp->chgBit(oldp+966,((1U & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortWriteEnable))));
        bufp->chgBit(oldp+967,((1U & (IData)((vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortWriteEnable 
                                              >> 1U)))));
        bufp->chgCData(oldp+968,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__PortInUse),5);
    }
    bufp->chgBit(oldp+969,(vlSelfRef.HighRiscTb__DOT__CLOCK_50));
    bufp->chgSData(oldp+970,(vlSelfRef.HighRiscTb__DOT__SW),10);
    bufp->chgCData(oldp+971,(vlSelfRef.HighRiscTb__DOT__KEY),4);
    bufp->chgBit(oldp+972,(vlSelfRef.HighRiscTb__DOT__tbClk));
    bufp->chgSData(oldp+973,(vlSelfRef.HighRiscTb__DOT__ClockCount),16);
    bufp->chgSData(oldp+974,(vlSelfRef.HighRiscTb__DOT__SWRead1),16);
    bufp->chgSData(oldp+975,(vlSelfRef.HighRiscTb__DOT__SWRead2),16);
    bufp->chgBit(oldp+976,((1U & (~ (IData)(vlSelfRef.HighRiscTb__DOT__CLOCK_50)))));
    bufp->chgCData(oldp+977,((0x000000fcU & (((0x00000038U 
                                               & (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair) 
                                                   >> 
                                                   ((IData)(5U) 
                                                    + 
                                                    (0x0000000fU 
                                                     & ((7U 
                                                         | (8U 
                                                            & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY) 
                                                               << 3U))) 
                                                        - (IData)(7U))))) 
                                                  << 3U)) 
                                              | (7U 
                                                 & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair) 
                                                    >> 
                                                    ((IData)(5U) 
                                                     + 
                                                     (0x0000000fU 
                                                      & ((7U 
                                                          | (8U 
                                                             & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY) 
                                                                << 3U))) 
                                                         - (IData)(7U))))))) 
                                             << 2U))),8);
    bufp->chgCData(oldp+978,((0x000000fcU & (((0x00000038U 
                                               & (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair) 
                                                   >> 
                                                   ((IData)(2U) 
                                                    + 
                                                    (0x0000000fU 
                                                     & ((7U 
                                                         | (8U 
                                                            & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY) 
                                                               << 3U))) 
                                                        - (IData)(7U))))) 
                                                  << 3U)) 
                                              | (7U 
                                                 & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair) 
                                                    >> 
                                                    ((IData)(2U) 
                                                     + 
                                                     (0x0000000fU 
                                                      & ((7U 
                                                          | (8U 
                                                             & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY) 
                                                                << 3U))) 
                                                         - (IData)(7U))))))) 
                                             << 2U))),8);
    bufp->chgCData(oldp+979,((0x000000ffU & ((0x000000c0U 
                                              & (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair) 
                                                  >> 
                                                  (0x0000000fU 
                                                   & ((7U 
                                                       | (8U 
                                                          & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY) 
                                                             << 3U))) 
                                                      - (IData)(7U)))) 
                                                 << 6U)) 
                                             | ((0x00000030U 
                                                 & (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair) 
                                                     >> 
                                                     (0x0000000fU 
                                                      & ((7U 
                                                          | (8U 
                                                             & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY) 
                                                                << 3U))) 
                                                         - (IData)(7U)))) 
                                                    << 4U)) 
                                                | ((0x0000000cU 
                                                    & (((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair) 
                                                        >> 
                                                        (0x0000000fU 
                                                         & ((7U 
                                                             | (8U 
                                                                & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY) 
                                                                   << 3U))) 
                                                            - (IData)(7U)))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair) 
                                                         >> 
                                                         (0x0000000fU 
                                                          & ((7U 
                                                              | (8U 
                                                                 & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY) 
                                                                    << 3U))) 
                                                             - (IData)(7U)))))))))),8);
    bufp->chgBit(oldp+980,((1U & (~ (IData)(vlSelfRef.HighRiscTb__DOT__KEY)))));
    bufp->chgSData(oldp+981,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_reg_a),16);
    bufp->chgSData(oldp+982,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_a),16);
    bufp->chgSData(oldp+983,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a),16);
    bufp->chgBit(oldp+984,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_b));
    bufp->chgSData(oldp+985,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out_b),16);
    bufp->chgBit(oldp+986,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_b));
    bufp->chgBit(oldp+987,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse0));
    bufp->chgBit(oldp+988,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse1));
    bufp->chgBit(oldp+989,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_flag));
    bufp->chgBit(oldp+990,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_prev));
    bufp->chgBit(oldp+991,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_flag));
    bufp->chgBit(oldp+992,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_prev));
    bufp->chgBit(oldp+993,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_outdata_aclr_a_prev));
    bufp->chgBit(oldp+994,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a));
    bufp->chgBit(oldp+995,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a2));
    bufp->chgBit(oldp+996,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b2));
    bufp->chgBit(oldp+997,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken1_b_reg));
    bufp->chgSData(oldp+998,(vlSelfRef.HighRiscTb__DOT__SW),16);
    bufp->chgSData(oldp+999,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers
                             [(0x0000003fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                              >> 6U))]),16);
    bufp->chgSData(oldp+1000,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers
                              [(0x0000003fU & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))]),16);
    bufp->chgBit(oldp+1001,(((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteEnable) 
                             & (0x0f80U == (0x0fc0U 
                                            & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))))));
    bufp->chgSData(oldp+1002,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteData),16);
    bufp->chgBit(oldp+1003,((IData)(((0xa000U == (0xe000U 
                                                  & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))) 
                                     & ((0x00001000U 
                                         & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                         ? (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43) 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                >> 0x0000000fU)) 
                                            | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                               >> 0x0000000fU))
                                         : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27) 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                >> 0x0000000fU)) 
                                            | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                               >> 0x0000000fU)))))));
    bufp->chgBit(oldp+1004,((IData)((((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                      >> 0x0000000fU) 
                                     & ((0x00004000U 
                                         & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                         ? ((0x00002000U 
                                             & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                             ? ((0x00001000U 
                                                 & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                                 ? 
                                                VL_COUNTONES_I(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 
                                                                >> 0x00000010U))
                                                 : 
                                                VL_COUNTONES_I(
                                                               (0x0000ffffU 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)))
                                             : ((0x00001000U 
                                                 & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                                 ? 
                                                VL_COUNTONES_I((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8))
                                                 : 
                                                VL_COUNTONES_I((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7))))
                                         : (((0x00001000U 
                                              & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64) 
                                                 + 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63) 
                                                  + 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62) 
                                                   + 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_61) 
                                                    + 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60) 
                                                     + 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_59) 
                                                      + 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58) 
                                                       + 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57) 
                                                        + 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56) 
                                                         + 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55) 
                                                          + 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54) 
                                                           + 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53) 
                                                            + 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52) 
                                                             + 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51) 
                                                              + 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                                               + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50))))))))))))))))
                                              : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79) 
                                                 + 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78) 
                                                  + 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77) 
                                                   + 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76) 
                                                    + 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75) 
                                                     + 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74) 
                                                      + 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73) 
                                                       + 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72) 
                                                        + 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_71) 
                                                         + 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70) 
                                                          + 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_69) 
                                                           + 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68) 
                                                            + 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_67) 
                                                             + 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66) 
                                                              + 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                                                               + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65))))))))))))))))) 
                                            & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                               >> 0x0000000dU)))))));
    bufp->chgSData(oldp+1005,((0x0000ffffU & ((~ (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc)) 
                                              & (- (IData)((IData)(
                                                                   (0xb000U 
                                                                    == 
                                                                    (0xf000U 
                                                                     & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))))))))),16);
    bufp->chgIData(oldp+1006,((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 
                               & ((- (IData)((3U == 
                                              (3U & 
                                               ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                                >> 0x0000000dU))))) 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                                   >> 0x0000000fU))))))),32);
    bufp->chgSData(oldp+1007,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteData),16);
    bufp->chgSData(oldp+1008,((0x0000ffffU & ((IData)(
                                                      ((0x0fc0U 
                                                        == 
                                                        (0x0fc0U 
                                                         & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))) 
                                                       & ((2U 
                                                           != 
                                                           (0x0000000fU 
                                                            & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                                               >> 0x0000000cU))) 
                                                          & (0U 
                                                             != 
                                                             (0x0000000fU 
                                                              & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                                                 >> 0x0000000cU))))))
                                               ? ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__OffsetEnable)
                                                   ? 
                                                  ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteData) 
                                                   + 
                                                   VL_EXTENDS_II(16,9, 
                                                                 (0x000001ffU 
                                                                  & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))))
                                                   : (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteData))
                                               : ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__OffsetEnable)
                                                   ? 
                                                  ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress) 
                                                   + 
                                                   VL_EXTENDS_II(16,9, 
                                                                 (0x000001ffU 
                                                                  & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))))
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress)))))),16);
    bufp->chgCData(oldp+1009,((((IData)(((0x0fc0U == 
                                          (0x0fc0U 
                                           & (IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData))) 
                                         & ((2U != 
                                             (0x0000000fU 
                                              & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                                 >> 0x0000000cU))) 
                                            & (0U != 
                                               (0x0000000fU 
                                                & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                                   >> 0x0000000cU)))))) 
                                << 1U) | (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__OffsetEnable))),2);
    bufp->chgSData(oldp+1010,(((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteEnable)
                                ? (IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteData)
                                : vlSelfRef.HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers
                               [(0x0000003fU & ((IData)(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.ReadData) 
                                                >> 6U))])),16);
    bufp->chgSData(oldp+1011,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_a),16);
    bufp->chgSData(oldp+1012,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp2_a),16);
    bufp->chgBit(oldp+1013,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_q_tmp_b));
    bufp->chgSData(oldp+1014,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_byteena_mask_reg_a_out_b),16);
    bufp->chgBit(oldp+1015,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_a));
    bufp->chgBit(oldp+1016,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_read_flag_b));
    bufp->chgBit(oldp+1017,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse0));
    bufp->chgBit(oldp+1018,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__same_clock_pulse1));
    bufp->chgBit(oldp+1019,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_flag));
    bufp->chgBit(oldp+1020,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_a_prev));
    bufp->chgBit(oldp+1021,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_flag));
    bufp->chgBit(oldp+1022,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_address_aclr_b_prev));
    bufp->chgBit(oldp+1023,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_outdata_aclr_a_prev));
    bufp->chgBit(oldp+1024,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_force_reread_a));
    bufp->chgBit(oldp+1025,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_a2));
    bufp->chgBit(oldp+1026,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_good_to_write_b2));
    bufp->chgBit(oldp+1027,(vlSelfRef.HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__i_core_clocken1_b_reg));
    bufp->chgCData(oldp+1028,((0x000000ffU & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair) 
                                              >> (0x0000000fU 
                                                  & ((7U 
                                                      | (8U 
                                                         & ((IData)(vlSelfRef.HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY) 
                                                            << 3U))) 
                                                     - (IData)(7U)))))),8);
    bufp->chgSData(oldp+1029,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__SlaveReadData[0]),16);
    bufp->chgSData(oldp+1030,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__SlaveReadData[1]),16);
    bufp->chgSData(oldp+1031,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__SlaveReadData[2]),16);
    bufp->chgSData(oldp+1032,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Ibus.__PVT__SlaveReadData[3]),16);
    bufp->chgSData(oldp+1033,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.ReadData),16);
    bufp->chgSData(oldp+1034,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__SlaveReadData[0]),16);
    bufp->chgSData(oldp+1035,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__SlaveReadData[1]),16);
    bufp->chgSData(oldp+1036,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__SlaveReadData[2]),16);
    bufp->chgSData(oldp+1037,(vlSymsp->TOP__HighRiscTb__DOT__uut__DOT__Dbus.__PVT__SlaveReadData[3]),16);
}

void VHighRiscTb___024root__trace_chg_dtype____0(VHighRiscTb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_chg_dtype____0\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
}

void VHighRiscTb___024root__trace_chg_dtype____1(VHighRiscTb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_chg_dtype____1\n"); );
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
}

void VHighRiscTb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighRiscTb___024root__trace_cleanup\n"); );
    // Body
    VHighRiscTb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VHighRiscTb___024root*>(voidSelf);
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[10U] = 0U;
}
