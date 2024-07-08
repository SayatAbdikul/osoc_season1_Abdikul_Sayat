// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_ai.h for the primary calling header

#include "Valu_ai__pch.h"
#include "Valu_ai__Syms.h"
#include "Valu_ai___024root.h"

void Valu_ai___024root___ctor_var_reset(Valu_ai___024root* vlSelf);

Valu_ai___024root::Valu_ai___024root(Valu_ai__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Valu_ai___024root___ctor_var_reset(this);
}

void Valu_ai___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Valu_ai___024root::~Valu_ai___024root() {
}
