// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_module.h for the primary calling header

#include "Vtop_module__pch.h"
#include "Vtop_module__Syms.h"
#include "Vtop_module___024root.h"

void Vtop_module___024root___ctor_var_reset(Vtop_module___024root* vlSelf);

Vtop_module___024root::Vtop_module___024root(Vtop_module__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_module___024root___ctor_var_reset(this);
}

void Vtop_module___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_module___024root::~Vtop_module___024root() {
}
