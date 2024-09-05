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
    VL_IN8(run,0,0);
    VL_OUT8(done,0,0);
    CData/*0:0*/ top_module__DOT__en_pc;
    CData/*0:0*/ top_module__DOT__core__DOT__en_c;
    CData/*0:0*/ top_module__DOT__core__DOT__en_s;
    CData/*7:0*/ top_module__DOT__core__DOT__en_reg;
    CData/*1:0*/ top_module__DOT__core__DOT__format;
    CData/*1:0*/ top_module__DOT__core__DOT__control__DOT__state;
    CData/*1:0*/ top_module__DOT__core__DOT__control__DOT__next_state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(d_out,15,0);
    SData/*15:0*/ top_module__DOT__instruction;
    SData/*15:0*/ top_module__DOT__core__DOT__reg_c;
    SData/*15:0*/ top_module__DOT__core__DOT__reg_s;
    SData/*11:0*/ top_module__DOT__core__DOT__pc_immediate;
    SData/*15:0*/ top_module__DOT__core__DOT__result;
    SData/*15:0*/ top_module__DOT__core__DOT__operand;
    SData/*11:0*/ top_module__DOT__fetch__DOT__pc;
    IData/*31:0*/ top_module__DOT__core__DOT__cpp_result;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*15:0*/, 8> top_module__DOT__core__DOT__registers;
    VlUnpacked<SData/*15:0*/, 4096> top_module__DOT__fetch__DOT__memory;
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
