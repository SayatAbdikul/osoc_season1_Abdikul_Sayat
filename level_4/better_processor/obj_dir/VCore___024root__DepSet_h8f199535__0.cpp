// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCore.h for the primary calling header

#include "VCore__pch.h"
#include "VCore__Syms.h"
#include "VCore___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__ico(VCore___024root* vlSelf);
#endif  // VL_DEBUG

void VCore___024root___eval_triggers__ico(VCore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCore___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__act(VCore___024root* vlSelf);
#endif  // VL_DEBUG

void VCore___024root___eval_triggers__act(VCore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0)))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCore___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VCore___024unit____Vdpiimwrap_ALU_TOP____024unit(IData/*31:0*/ q, IData/*31:0*/ r, IData/*31:0*/ w, IData/*31:0*/ &ALU__Vfuncrtn);

VL_INLINE_OPT void VCore___024root___nba_sequent__TOP__0(VCore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_ALU__0__Vfuncout;
    __Vfunc_ALU__0__Vfuncout = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->Core__DOT__en_c = 0U;
        vlSelf->Core__DOT__en_s = 0U;
        vlSelf->Core__DOT__en_reg = 0U;
    } else {
        if (vlSelf->Core__DOT__en_s) {
            VCore___024unit____Vdpiimwrap_ALU_TOP____024unit(
                                                             vlSelf->Core__DOT__registers
                                                             [
                                                             (7U 
                                                              & ((IData)(vlSelf->instruction) 
                                                                 >> 0xdU))], 
                                                             vlSelf->Core__DOT__registers
                                                             [
                                                             (7U 
                                                              & ((IData)(vlSelf->instruction) 
                                                                 >> 0xaU))], 
                                                             (7U 
                                                              & ((IData)(vlSelf->instruction) 
                                                                 >> 2U)), __Vfunc_ALU__0__Vfuncout);
            vlSelf->Core__DOT__reg_s = vlSelf->Core__DOT__registers
                [(7U & ((IData)(vlSelf->instruction) 
                        >> 0xdU))];
            vlSelf->Core__DOT__cpp_result = __Vfunc_ALU__0__Vfuncout;
        }
        if (vlSelf->Core__DOT__en_c) {
            if (VL_UNLIKELY((vlSelf->Core__DOT__cpp_result 
                             == (IData)(vlSelf->Core__DOT__result)))) {
                VL_WRITEF_NX("cpp_result %11d\nverilog result%5#\n",0,
                             32,vlSelf->Core__DOT__cpp_result,
                             16,(IData)(vlSelf->Core__DOT__result));
            }
            vlSelf->Core__DOT__reg_c = vlSelf->Core__DOT__result;
        }
        if ((1U & ((IData)(vlSelf->Core__DOT__en_reg) 
                   >> (7U & ((IData)(vlSelf->instruction) 
                             >> 0xdU))))) {
            vlSelf->Core__DOT__registers[(7U & ((IData)(vlSelf->instruction) 
                                                >> 0xdU))] 
                = vlSelf->Core__DOT__reg_c;
        }
    }
    vlSelf->Core__DOT__control__DOT__state = ((IData)(vlSelf->reset)
                                               ? 0U
                                               : (IData)(vlSelf->Core__DOT__control__DOT__next_state));
    vlSelf->Core__DOT____Vcellinp__alu__in_b = vlSelf->Core__DOT__registers
        [(7U & ((IData)(vlSelf->instruction) >> 0xaU))];
    vlSelf->Core__DOT__result = 0U;
    if (((((((((0U == (7U & ((IData)(vlSelf->instruction) 
                             >> 2U))) | (1U == (7U 
                                                & ((IData)(vlSelf->instruction) 
                                                   >> 2U)))) 
              | (2U == (7U & ((IData)(vlSelf->instruction) 
                              >> 2U)))) | (3U == (7U 
                                                  & ((IData)(vlSelf->instruction) 
                                                     >> 2U)))) 
            | (4U == (7U & ((IData)(vlSelf->instruction) 
                            >> 2U)))) | (5U == (7U 
                                                & ((IData)(vlSelf->instruction) 
                                                   >> 2U)))) 
          | (6U == (7U & ((IData)(vlSelf->instruction) 
                          >> 2U)))) | (7U == (7U & 
                                              ((IData)(vlSelf->instruction) 
                                               >> 2U))))) {
        vlSelf->Core__DOT__result = (0xffffU & ((0U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->instruction) 
                                                     >> 2U)))
                                                 ? 
                                                ((IData)(vlSelf->Core__DOT__reg_s) 
                                                 + (IData)(vlSelf->Core__DOT____Vcellinp__alu__in_b))
                                                 : 
                                                ((1U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->instruction) 
                                                      >> 2U)))
                                                  ? 
                                                 ((IData)(vlSelf->Core__DOT__reg_s) 
                                                  - (IData)(vlSelf->Core__DOT____Vcellinp__alu__in_b))
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->instruction) 
                                                       >> 2U)))
                                                   ? 
                                                  ((IData)(vlSelf->Core__DOT__reg_s) 
                                                   & (IData)(vlSelf->Core__DOT____Vcellinp__alu__in_b))
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->instruction) 
                                                        >> 2U)))
                                                    ? 
                                                   ((IData)(vlSelf->Core__DOT__reg_s) 
                                                    | (IData)(vlSelf->Core__DOT____Vcellinp__alu__in_b))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->instruction) 
                                                         >> 2U)))
                                                     ? 
                                                    ((IData)(vlSelf->Core__DOT__reg_s) 
                                                     ^ (IData)(vlSelf->Core__DOT____Vcellinp__alu__in_b))
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->instruction) 
                                                          >> 2U)))
                                                      ? 
                                                     VL_SHIFTL_III(16,16,16, (IData)(vlSelf->Core__DOT__reg_s), (IData)(vlSelf->Core__DOT____Vcellinp__alu__in_b))
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelf->instruction) 
                                                           >> 2U)))
                                                       ? 
                                                      VL_SHIFTR_III(16,16,16, (IData)(vlSelf->Core__DOT__reg_s), (IData)(vlSelf->Core__DOT____Vcellinp__alu__in_b))
                                                       : 
                                                      (((IData)(vlSelf->Core__DOT__reg_s) 
                                                        > (IData)(vlSelf->Core__DOT____Vcellinp__alu__in_b))
                                                        ? 1U
                                                        : 
                                                       (((IData)(vlSelf->Core__DOT__reg_s) 
                                                         < (IData)(vlSelf->Core__DOT____Vcellinp__alu__in_b))
                                                         ? 2U
                                                         : 0U))))))))));
    }
    vlSelf->done = 0U;
    vlSelf->Core__DOT__en_s = 0U;
    if ((0U == (IData)(vlSelf->Core__DOT__control__DOT__state))) {
        vlSelf->Core__DOT__control__DOT__next_state = 1U;
        vlSelf->Core__DOT__en_s = 1U;
    } else {
        vlSelf->Core__DOT__control__DOT__next_state 
            = ((1U == (IData)(vlSelf->Core__DOT__control__DOT__state))
                ? 2U : 0U);
    }
    vlSelf->Core__DOT__en_c = 0U;
    vlSelf->Core__DOT__en_reg = 0U;
    if ((0U != (IData)(vlSelf->Core__DOT__control__DOT__state))) {
        if ((1U != (IData)(vlSelf->Core__DOT__control__DOT__state))) {
            if ((2U == (IData)(vlSelf->Core__DOT__control__DOT__state))) {
                vlSelf->done = 1U;
                vlSelf->Core__DOT__en_reg = ((IData)(vlSelf->Core__DOT__en_reg) 
                                             | (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & ((IData)(vlSelf->instruction) 
                                                       >> 0xdU)))));
            }
        }
        if ((1U == (IData)(vlSelf->Core__DOT__control__DOT__state))) {
            vlSelf->Core__DOT__en_c = 1U;
        }
    }
    vlSelf->d_out = vlSelf->Core__DOT__result;
}
