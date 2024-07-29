// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_module.h for the primary calling header

#ifndef VERILATED_VTOP_MODULE___024UNIT_H_
#define VERILATED_VTOP_MODULE___024UNIT_H_  // guard

#include "verilated.h"


class Vtop_module__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_module___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtop_module__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_module___024unit(Vtop_module__Syms* symsp, const char* v__name);
    ~Vtop_module___024unit();
    VL_UNCOPYABLE(Vtop_module___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
