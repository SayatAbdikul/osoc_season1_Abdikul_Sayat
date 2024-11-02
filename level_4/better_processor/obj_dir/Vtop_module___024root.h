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
    VL_OUT8(Rx_val,2,0);
    VL_OUT8(Ry_val,2,0);
    VL_OUT8(sel_val,2,0);
    VL_OUT8(branch_val,0,0);
    VL_OUT8(run_val,0,0);
    VL_OUT8(done,0,0);
    CData/*0:0*/ top_module__DOT__en_pc;
    CData/*0:0*/ top_module__DOT__en_new_pc;
    CData/*0:0*/ top_module__DOT__run;
    CData/*0:0*/ top_module__DOT__en_branch;
    CData/*0:0*/ top_module__DOT__en_fetch;
    CData/*0:0*/ top_module__DOT__en_memory;
    CData/*0:0*/ top_module__DOT__branch_res;
    CData/*2:0*/ top_module__DOT__fsm__DOT__state;
    CData/*2:0*/ top_module__DOT__fsm__DOT__next_state;
    CData/*0:0*/ top_module__DOT__core__DOT__en_c;
    CData/*0:0*/ top_module__DOT__core__DOT__en_s;
    CData/*7:0*/ top_module__DOT__core__DOT__en_reg;
    CData/*1:0*/ top_module__DOT__core__DOT__control__DOT__state;
    CData/*1:0*/ top_module__DOT__core__DOT__control__DOT__next_state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(d_out,15,0);
    VL_OUT16(x_val,15,0);
    VL_OUT16(operand_val,15,0);
    VL_OUT16(instruction_val,15,0);
    SData/*15:0*/ top_module__DOT__instruction;
    SData/*15:0*/ top_module__DOT__last_alu_result;
    SData/*11:0*/ top_module__DOT__pc;
    SData/*11:0*/ top_module__DOT__new_pc;
    SData/*11:0*/ top_module__DOT__fetch__DOT__current_pc;
    SData/*15:0*/ top_module__DOT__core__DOT__reg_c;
    SData/*15:0*/ top_module__DOT__core__DOT__reg_s;
    SData/*15:0*/ top_module__DOT__core__DOT__result;
    SData/*15:0*/ top_module__DOT__core__DOT__operand;
    IData/*31:0*/ top_module__DOT__core__DOT__cpp_result;
    IData/*31:0*/ top_module__DOT__core__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*15:0*/, 4096> top_module__DOT__memory__DOT__memory;
    VlUnpacked<SData/*15:0*/, 8> top_module__DOT__core__DOT__registers;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
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
