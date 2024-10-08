// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_module.h for the primary calling header

#include "Vtop_module__pch.h"
#include "Vtop_module___024root.h"

void Vtop_module___024root___eval_act(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___eval_act\n"); );
}

void Vtop_module___024root___nba_sequent__TOP__0(Vtop_module___024root* vlSelf);
void Vtop_module___024root___nba_sequent__TOP__1(Vtop_module___024root* vlSelf);
void Vtop_module___024root___nba_sequent__TOP__2(Vtop_module___024root* vlSelf);
void Vtop_module___024root___nba_comb__TOP__0(Vtop_module___024root* vlSelf);

void Vtop_module___024root___eval_nba(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_module___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_module___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_module___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_module___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop_module___024root___nba_sequent__TOP__1(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->top_module__DOT__core__DOT__result = 0U;
    if (vlSelf->run_val) {
        if (((((((((0U == (7U & ((IData)(vlSelf->top_module__DOT__instruction) 
                                 >> 2U))) | (1U == 
                                             (7U & 
                                              ((IData)(vlSelf->top_module__DOT__instruction) 
                                               >> 2U)))) 
                  | (2U == (7U & ((IData)(vlSelf->top_module__DOT__instruction) 
                                  >> 2U)))) | (3U == 
                                               (7U 
                                                & ((IData)(vlSelf->top_module__DOT__instruction) 
                                                   >> 2U)))) 
                | (4U == (7U & ((IData)(vlSelf->top_module__DOT__instruction) 
                                >> 2U)))) | (5U == 
                                             (7U & 
                                              ((IData)(vlSelf->top_module__DOT__instruction) 
                                               >> 2U)))) 
              | (6U == (7U & ((IData)(vlSelf->top_module__DOT__instruction) 
                              >> 2U)))) | (7U == (7U 
                                                  & ((IData)(vlSelf->top_module__DOT__instruction) 
                                                     >> 2U))))) {
            vlSelf->top_module__DOT__core__DOT__result 
                = (0xffffU & ((0U == (7U & ((IData)(vlSelf->top_module__DOT__instruction) 
                                            >> 2U)))
                               ? ((IData)(vlSelf->top_module__DOT__core__DOT__reg_s) 
                                  + (IData)(vlSelf->top_module__DOT__core__DOT__operand))
                               : ((1U == (7U & ((IData)(vlSelf->top_module__DOT__instruction) 
                                                >> 2U)))
                                   ? ((IData)(vlSelf->top_module__DOT__core__DOT__reg_s) 
                                      - (IData)(vlSelf->top_module__DOT__core__DOT__operand))
                                   : ((2U == (7U & 
                                              ((IData)(vlSelf->top_module__DOT__instruction) 
                                               >> 2U)))
                                       ? ((IData)(vlSelf->top_module__DOT__core__DOT__reg_s) 
                                          & (IData)(vlSelf->top_module__DOT__core__DOT__operand))
                                       : ((3U == (7U 
                                                  & ((IData)(vlSelf->top_module__DOT__instruction) 
                                                     >> 2U)))
                                           ? ((IData)(vlSelf->top_module__DOT__core__DOT__reg_s) 
                                              | (IData)(vlSelf->top_module__DOT__core__DOT__operand))
                                           : ((4U == 
                                               (7U 
                                                & ((IData)(vlSelf->top_module__DOT__instruction) 
                                                   >> 2U)))
                                               ? ((IData)(vlSelf->top_module__DOT__core__DOT__reg_s) 
                                                  ^ (IData)(vlSelf->top_module__DOT__core__DOT__operand))
                                               : ((5U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->top_module__DOT__instruction) 
                                                       >> 2U)))
                                                   ? 
                                                  VL_SHIFTL_III(16,16,16, (IData)(vlSelf->top_module__DOT__core__DOT__reg_s), (IData)(vlSelf->top_module__DOT__core__DOT__operand))
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->top_module__DOT__instruction) 
                                                        >> 2U)))
                                                    ? 
                                                   VL_SHIFTR_III(16,16,16, (IData)(vlSelf->top_module__DOT__core__DOT__reg_s), (IData)(vlSelf->top_module__DOT__core__DOT__operand))
                                                    : 
                                                   (((IData)(vlSelf->top_module__DOT__core__DOT__reg_s) 
                                                     > (IData)(vlSelf->top_module__DOT__core__DOT__operand))
                                                     ? 1U
                                                     : 
                                                    (((IData)(vlSelf->top_module__DOT__core__DOT__reg_s) 
                                                      < (IData)(vlSelf->top_module__DOT__core__DOT__operand))
                                                      ? 2U
                                                      : 0U))))))))));
        }
    }
    vlSelf->top_module__DOT__last_alu_result = vlSelf->top_module__DOT__core__DOT__result;
    vlSelf->d_out = vlSelf->top_module__DOT__last_alu_result;
}

VL_INLINE_OPT void Vtop_module___024root___nba_sequent__TOP__2(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__top_module__DOT__fetch__DOT__pc = 0U;
        vlSelf->top_module__DOT__instruction = 0U;
    } else if (vlSelf->top_module__DOT__branch_res) {
        vlSelf->__Vdly__top_module__DOT__fetch__DOT__pc 
            = vlSelf->top_module__DOT__new_pc;
        vlSelf->top_module__DOT__instruction = vlSelf->top_module__DOT__fetch__DOT__memory
            [vlSelf->top_module__DOT__new_pc];
    } else if (vlSelf->top_module__DOT__en_pc) {
        vlSelf->top_module__DOT__instruction = vlSelf->top_module__DOT__fetch__DOT__memory
            [vlSelf->top_module__DOT__fetch__DOT__pc];
        vlSelf->__Vdly__top_module__DOT__fetch__DOT__pc 
            = (0xfffU & ((IData)(1U) + (IData)(vlSelf->top_module__DOT__fetch__DOT__pc)));
    }
    vlSelf->top_module__DOT__fetch__DOT__pc = vlSelf->__Vdly__top_module__DOT__fetch__DOT__pc;
    vlSelf->top_module__DOT__en_pc = 0U;
    if ((0U != (IData)(vlSelf->top_module__DOT__core__DOT__control__DOT__state))) {
        if ((1U != (IData)(vlSelf->top_module__DOT__core__DOT__control__DOT__state))) {
            if ((2U == (IData)(vlSelf->top_module__DOT__core__DOT__control__DOT__state))) {
                vlSelf->top_module__DOT__en_pc = 1U;
            }
        }
    }
    vlSelf->done = vlSelf->top_module__DOT__en_pc;
    vlSelf->Rx_val = (7U & ((IData)(vlSelf->top_module__DOT__instruction) 
                            >> 0xdU));
    vlSelf->Ry_val = (7U & ((IData)(vlSelf->top_module__DOT__instruction) 
                            >> 0xaU));
    vlSelf->sel_val = (7U & ((IData)(vlSelf->top_module__DOT__instruction) 
                             >> 2U));
    vlSelf->instruction_val = vlSelf->top_module__DOT__instruction;
    vlSelf->run_val = (2U != (3U & (IData)(vlSelf->top_module__DOT__instruction)));
    vlSelf->x_val = vlSelf->top_module__DOT__core__DOT__registers
        [(7U & ((IData)(vlSelf->top_module__DOT__instruction) 
                >> 0xdU))];
    vlSelf->top_module__DOT__core__DOT__en_reg = 0U;
    if ((0U != (IData)(vlSelf->top_module__DOT__core__DOT__control__DOT__state))) {
        if ((1U != (IData)(vlSelf->top_module__DOT__core__DOT__control__DOT__state))) {
            if ((2U == (IData)(vlSelf->top_module__DOT__core__DOT__control__DOT__state))) {
                vlSelf->top_module__DOT__core__DOT__en_reg 
                    = ((IData)(vlSelf->top_module__DOT__core__DOT__en_reg) 
                       | (0xffU & ((IData)(1U) << (7U 
                                                   & ((IData)(vlSelf->top_module__DOT__instruction) 
                                                      >> 0xdU)))));
            }
        }
    }
}

VL_INLINE_OPT void Vtop_module___024root___nba_comb__TOP__0(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->top_module__DOT__branch_res = 0U;
    vlSelf->top_module__DOT__new_pc = 0U;
    if ((2U == (3U & (IData)(vlSelf->top_module__DOT__instruction)))) {
        vlSelf->top_module__DOT__branch_res = 1U;
        if ((1U & (~ (IData)(((0U == (0xcU & (IData)(vlSelf->top_module__DOT__instruction))) 
                              & (0U == (IData)(vlSelf->top_module__DOT__last_alu_result))))))) {
            if ((1U & (~ (IData)(((4U == (0xcU & (IData)(vlSelf->top_module__DOT__instruction))) 
                                  & (1U == (IData)(vlSelf->top_module__DOT__last_alu_result))))))) {
                if ((1U & (~ (IData)(((8U == (0xcU 
                                              & (IData)(vlSelf->top_module__DOT__instruction))) 
                                      & (2U == (IData)(vlSelf->top_module__DOT__last_alu_result))))))) {
                    vlSelf->top_module__DOT__branch_res = 0U;
                }
            }
        }
        if ((IData)(((0U == (0xcU & (IData)(vlSelf->top_module__DOT__instruction))) 
                     & (0U == (IData)(vlSelf->top_module__DOT__last_alu_result))))) {
            vlSelf->top_module__DOT__new_pc = (0xfffU 
                                               & ((IData)(vlSelf->top_module__DOT__instruction) 
                                                  >> 4U));
        } else if ((IData)(((4U == (0xcU & (IData)(vlSelf->top_module__DOT__instruction))) 
                            & (1U == (IData)(vlSelf->top_module__DOT__last_alu_result))))) {
            vlSelf->top_module__DOT__new_pc = (0xfffU 
                                               & ((IData)(vlSelf->top_module__DOT__instruction) 
                                                  >> 4U));
        } else if ((IData)(((8U == (0xcU & (IData)(vlSelf->top_module__DOT__instruction))) 
                            & (2U == (IData)(vlSelf->top_module__DOT__last_alu_result))))) {
            vlSelf->top_module__DOT__new_pc = (0xfffU 
                                               & ((IData)(vlSelf->top_module__DOT__instruction) 
                                                  >> 4U));
        }
    }
}

void Vtop_module___024root___eval_triggers__act(Vtop_module___024root* vlSelf);

bool Vtop_module___024root___eval_phase__act(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop_module___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop_module___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop_module___024root___eval_phase__nba(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop_module___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_module___024root___dump_triggers__nba(Vtop_module___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_module___024root___dump_triggers__act(Vtop_module___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_module___024root___eval(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop_module___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/top_module.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop_module___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/top_module.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop_module___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop_module___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop_module___024root___eval_debug_assertions(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
