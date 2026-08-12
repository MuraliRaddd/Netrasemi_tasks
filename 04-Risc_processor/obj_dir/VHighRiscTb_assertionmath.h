// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VHighRiscTb.h for the primary calling header

#ifndef VERILATED_VHIGHRISCTB_ASSERTIONMATH_H_
#define VERILATED_VHIGHRISCTB_ASSERTIONMATH_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "VHighRiscTb_assertionmath.h"


class VHighRiscTb__Syms;
struct VHighRiscTb_expFlags_t__struct__0 {
    SData/*15:0*/ __PVT__out;
    CData/*0:0*/ __PVT__Overflow;
    CData/*0:0*/ __PVT__Parity;
    CData/*0:0*/ __PVT__Negative;
    CData/*0:0*/ __PVT__Zero;
    CData/*0:0*/ __PVT__Carry;

    bool operator==(const VHighRiscTb_expFlags_t__struct__0& rhs) const {
        return __PVT__out == rhs.__PVT__out
            && __PVT__Overflow == rhs.__PVT__Overflow
            && __PVT__Parity == rhs.__PVT__Parity
            && __PVT__Negative == rhs.__PVT__Negative
            && __PVT__Zero == rhs.__PVT__Zero
            && __PVT__Carry == rhs.__PVT__Carry;
    }
    bool operator!=(const VHighRiscTb_expFlags_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const VHighRiscTb_expFlags_t__struct__0& rhs) const {
        if (__PVT__out < rhs.__PVT__out) return true;
        if (rhs.__PVT__out < __PVT__out) return false;
        if (__PVT__Overflow < rhs.__PVT__Overflow) return true;
        if (rhs.__PVT__Overflow < __PVT__Overflow) return false;
        if (__PVT__Parity < rhs.__PVT__Parity) return true;
        if (rhs.__PVT__Parity < __PVT__Parity) return false;
        if (__PVT__Negative < rhs.__PVT__Negative) return true;
        if (rhs.__PVT__Negative < __PVT__Negative) return false;
        if (__PVT__Zero < rhs.__PVT__Zero) return true;
        if (rhs.__PVT__Zero < __PVT__Zero) return false;
        if (__PVT__Carry < rhs.__PVT__Carry) return true;
        if (rhs.__PVT__Carry < __PVT__Carry) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<VHighRiscTb_expFlags_t__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) VHighRiscTb_assertionmath final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ temp_carry;
    CData/*0:0*/ parity_sum;
    SData/*15:0*/ __PVT__nInSrc;
    IData/*31:0*/ __PVT__full_product;
    VHighRiscTb_expFlags_t__struct__0 expFlags;

    // INTERNAL VARIABLES
    VHighRiscTb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VHighRiscTb_assertionmath();
    ~VHighRiscTb_assertionmath();
    void ctor(VHighRiscTb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VHighRiscTb_assertionmath);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
