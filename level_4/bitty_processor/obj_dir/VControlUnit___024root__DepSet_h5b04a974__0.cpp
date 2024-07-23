// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VControlUnit.h for the primary calling header

#include "VControlUnit__pch.h"
#include "VControlUnit__Syms.h"
#include "VControlUnit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VControlUnit___024root___dump_triggers__act(VControlUnit___024root* vlSelf);
#endif  // VL_DEBUG

void VControlUnit___024root___eval_triggers__act(VControlUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0)))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->reset) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VControlUnit___024root___dump_triggers__act(vlSelf);
    }
#endif
}
