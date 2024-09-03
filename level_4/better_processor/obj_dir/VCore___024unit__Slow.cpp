// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCore.h for the primary calling header

#include "VCore__pch.h"
#include "VCore__Syms.h"
#include "VCore___024unit.h"

void VCore___024unit___ctor_var_reset(VCore___024unit* vlSelf);

VCore___024unit::VCore___024unit(VCore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCore___024unit___ctor_var_reset(this);
}

void VCore___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCore___024unit::~VCore___024unit() {
}
