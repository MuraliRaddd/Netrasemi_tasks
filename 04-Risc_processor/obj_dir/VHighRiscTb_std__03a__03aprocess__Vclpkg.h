// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VHighRiscTb.h for the primary calling header

#ifndef VERILATED_VHIGHRISCTB_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VHIGHRISCTB_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class VHighRiscTb_std__03a__03aprocess;


class VHighRiscTb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VHighRiscTb_std__03a__03aprocess__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VHighRiscTb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VHighRiscTb_std__03a__03aprocess__Vclpkg();
    ~VHighRiscTb_std__03a__03aprocess__Vclpkg();
    void ctor(VHighRiscTb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VHighRiscTb_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_killQueue(VHighRiscTb__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VHighRiscTb_std__03a__03aprocess>> &processQueue);
    void __VnoInFunc_self(VlProcessRef vlProcess, VHighRiscTb__Syms* __restrict vlSymsp, VlClassRef<VHighRiscTb_std__03a__03aprocess> &self__Vfuncrtn);
};


class VHighRiscTb__Syms;

class VHighRiscTb_std__03a__03aprocess : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlProcessRef m_process;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::process"; }
    VlClass* clone() const { return new VHighRiscTb_std__03a__03aprocess(*this); }
    VlCoroutine __VnoInFunc_await(VHighRiscTb__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_randstate(VHighRiscTb__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn);
    void __VnoInFunc_kill(VHighRiscTb__Syms* __restrict vlSymsp);
    void __VnoInFunc_resume(VHighRiscTb__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_randstate(VHighRiscTb__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_status(VHighRiscTb__Syms* __restrict vlSymsp, IData/*31:0*/ s);
    void __VnoInFunc_status(VHighRiscTb__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn);
    void __VnoInFunc_suspend(VHighRiscTb__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VHighRiscTb__Syms* __restrict vlSymsp);
  public:
    VHighRiscTb_std__03a__03aprocess() = default;
    void init(VHighRiscTb__Syms* __restrict vlSymsp);
    ~VHighRiscTb_std__03a__03aprocess() {}
};



//*** Below code from `systemc in Verilog file
// From `systemc at /home/murali-radhakrishnan/Documents/Netrasemi/oss-cad-suite/share/verilator/include/verilated_std.sv:211:21

template<> template<>
inline bool VlClassRef<VHighRiscTb_std__03a__03aprocess>::operator==(const VlClassRef<VHighRiscTb_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return true;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->m_process == rhs.m_objp->m_process;
};
template<> template<>
inline bool VlClassRef<VHighRiscTb_std__03a__03aprocess>::operator!=(const VlClassRef<VHighRiscTb_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return true;
    return m_objp->m_process != rhs.m_objp->m_process;
};
template<> template<>
inline bool VlClassRef<VHighRiscTb_std__03a__03aprocess>::operator<(const VlClassRef<VHighRiscTb_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->m_process < rhs.m_objp->m_process;
};
//*** Above code from `systemc in Verilog file


#endif  // guard
