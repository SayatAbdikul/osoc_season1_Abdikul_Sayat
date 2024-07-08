// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_ai.h for the primary calling header

#include "Valu_ai__pch.h"
#include "Valu_ai__Syms.h"
#include "Valu_ai___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_ai___024root___dump_triggers__stl(Valu_ai___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Valu_ai___024root___eval_triggers__stl(Valu_ai___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_ai__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_ai___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu_ai___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
