// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VHighRiscTb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VHighRiscTb::VHighRiscTb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VHighRiscTb__Syms(contextp(), _vcname__, this)}
    , __PVT__std{vlSymsp->TOP.__PVT__std}
    , __PVT__assertionmath{vlSymsp->TOP.__PVT__assertionmath}
    , __PVT__HighRiscTb__DOT__uut__DOT__Ibus{vlSymsp->TOP.__PVT__HighRiscTb__DOT__uut__DOT__Ibus}
    , __PVT__HighRiscTb__DOT__uut__DOT__Dbus{vlSymsp->TOP.__PVT__HighRiscTb__DOT__uut__DOT__Dbus}
    , __PVT__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev{vlSymsp->TOP.__PVT__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev}
    , __PVT__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem{vlSymsp->TOP.__PVT__HighRiscTb__DOT__uut__DOT__iDataMemory__DOT__iRAM__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem}
    , __PVT__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev{vlSymsp->TOP.__PVT__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__dev}
    , __PVT__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem{vlSymsp->TOP.__PVT__HighRiscTb__DOT__uut__DOT__iProgramMemory__DOT__iRom__DOT__altsyncram_component__DOT__m_default__DOT__altsyncram_inst__DOT__mem}
    , std__03a__03asemaphore__Vclpkg{vlSymsp->TOP.std__03a__03asemaphore__Vclpkg}
    , std__03a__03aprocess__Vclpkg{vlSymsp->TOP.std__03a__03aprocess__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VHighRiscTb::VHighRiscTb(const char* _vcname__)
    : VHighRiscTb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VHighRiscTb::~VHighRiscTb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VHighRiscTb___024root___eval_debug_assertions(VHighRiscTb___024root* vlSelf);
#endif  // VL_DEBUG
void VHighRiscTb___024root___eval_static(VHighRiscTb___024root* vlSelf);
void VHighRiscTb___024root___eval_initial(VHighRiscTb___024root* vlSelf);
void VHighRiscTb___024root___eval_settle(VHighRiscTb___024root* vlSelf);
void VHighRiscTb___024root___eval(VHighRiscTb___024root* vlSelf);

void VHighRiscTb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VHighRiscTb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VHighRiscTb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VHighRiscTb___024root___eval_static(&(vlSymsp->TOP));
        VHighRiscTb___024root___eval_initial(&(vlSymsp->TOP));
        VHighRiscTb___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VHighRiscTb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VHighRiscTb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t VHighRiscTb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VHighRiscTb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VHighRiscTb___024root___eval_final(VHighRiscTb___024root* vlSelf);

VL_ATTR_COLD void VHighRiscTb::final() {
    contextp()->executingFinal(true);
    VHighRiscTb___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VHighRiscTb::hierName() const { return vlSymsp->name(); }
const char* VHighRiscTb::modelName() const { return "VHighRiscTb"; }
unsigned VHighRiscTb::threads() const { return 1; }
void VHighRiscTb::prepareClone() const { contextp()->prepareClone(); }
void VHighRiscTb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VHighRiscTb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void VHighRiscTb___024root__trace_decl_types(VerilatedVcd* tracep);

void VHighRiscTb___024root__trace_init_top(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VHighRiscTb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VHighRiscTb___024root*>(voidSelf);
    VHighRiscTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    VHighRiscTb___024root__trace_decl_types(tracep);
    VHighRiscTb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VHighRiscTb___024root__trace_register(VHighRiscTb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VHighRiscTb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VHighRiscTb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 1235);
    VHighRiscTb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
