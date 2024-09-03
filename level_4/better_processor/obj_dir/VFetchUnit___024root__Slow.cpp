// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFetchUnit.h for the primary calling header

#include "VFetchUnit__pch.h"
#include "VFetchUnit__Syms.h"
#include "VFetchUnit___024root.h"

void VFetchUnit___024root___ctor_var_reset(VFetchUnit___024root* vlSelf);

VFetchUnit___024root::VFetchUnit___024root(VFetchUnit__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VFetchUnit___024root___ctor_var_reset(this);
}

void VFetchUnit___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VFetchUnit___024root::~VFetchUnit___024root() {
}
