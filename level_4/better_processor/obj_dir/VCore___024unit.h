// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCore.h for the primary calling header

#ifndef VERILATED_VCORE___024UNIT_H_
#define VERILATED_VCORE___024UNIT_H_  // guard

#include "verilated.h"


class VCore__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCore___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VCore__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCore___024unit(VCore__Syms* symsp, const char* v__name);
    ~VCore___024unit();
    VL_UNCOPYABLE(VCore___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
