// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_module.h for the primary calling header

#include "Vtop_module__pch.h"
#include "Vtop_module__Syms.h"
#include "Vtop_module___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_module___024root___dump_triggers__act(Vtop_module___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_module___024root___eval_triggers__act(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0)))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_module___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtop_module___024unit____Vdpiimwrap_ALU_TOP____024unit(IData/*31:0*/ q, IData/*31:0*/ r, IData/*31:0*/ w, IData/*31:0*/ &ALU__Vfuncrtn);

VL_INLINE_OPT void Vtop_module___024root___nba_comb__TOP__0(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___nba_comb__TOP__0\n"); );
    // Body
    if (((((((((0U == (IData)(vlSelf->select)) | (1U 
                                                  == (IData)(vlSelf->select))) 
              | (2U == (IData)(vlSelf->select))) | 
             (3U == (IData)(vlSelf->select))) | (4U 
                                                 == (IData)(vlSelf->select))) 
           | (5U == (IData)(vlSelf->select))) | (6U 
                                                 == (IData)(vlSelf->select))) 
         | (7U == (IData)(vlSelf->select)))) {
        vlSelf->top_module__DOT__u_ControlUnit__DOT__result 
            = (0xffffU & ((0U == (IData)(vlSelf->select))
                           ? ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_a) 
                              + (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_b))
                           : ((1U == (IData)(vlSelf->select))
                               ? ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_a) 
                                  - (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_b))
                               : ((2U == (IData)(vlSelf->select))
                                   ? ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_a) 
                                      & (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_b))
                                   : ((3U == (IData)(vlSelf->select))
                                       ? ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_a) 
                                          | (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_b))
                                       : ((4U == (IData)(vlSelf->select))
                                           ? ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_a) 
                                              ^ (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_b))
                                           : ((5U == (IData)(vlSelf->select))
                                               ? VL_SHIFTL_III(16,16,16, (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_a), (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_b))
                                               : ((6U 
                                                   == (IData)(vlSelf->select))
                                                   ? 
                                                  VL_SHIFTR_III(16,16,16, (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_a), (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_b))
                                                   : 
                                                  (((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_a) 
                                                    > (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_b))
                                                    ? 1U
                                                    : 
                                                   (((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_a) 
                                                     < (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_b))
                                                     ? 2U
                                                     : 0U))))))))));
    }
    Vtop_module___024unit____Vdpiimwrap_ALU_TOP____024unit(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_s, 
                                                           vlSelf->top_module__DOT__u_ControlUnit__DOT__registers
                                                           [
                                                           (7U 
                                                            & ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i) 
                                                               >> 0xaU))], vlSelf->select, vlSelf->__Vfunc_ALU__0__Vfuncout);
    vlSelf->top_module__DOT__u_ControlUnit__DOT__cpp_result 
        = vlSelf->__Vfunc_ALU__0__Vfuncout;
}
