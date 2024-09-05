// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCore.h for the primary calling header

#ifndef VERILATED_VCORE___024ROOT_H_
#define VERILATED_VCORE___024ROOT_H_  // guard

#include "verilated.h"
class VCore___024unit;


class VCore__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCore___024root final : public VerilatedModule {
  public:
    // CELLS
    VCore___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(run,0,0);
    VL_OUT8(en_new_pc,0,0);
    VL_OUT8(done,0,0);
    CData/*0:0*/ Core__DOT__en_c;
    CData/*0:0*/ Core__DOT__en_s;
    CData/*7:0*/ Core__DOT__en_reg;
    CData/*1:0*/ Core__DOT__control__DOT__state;
    CData/*1:0*/ Core__DOT__control__DOT__next_state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(instruction,15,0);
    VL_OUT16(d_out,15,0);
    VL_OUT16(new_pc,11,0);
    SData/*15:0*/ Core__DOT__reg_c;
    SData/*15:0*/ Core__DOT__reg_s;
    SData/*11:0*/ Core__DOT__pc_immediate;
    SData/*15:0*/ Core__DOT__result;
    SData/*15:0*/ Core__DOT__operand;
    IData/*31:0*/ Core__DOT__cpp_result;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*15:0*/, 8> Core__DOT__registers;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VCore__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCore___024root(VCore__Syms* symsp, const char* v__name);
    ~VCore___024root();
    VL_UNCOPYABLE(VCore___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
