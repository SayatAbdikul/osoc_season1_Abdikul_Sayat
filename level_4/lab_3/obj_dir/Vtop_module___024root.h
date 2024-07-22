// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_module.h for the primary calling header

#ifndef VERILATED_VTOP_MODULE___024ROOT_H_
#define VERILATED_VTOP_MODULE___024ROOT_H_  // guard

#include "verilated.h"


class Vtop_module__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_module___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(done,0,0);
    CData/*0:0*/ top_module__DOT__en_i;
    CData/*0:0*/ top_module__DOT__en_s;
    CData/*0:0*/ top_module__DOT__en_c;
    CData/*2:0*/ top_module__DOT__u_ControlUnit__DOT__state;
    CData/*2:0*/ top_module__DOT__u_ControlUnit__DOT__next_state;
    CData/*2:0*/ top_module__DOT__u_ControlUnit__DOT__Rx;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(instruction,15,0);
    VL_OUT16(result,15,0);
    SData/*15:0*/ top_module__DOT__u_ControlUnit__DOT__reg_s;
    SData/*15:0*/ top_module__DOT__u_ControlUnit__DOT__reg_c;
    SData/*15:0*/ top_module__DOT__u_ControlUnit__DOT__reg_i;
    SData/*15:0*/ top_module__DOT__u_ControlUnit__DOT__y;
    SData/*15:0*/ top_module__DOT__u_ControlUnit__DOT__result;
    SData/*15:0*/ top_module__DOT__u_ControlUnit__DOT__alu__DOT__alu_result;
    IData/*31:0*/ top_module__DOT__u_ControlUnit__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*15:0*/, 8> top_module__DOT__u_ControlUnit__DOT__registers;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

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
