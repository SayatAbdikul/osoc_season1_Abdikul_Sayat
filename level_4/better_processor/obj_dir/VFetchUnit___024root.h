// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFetchUnit.h for the primary calling header

#ifndef VERILATED_VFETCHUNIT___024ROOT_H_
#define VERILATED_VFETCHUNIT___024ROOT_H_  // guard

#include "verilated.h"


class VFetchUnit__Syms;

class alignas(VL_CACHE_LINE_BYTES) VFetchUnit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(en_pc,0,0);
    VL_IN8(en_new_pc,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(new_pc,11,0);
    VL_OUT16(instruction,15,0);
    SData/*11:0*/ FetchUnit__DOT__pc;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*15:0*/, 4096> FetchUnit__DOT__memory;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VFetchUnit__Syms* const vlSymsp;

    // CONSTRUCTORS
    VFetchUnit___024root(VFetchUnit__Syms* symsp, const char* v__name);
    ~VFetchUnit___024root();
    VL_UNCOPYABLE(VFetchUnit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
