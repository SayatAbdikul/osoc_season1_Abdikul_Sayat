// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_module.h for the primary calling header

#ifndef VERILATED_VTOP_MODULE___024ROOT_H_
#define VERILATED_VTOP_MODULE___024ROOT_H_  // guard

#include "verilated.h"
class Vtop_module___024unit;


class Vtop_module__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_module___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop_module___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(done,0,0);
    VL_OUT8(select,2,0);
    CData/*0:0*/ top_module__DOT__en_i;
    CData/*0:0*/ top_module__DOT__en_s;
    CData/*0:0*/ top_module__DOT__en_c;
    CData/*0:0*/ top_module__DOT__en_pc;
    CData/*7:0*/ top_module__DOT__en_reg;
    CData/*2:0*/ top_module__DOT__state;
    CData/*2:0*/ top_module__DOT__next_state;
    CData/*7:0*/ top_module__DOT__fetch__DOT__pc;
    CData/*2:0*/ top_module__DOT__u_ControlUnit__DOT__state;
    CData/*2:0*/ top_module__DOT__u_ControlUnit__DOT__next_state;
    CData/*5:0*/ top_module__DOT__u_ControlUnit__DOT__tests;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(result,15,0);
    SData/*15:0*/ top_module__DOT__instruction;
    SData/*15:0*/ top_module__DOT__u_ControlUnit__DOT__reg_s;
    SData/*15:0*/ top_module__DOT__u_ControlUnit__DOT__reg_c;
    SData/*15:0*/ top_module__DOT__u_ControlUnit__DOT__reg_i;
    SData/*15:0*/ top_module__DOT__u_ControlUnit__DOT__result;
    SData/*15:0*/ top_module__DOT__u_ControlUnit__DOT__operand;
    SData/*15:0*/ top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_a;
    SData/*15:0*/ __Vdly__top_module__DOT__instruction;
    IData/*31:0*/ top_module__DOT__u_ControlUnit__DOT__i;
    IData/*31:0*/ top_module__DOT__u_ControlUnit__DOT__cpp_result;
    IData/*31:0*/ __Vfunc_ALU__0__Vfuncout;
    IData/*31:0*/ __Vfunc_ALU__1__Vfuncout;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*15:0*/, 256> top_module__DOT__fetch__DOT__memory;
    VlUnpacked<SData/*15:0*/, 8> top_module__DOT__u_ControlUnit__DOT__registers;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop_module__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_module___024root(Vtop_module__Syms* symsp, const char* v__name);
    ~Vtop_module___024root();
    VL_UNCOPYABLE(Vtop_module___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
