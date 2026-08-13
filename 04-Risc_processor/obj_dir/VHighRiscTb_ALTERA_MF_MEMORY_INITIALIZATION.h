// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VHighRiscTb.h for the primary calling header

#ifndef VERILATED_VHIGHRISCTB_ALTERA_MF_MEMORY_INITIALIZATION_H_
#define VERILATED_VHIGHRISCTB_ALTERA_MF_MEMORY_INITIALIZATION_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VHighRiscTb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VHighRiscTb_ALTERA_MF_MEMORY_INITIALIZATION final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*7:0*/ tolower__Vstatic__conv_char;
        CData/*7:0*/ convert_mif2ver__Vstatic__c;
        CData/*3:0*/ convert_mif2ver__Vstatic__hex;
        CData/*3:0*/ convert_mif2ver__Vstatic__tmp_char;
        CData/*0:0*/ convert_mif2ver__Vstatic__get_width;
        CData/*0:0*/ convert_mif2ver__Vstatic__get_depth;
        CData/*0:0*/ convert_mif2ver__Vstatic__get_data_radix;
        CData/*0:0*/ convert_mif2ver__Vstatic__get_address_radix;
        CData/*0:0*/ convert_mif2ver__Vstatic__width_found;
        CData/*0:0*/ convert_mif2ver__Vstatic__depth_found;
        CData/*0:0*/ convert_mif2ver__Vstatic__data_radix_found;
        CData/*0:0*/ convert_mif2ver__Vstatic__address_radix_found;
        CData/*0:0*/ convert_mif2ver__Vstatic__get_address_data_pairs;
        CData/*0:0*/ convert_mif2ver__Vstatic__get_address;
        CData/*0:0*/ convert_mif2ver__Vstatic__get_data;
        CData/*0:0*/ convert_mif2ver__Vstatic__display_address;
        CData/*0:0*/ convert_mif2ver__Vstatic__invalid_address;
        CData/*0:0*/ convert_mif2ver__Vstatic__get_start_address;
        CData/*0:0*/ convert_mif2ver__Vstatic__get_end_address;
        CData/*0:0*/ convert_mif2ver__Vstatic__done;
        CData/*0:0*/ convert_mif2ver__Vstatic__error_status;
        CData/*0:0*/ convert_mif2ver__Vstatic__first_rec;
        CData/*0:0*/ convert_mif2ver__Vstatic__last_rec;
        CData/*7:0*/ convert_hex2ver__Vstatic__c;
        CData/*3:0*/ convert_hex2ver__Vstatic__hex;
        CData/*3:0*/ __PVT__convert_hex2ver__Vstatic__tmp_char;
        CData/*0:0*/ convert_hex2ver__Vstatic__done;
        CData/*0:0*/ convert_hex2ver__Vstatic__error_status;
        CData/*0:0*/ convert_hex2ver__Vstatic__first_rec;
        CData/*0:0*/ convert_hex2ver__Vstatic__last_rec;
        CData/*0:0*/ convert_hex2ver__Vstatic__first_normal_record;
        CData/*0:0*/ convert_hex2ver__Vstatic__is_word_address_format;
        IData/*31:0*/ __PVT__ecc_parity__Vstatic__pointer;
        IData/*31:0*/ __PVT__ecc_parity__Vstatic__pointer_max;
        IData/*31:0*/ __PVT__ecc_parity__Vstatic__pointer_min;
        IData/*31:0*/ __PVT__ecc_parity__Vstatic__flag_err;
        IData/*31:0*/ __PVT__ecc_parity__Vstatic__flag;
        IData/*31:0*/ __PVT__ecc_parity__Vstatic__flag_double;
        IData/*31:0*/ __PVT__ecc_parity__Vstatic__flag_triple;
        IData/*31:0*/ __PVT__ecc_parity__Vstatic__flag_single;
        IData/*31:0*/ __PVT__ecc_parity__Vstatic__flag_no_err;
        IData/*31:0*/ __PVT__ecc_parity__Vstatic__flag_uncorr;
        IData/*31:0*/ __PVT__ecc_parity__Vstatic__n;
        IData/*31:0*/ __PVT__ecc_parity__Vstatic__err;
        IData/*31:0*/ __PVT__ecc_parity__Vstatic__found;
        IData/*31:0*/ __PVT__ecc_parity__Vstatic__found_2;
        VlWide<64>/*2047:0*/ convert_mif2ver__Vstatic__buffer;
        VlWide<33>/*1024:0*/ convert_mif2ver__Vstatic__memory_data1;
        VlWide<33>/*1024:0*/ convert_mif2ver__Vstatic__memory_data2;
        IData/*23:0*/ convert_mif2ver__Vstatic__address_radix;
        IData/*23:0*/ convert_mif2ver__Vstatic__data_radix;
        IData/*31:0*/ convert_mif2ver__Vstatic__memory_width;
        IData/*31:0*/ convert_mif2ver__Vstatic__memory_depth;
        IData/*31:0*/ convert_mif2ver__Vstatic__value;
        IData/*31:0*/ convert_mif2ver__Vstatic__ifp;
        IData/*31:0*/ convert_mif2ver__Vstatic__ofp;
        IData/*31:0*/ convert_mif2ver__Vstatic__r;
        IData/*31:0*/ __PVT__convert_mif2ver__Vstatic__r2;
        IData/*31:0*/ convert_mif2ver__Vstatic__i;
        IData/*31:0*/ __PVT__convert_mif2ver__Vstatic__j;
        IData/*31:0*/ __PVT__convert_mif2ver__Vstatic__k;
        IData/*31:0*/ __PVT__convert_mif2ver__Vstatic__m;
        IData/*31:0*/ __PVT__convert_mif2ver__Vstatic__n;
        IData/*31:0*/ convert_mif2ver__Vstatic__negative;
    };
    struct {
        IData/*31:0*/ convert_mif2ver__Vstatic__off_addr;
        IData/*31:0*/ convert_mif2ver__Vstatic__nn;
        IData/*31:0*/ convert_mif2ver__Vstatic__address;
        IData/*31:0*/ convert_mif2ver__Vstatic__tt;
        IData/*31:0*/ convert_mif2ver__Vstatic__cc;
        IData/*31:0*/ convert_mif2ver__Vstatic__aah;
        IData/*31:0*/ convert_mif2ver__Vstatic__aal;
        IData/*31:0*/ convert_mif2ver__Vstatic__dd;
        IData/*31:0*/ convert_mif2ver__Vstatic__sum;
        IData/*31:0*/ convert_mif2ver__Vstatic__start_address;
        IData/*31:0*/ convert_mif2ver__Vstatic__end_address;
        IData/*31:0*/ convert_mif2ver__Vstatic__line_no;
        IData/*31:0*/ convert_mif2ver__Vstatic__character_count;
        IData/*31:0*/ convert_mif2ver__Vstatic__comment_with_percent_found;
        IData/*31:0*/ convert_mif2ver__Vstatic__comment_with_double_minus_found;
        IData/*31:0*/ convert_hex2ver__Vstatic__ifp;
        IData/*31:0*/ convert_hex2ver__Vstatic__ofp;
        IData/*31:0*/ convert_hex2ver__Vstatic__r;
        IData/*31:0*/ __PVT__convert_hex2ver__Vstatic__r2;
        IData/*31:0*/ convert_hex2ver__Vstatic__i;
        IData/*31:0*/ convert_hex2ver__Vstatic__j;
        IData/*31:0*/ convert_hex2ver__Vstatic__k;
        IData/*31:0*/ convert_hex2ver__Vstatic__m;
        IData/*31:0*/ __PVT__convert_hex2ver__Vstatic__n;
        IData/*31:0*/ convert_hex2ver__Vstatic__off_addr;
        IData/*31:0*/ convert_hex2ver__Vstatic__nn;
        IData/*31:0*/ convert_hex2ver__Vstatic__aaaa;
        IData/*31:0*/ convert_hex2ver__Vstatic__aaaa_pre;
        IData/*31:0*/ convert_hex2ver__Vstatic__tt;
        IData/*31:0*/ convert_hex2ver__Vstatic__cc;
        IData/*31:0*/ convert_hex2ver__Vstatic__aah;
        IData/*31:0*/ convert_hex2ver__Vstatic__aal;
        IData/*31:0*/ convert_hex2ver__Vstatic__dd;
        IData/*31:0*/ convert_hex2ver__Vstatic__sum;
        IData/*31:0*/ convert_hex2ver__Vstatic__line_no;
        IData/*31:0*/ convert_hex2ver__Vstatic__divide_factor;
    };

    // INTERNAL VARIABLES
    VHighRiscTb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VHighRiscTb_ALTERA_MF_MEMORY_INITIALIZATION();
    ~VHighRiscTb_ALTERA_MF_MEMORY_INITIALIZATION();
    void ctor(VHighRiscTb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VHighRiscTb_ALTERA_MF_MEMORY_INITIALIZATION);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
