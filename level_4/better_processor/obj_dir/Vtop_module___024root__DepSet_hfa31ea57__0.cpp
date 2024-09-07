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
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0)))));
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
    SData/*11:0*/ __Vdly__top_module__DOT__fetch__DOT__pc;
    __Vdly__top_module__DOT__fetch__DOT__pc = 0;
    // Body
    __Vdly__top_module__DOT__fetch__DOT__pc = vlSelf->top_module__DOT__fetch__DOT__pc;
    vlSelf->__Vdly__top_module__DOT__instruction = vlSelf->top_module__DOT__instruction;
    if (vlSelf->reset) {
        vlSelf->top_module__DOT__core__DOT__en_c = 0U;
        vlSelf->top_module__DOT__core__DOT__en_s = 0U;
        vlSelf->top_module__DOT__core__DOT__en_reg = 0U;
    } else if ((2U != (3U & (IData)(vlSelf->top_module__DOT__instruction)))) {
        if (vlSelf->top_module__DOT__core__DOT__en_s) {
            vlSelf->top_module__DOT__core__DOT__reg_s 
                = vlSelf->top_module__DOT__core__DOT__registers
                [(7U & ((IData)(vlSelf->top_module__DOT__instruction) 
                        >> 0xdU))];
            if ((1U == (3U & (IData)(vlSelf->top_module__DOT__instruction)))) {
                vlSelf->top_module__DOT__core__DOT__operand 
                    = (0xffU & ((IData)(vlSelf->top_module__DOT__instruction) 
                                >> 5U));
            }
        }
        if (VL_UNLIKELY(vlSelf->top_module__DOT__core__DOT__en_c)) {
            Vtop_module___024unit____Vdpiimwrap_ALU_TOP____024unit(
                                                                   vlSelf->top_module__DOT__core__DOT__registers
                                                                   [
                                                                   (7U 
                                                                    & ((IData)(vlSelf->top_module__DOT__instruction) 
                                                                       >> 0xdU))], vlSelf->top_module__DOT__core__DOT__operand, 
                                                                   (7U 
                                                                    & ((IData)(vlSelf->top_module__DOT__instruction) 
                                                                       >> 2U)), __Vfunc_ALU__0__Vfuncout);
            vlSelf->top_module__DOT__core__DOT__reg_c 
                = vlSelf->top_module__DOT__core__DOT__result;
            vlSelf->top_module__DOT__core__DOT__cpp_result 
                = __Vfunc_ALU__0__Vfuncout;
            VL_WRITEF_NX("cpp_result %11d and verilog result %5#\nthe instruction is %x\n",0,
                         32,vlSelf->top_module__DOT__core__DOT__cpp_result,
                         16,(IData)(vlSelf->top_module__DOT__core__DOT__result),
                         16,vlSelf->top_module__DOT__instruction);
        }
        if ((1U & ((IData)(vlSelf->top_module__DOT__core__DOT__en_reg) 
                   >> (7U & ((IData)(vlSelf->top_module__DOT__instruction) 
                             >> 0xdU))))) {
            vlSelf->top_module__DOT__core__DOT__registers[(7U 
                                                           & ((IData)(vlSelf->top_module__DOT__instruction) 
                                                              >> 0xdU))] 
                = vlSelf->top_module__DOT__core__DOT__reg_c;
            if (VL_UNLIKELY((vlSelf->top_module__DOT__core__DOT__cpp_result 
                             != (IData)(vlSelf->top_module__DOT__core__DOT__reg_c)))) {
                VL_WRITEF_NX("Error!!!\ncpp_result %11d\nverilog result %5#\ninstruction for cpp_result %b\n",0,
                             32,vlSelf->top_module__DOT__core__DOT__cpp_result,
                             16,(IData)(vlSelf->top_module__DOT__core__DOT__reg_c),
                             16,vlSelf->top_module__DOT__instruction);
            }
        }
    }
    if (vlSelf->reset) {
        __Vdly__top_module__DOT__fetch__DOT__pc = 0U;
        vlSelf->__Vdly__top_module__DOT__instruction = 0U;
    } else if (vlSelf->top_module__DOT__branch) {
        vlSelf->__Vdly__top_module__DOT__instruction 
            = vlSelf->top_module__DOT__fetch__DOT__memory
            [vlSelf->top_module__DOT__fetch__DOT__pc];
        __Vdly__top_module__DOT__fetch__DOT__pc = vlSelf->top_module__DOT__new_pc;
    } else if (vlSelf->top_module__DOT__en_pc) {
        __Vdly__top_module__DOT__fetch__DOT__pc = (0xfffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top_module__DOT__fetch__DOT__pc)));
        vlSelf->__Vdly__top_module__DOT__instruction 
            = vlSelf->top_module__DOT__fetch__DOT__memory
            [vlSelf->top_module__DOT__fetch__DOT__pc];
    }
    vlSelf->top_module__DOT__core__DOT__control__DOT__state 
        = (((IData)(vlSelf->reset) | (2U == (3U & (IData)(vlSelf->top_module__DOT__instruction))))
            ? 0U : (IData)(vlSelf->top_module__DOT__core__DOT__control__DOT__next_state));
    vlSelf->top_module__DOT__fetch__DOT__pc = __Vdly__top_module__DOT__fetch__DOT__pc;
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
    vlSelf->top_module__DOT__en_pc = 0U;
    if ((0U != (IData)(vlSelf->top_module__DOT__core__DOT__control__DOT__state))) {
        if ((1U == (IData)(vlSelf->top_module__DOT__core__DOT__control__DOT__state))) {
            vlSelf->top_module__DOT__core__DOT__en_c = 1U;
        }
        if ((1U != (IData)(vlSelf->top_module__DOT__core__DOT__control__DOT__state))) {
            if ((2U == (IData)(vlSelf->top_module__DOT__core__DOT__control__DOT__state))) {
                vlSelf->top_module__DOT__en_pc = 1U;
            }
        }
    }
    vlSelf->done = vlSelf->top_module__DOT__en_pc;
}
