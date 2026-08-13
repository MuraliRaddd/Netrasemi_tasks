// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VHighRiscTb.h for the primary calling header

#ifndef VERILATED_VHIGHRISCTB___024ROOT_H_
#define VERILATED_VHIGHRISCTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "VHighRiscTb_assertionmath.h"
class VHighRiscTb_Bus__B2_P2;
class VHighRiscTb___024unit;


class VHighRiscTb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VHighRiscTb___024root final {
  public:
    // CELLS
    VHighRiscTb___024unit* __PVT____024unit;
    VHighRiscTb_assertionmath* __PVT__assertionmath;
    VHighRiscTb_Bus__B2_P2* __PVT__HighRiscTb__DOT__uut__DOT__Ibus;
    VHighRiscTb_Bus__B2_P2* __PVT__HighRiscTb__DOT__uut__DOT__Dbus;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ HighRiscTb__DOT__CLOCK_50;
        CData/*3:0*/ HighRiscTb__DOT__KEY;
        CData/*0:0*/ HighRiscTb__DOT__tbClk;
        CData/*0:0*/ HighRiscTb__DOT__uut__DOT__VGA_BLANK_N;
        CData/*0:0*/ HighRiscTb__DOT__uut__DOT__VGA_SYNC_N;
        CData/*0:0*/ HighRiscTb__DOT__uut__DOT__VGA_HS;
        CData/*0:0*/ HighRiscTb__DOT__uut__DOT__VGA_VS;
        CData/*4:0*/ HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags;
        CData/*0:0*/ HighRiscTb__DOT__uut__DOT__iProcesor__DOT__MemWriteEnable;
        CData/*4:0*/ HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iAluMuxB__DOT__Flags;
        CData/*4:0*/ HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iAluMuxA__DOT__Flags;
        CData/*0:0*/ HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__Reset;
        CData/*0:0*/ HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__OffsetEnable;
        CData/*0:0*/ HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__WriteEnable;
        CData/*4:0*/ HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutFlags;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_5;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_6;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_27;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_43;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_50;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_51;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_52;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_53;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_54;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_55;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_56;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_57;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_58;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_59;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_60;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_61;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_62;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_63;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_64;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_65;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_66;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_67;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_68;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_69;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_70;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_71;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_72;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_73;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_74;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_75;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_76;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_77;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_78;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_79;
        CData/*4:0*/ __Vdly__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__Flags;
        CData/*0:0*/ __Vdly__HighRiscTb__DOT__uut__DOT__VGA_BLANK_N;
        CData/*0:0*/ __Vdly__HighRiscTb__DOT__uut__DOT__VGA_SYNC_N;
        CData/*0:0*/ __Vdly__HighRiscTb__DOT__uut__DOT__VGA_HS;
        CData/*0:0*/ __Vdly__HighRiscTb__DOT__uut__DOT__VGA_VS;
        CData/*0:0*/ __VdlySet__HighRiscTb__DOT__uut__DOT__iVga__DOT__VgaRam__v0;
        CData/*5:0*/ __VdlyDim0__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers__v0;
        CData/*0:0*/ __VdlySet__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers__v0;
        CData/*0:0*/ __VdlySet__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__RamBlock__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__HighRiscTb__DOT__CLOCK_50__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__Reset__0;
        CData/*0:0*/ __Vtrigprevexpr_hab8c834f__1;
        CData/*0:0*/ __VactPhaseResult;
    };
    struct {
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        SData/*9:0*/ HighRiscTb__DOT__SW;
        SData/*15:0*/ HighRiscTb__DOT__AddrAssert;
        SData/*15:0*/ HighRiscTb__DOT__ClockCount;
        SData/*15:0*/ HighRiscTb__DOT__SWRead1;
        SData/*15:0*/ HighRiscTb__DOT__SWRead2;
        SData/*15:0*/ HighRiscTb__DOT__OutVal;
        SData/*15:0*/ HighRiscTb__DOT__uut__DOT__LEDs;
        SData/*15:0*/ HighRiscTb__DOT__uut__DOT__Addr;
        SData/*15:0*/ HighRiscTb__DOT__uut__DOT__SlaveReadData3;
        SData/*15:0*/ HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress;
        SData/*15:0*/ HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction;
        SData/*15:0*/ HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__LoadValue;
        SData/*15:0*/ HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iPC__DOT__nextCount;
        SData/*15:0*/ HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__nextWriteA;
        SData/*15:0*/ HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InSrc;
        SData/*15:0*/ HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__InDest;
        SData/*15:0*/ HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iALU__DOT__OutDest;
        SData/*15:0*/ HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair;
        SData/*10:0*/ HighRiscTb__DOT__uut__DOT__iVga__DOT__nextX;
        SData/*9:0*/ HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY;
        SData/*10:0*/ HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__hCount;
        SData/*9:0*/ HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__vCount;
        SData/*15:0*/ HighRiscTb__DOT__uut__DOT__IMux__DOT__SlaveData2;
        SData/*15:0*/ HighRiscTb__DOT__uut__DOT__IMux__DOT__SlaveData3;
        SData/*15:0*/ HighRiscTb__DOT__check_1__DOT__DataAssertVal;
        SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_0;
        SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_1;
        SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_2;
        SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_3;
        SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_7;
        SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_8;
        SData/*15:0*/ __Vdly__HighRiscTb__DOT__SWRead1;
        SData/*15:0*/ __VdlyMask__HighRiscTb__DOT__SWRead1;
        SData/*15:0*/ __Vdly__HighRiscTb__DOT__SWRead2;
        SData/*15:0*/ __VdlyMask__HighRiscTb__DOT__SWRead2;
        SData/*15:0*/ __Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__PixelPair;
        SData/*15:0*/ __Vdly__HighRiscTb__DOT__uut__DOT__LEDs;
        SData/*15:0*/ __Vdly__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__PcAddress;
        SData/*10:0*/ __Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__nextX;
        SData/*10:0*/ __Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__hCount;
        SData/*9:0*/ __Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__nextY;
        SData/*9:0*/ __Vdly__HighRiscTb__DOT__uut__DOT__iVga__DOT__iControl__DOT__vCount;
        SData/*15:0*/ __VdlyVal__HighRiscTb__DOT__uut__DOT__iVga__DOT__VgaRam__v0;
        SData/*13:0*/ __VdlyDim0__HighRiscTb__DOT__uut__DOT__iVga__DOT__VgaRam__v0;
        SData/*15:0*/ __VdlyVal__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers__v0;
        SData/*15:0*/ __VdlyVal__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__RamBlock__v0;
        SData/*13:0*/ __VdlyDim0__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__RamBlock__v0;
        SData/*15:0*/ __Vsampled_TOP__HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iDecoder__DOT__Instruction;
        SData/*15:0*/ __Vsampled_TOP__HighRiscTb__DOT__check_1__DOT__DataAssertVal;
        SData/*15:0*/ __Vtrigprevexpr___TOP__HighRiscTb__DOT__ClockCount__0;
        SData/*15:0*/ __Vtrigprevexpr___TOP__HighRiscTb__DOT__OutVal__0;
        SData/*9:0*/ __Vtrigprevexpr___TOP__HighRiscTb__DOT__SW__0;
        SData/*15:0*/ __Vtrigprevexpr___TOP__HighRiscTb__DOT__SWRead1__0;
        SData/*15:0*/ __Vtrigprevexpr___TOP__HighRiscTb__DOT__SWRead2__0;
        SData/*15:0*/ __Vtrigprevexpr___TOP__HighRiscTb__DOT__check_1__DOT__DataAssertVal__0;
        IData/*31:0*/ HighRiscTb__DOT____VlemExpr_1;
        IData/*31:0*/ HighRiscTb__DOT____VlemExpr_0;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_4;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        VlUnpacked<SData/*15:0*/, 64> HighRiscTb__DOT__uut__DOT__iProcesor__DOT__iRF__DOT__registers;
    };
    struct {
        VlUnpacked<SData/*15:0*/, 16384> HighRiscTb__DOT__uut__DOT__iVga__DOT__VgaRam;
        VlUnpacked<SData/*15:0*/, 16384> HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__RamBlock;
        VlUnpacked<SData/*15:0*/, 16384> HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__RomBlock;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 3> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 2> __VactTriggeredAcc;
        VlUnpacked<CData/*0:0*/, 16> __Vtrigprevexpr___TOP____024unit____Venumtab_enum_valid15__0;
        VlUnpacked<QData/*63:0*/, 2> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    };
    VHighRiscTb_expFlags_t__struct__0 HighRiscTb__DOT__check_1__DOT__DataVal;
    VHighRiscTb_expFlags_t__struct__0 __Vsampled_TOP__HighRiscTb__DOT__check_1__DOT__DataVal;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h3b3ae47a__0;
    VlUnpacked<std::string, 16> __Vtrigprevexpr___TOP____024unit____Venumtab_enum_name15__0;

    // INTERNAL VARIABLES
    VHighRiscTb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VHighRiscTb___024root(VHighRiscTb__Syms* symsp, const char* namep);
    ~VHighRiscTb___024root();
    VL_UNCOPYABLE(VHighRiscTb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
