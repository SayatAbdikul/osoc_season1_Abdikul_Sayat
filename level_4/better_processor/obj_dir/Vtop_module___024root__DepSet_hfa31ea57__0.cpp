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

VL_INLINE_OPT void Vtop_module___024root___nba_sequent__TOP__0(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_ALU__0__Vfuncout;
    __Vfunc_ALU__0__Vfuncout = 0;
    // Body
    vlSelf->__Vdly__top_module__DOT__fetch__DOT__pc 
        = vlSelf->top_module__DOT__fetch__DOT__pc;
    if (vlSelf->reset) {
        vlSelf->top_module__DOT__core__DOT__en_c = 0U;
        vlSelf->top_module__DOT__core__DOT__en_s = 0U;
        vlSelf->top_module__DOT__core__DOT__en_reg = 0U;
    } else {
        if (vlSelf->top_module__DOT__core__DOT__en_s) {
            if ((1U == (3U & (IData)(vlSelf->top_module__DOT__instruction)))) {
                vlSelf->top_module__DOT__core__DOT__operand 
                    = (0xffU & ((IData)(vlSelf->top_module__DOT__instruction) 
                                >> 5U));
            }
            vlSelf->top_module__DOT__core__DOT__reg_s 
                = vlSelf->top_module__DOT__core__DOT__registers
                [(7U & ((IData)(vlSelf->top_module__DOT__instruction) 
                        >> 0xdU))];
            Vtop_module___024unit____Vdpiimwrap_ALU_TOP____024unit(
                                                                   vlSelf->top_module__DOT__core__DOT__registers
                                                                   [
                                                                   (7U 
                                                                    & ((IData)(vlSelf->top_module__DOT__instruction) 
                                                                       >> 0xdU))], vlSelf->top_module__DOT__core__DOT__operand, 
                                                                   (7U 
                                                                    & ((IData)(vlSelf->top_module__DOT__instruction) 
                                                                       >> 2U)), __Vfunc_ALU__0__Vfuncout);
            vlSelf->top_module__DOT__core__DOT__cpp_result 
                = __Vfunc_ALU__0__Vfuncout;
        }
        if (VL_UNLIKELY(vlSelf->top_module__DOT__core__DOT__en_c)) {
            vlSelf->top_module__DOT__core__DOT__reg_c 
                = vlSelf->top_module__DOT__core__DOT__result;
            if (VL_UNLIKELY((vlSelf->top_module__DOT__core__DOT__cpp_result 
                             != (IData)(vlSelf->top_module__DOT__core__DOT__result)))) {
                VL_WRITEF_NX("cpp_result %11d\nverilog result%5#\n",0,
                             32,vlSelf->top_module__DOT__core__DOT__cpp_result,
                             16,(IData)(vlSelf->top_module__DOT__core__DOT__result));
            }
            VL_WRITEF_NX("cpp_result %11d and verilog result %5#\n",0,
                         32,vlSelf->top_module__DOT__core__DOT__cpp_result,
                         16,(IData)(vlSelf->top_module__DOT__core__DOT__result));
        }
        if ((1U & ((IData)(vlSelf->top_module__DOT__core__DOT__en_reg) 
                   >> (7U & ((IData)(vlSelf->top_module__DOT__instruction) 
                             >> 0xdU))))) {
            vlSelf->top_module__DOT__core__DOT__registers[(7U 
                                                           & ((IData)(vlSelf->top_module__DOT__instruction) 
                                                              >> 0xdU))] 
                = vlSelf->top_module__DOT__core__DOT__reg_c;
        }
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__top_module__DOT__fetch__DOT__pc = 0U;
        vlSelf->top_module__DOT__core__DOT__control__DOT__state = 0U;
    } else {
        if (vlSelf->top_module__DOT__en_pc) {
            vlSelf->__Vdly__top_module__DOT__fetch__DOT__pc 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->top_module__DOT__fetch__DOT__pc)));
        }
        vlSelf->top_module__DOT__core__DOT__control__DOT__state 
            = vlSelf->top_module__DOT__core__DOT__control__DOT__next_state;
    }
    vlSelf->top_module__DOT__core__DOT__en_s = 0U;
    if ((0U == (IData)(vlSelf->top_module__DOT__core__DOT__control__DOT__state))) {
        vlSelf->top_module__DOT__core__DOT__control__DOT__next_state = 1U;
        vlSelf->top_module__DOT__core__DOT__en_s = 1U;
    } else {
        vlSelf->top_module__DOT__core__DOT__control__DOT__next_state 
            = ((1U == (IData)(vlSelf->top_module__DOT__core__DOT__control__DOT__state))
                ? 2U : 0U);
    }
    vlSelf->top_module__DOT__core__DOT__en_c = 0U;
    if ((0U != (IData)(vlSelf->top_module__DOT__core__DOT__control__DOT__state))) {
        if ((1U == (IData)(vlSelf->top_module__DOT__core__DOT__control__DOT__state))) {
            vlSelf->top_module__DOT__core__DOT__en_c = 1U;
        }
    }
}
