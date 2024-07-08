// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu_ai.h for the primary calling header

#ifndef VERILATED_VALU_AI___024ROOT_H_
#define VERILATED_VALU_AI___024ROOT_H_  // guard

#include "verilated.h"


class Valu_ai__Syms;

class alignas(VL_CACHE_LINE_BYTES) Valu_ai___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(carry_in,0,0);
    VL_IN8(select,3,0);
    VL_IN8(mode,0,0);
    VL_OUT8(carry_out,0,0);
    VL_OUT8(compare,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN16(in_a,15,0);
    VL_IN16(in_b,15,0);
    VL_OUT16(alu_out,15,0);
    IData/*16:0*/ ALU__DOT__temp;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Valu_ai__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valu_ai___024root(Valu_ai__Syms* symsp, const char* v__name);
    ~Valu_ai___024root();
    VL_UNCOPYABLE(Valu_ai___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
