// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VControlUnit.h for the primary calling header

#ifndef VERILATED_VCONTROLUNIT___024ROOT_H_
#define VERILATED_VCONTROLUNIT___024ROOT_H_  // guard

#include "verilated.h"


class VControlUnit__Syms;

class alignas(VL_CACHE_LINE_BYTES) VControlUnit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(en_s,0,0);
    VL_IN8(en_c,0,0);
    VL_IN8(en_i,0,0);
    VL_IN8(en_0,0,0);
    VL_IN8(en_1,0,0);
    VL_IN8(en_2,0,0);
    VL_IN8(en_3,0,0);
    VL_IN8(en_4,0,0);
    VL_IN8(en_5,0,0);
    VL_IN8(en_6,0,0);
    VL_IN8(en_7,0,0);
    VL_OUT8(done,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(instruction,15,0);
    VL_OUT16(d_out,15,0);
    SData/*15:0*/ ControlUnit__DOT__d_in;
    SData/*15:0*/ ControlUnit__DOT__reg_s;
    SData/*15:0*/ ControlUnit__DOT__reg_c;
    SData/*15:0*/ ControlUnit__DOT__result;
    SData/*15:0*/ ControlUnit__DOT__reg_i;
    SData/*15:0*/ ControlUnit__DOT__x;
    SData/*15:0*/ ControlUnit__DOT__y;
    SData/*15:0*/ ControlUnit__DOT__mX__DOT__Reg0;
    SData/*15:0*/ ControlUnit__DOT__mX__DOT__Reg1;
    SData/*15:0*/ ControlUnit__DOT__mX__DOT__Reg2;
    SData/*15:0*/ ControlUnit__DOT__mX__DOT__Reg3;
    SData/*15:0*/ ControlUnit__DOT__mX__DOT__Reg4;
    SData/*15:0*/ ControlUnit__DOT__mX__DOT__Reg5;
    SData/*15:0*/ ControlUnit__DOT__mX__DOT__Reg6;
    SData/*15:0*/ ControlUnit__DOT__mX__DOT__Reg7;
    SData/*15:0*/ ControlUnit__DOT__mY__DOT__Reg0;
    SData/*15:0*/ ControlUnit__DOT__mY__DOT__Reg1;
    SData/*15:0*/ ControlUnit__DOT__mY__DOT__Reg2;
    SData/*15:0*/ ControlUnit__DOT__mY__DOT__Reg3;
    SData/*15:0*/ ControlUnit__DOT__mY__DOT__Reg4;
    SData/*15:0*/ ControlUnit__DOT__mY__DOT__Reg5;
    SData/*15:0*/ ControlUnit__DOT__mY__DOT__Reg6;
    SData/*15:0*/ ControlUnit__DOT__mY__DOT__Reg7;
    SData/*15:0*/ ControlUnit__DOT__alu__DOT__alu_result;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VControlUnit__Syms* const vlSymsp;

    // CONSTRUCTORS
    VControlUnit___024root(VControlUnit__Syms* symsp, const char* v__name);
    ~VControlUnit___024root();
    VL_UNCOPYABLE(VControlUnit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
