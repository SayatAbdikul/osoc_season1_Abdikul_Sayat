// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_ai.h for the primary calling header

#include "Valu_ai__pch.h"
#include "Valu_ai___024root.h"

void Valu_ai___024root___ico_sequent__TOP__0(Valu_ai___024root* vlSelf);

void Valu_ai___024root___eval_ico(Valu_ai___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_ai__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_ai___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Valu_ai___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Valu_ai___024root___ico_sequent__TOP__0(Valu_ai___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_ai__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_ai___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->carry_out = 0U;
    if (vlSelf->mode) {
        vlSelf->alu_out = (0xffffU & ((8U & (IData)(vlSelf->select))
                                       ? ((4U & (IData)(vlSelf->select))
                                           ? ((2U & (IData)(vlSelf->select))
                                               ? ((1U 
                                                   & (IData)(vlSelf->select))
                                                   ? (IData)(vlSelf->in_a)
                                                   : 
                                                  ((IData)(vlSelf->in_a) 
                                                   | (IData)(vlSelf->in_b)))
                                               : ((1U 
                                                   & (IData)(vlSelf->select))
                                                   ? 
                                                  ((IData)(vlSelf->in_a) 
                                                   | (~ (IData)(vlSelf->in_b)))
                                                   : 0xffffU))
                                           : ((2U & (IData)(vlSelf->select))
                                               ? ((1U 
                                                   & (IData)(vlSelf->select))
                                                   ? 
                                                  ((IData)(vlSelf->in_a) 
                                                   & (IData)(vlSelf->in_b))
                                                   : (IData)(vlSelf->in_b))
                                               : ((1U 
                                                   & (IData)(vlSelf->select))
                                                   ? 
                                                  (~ 
                                                   ((IData)(vlSelf->in_a) 
                                                    ^ (IData)(vlSelf->in_b)))
                                                   : 
                                                  ((~ (IData)(vlSelf->in_a)) 
                                                   | (IData)(vlSelf->in_b)))))
                                       : ((4U & (IData)(vlSelf->select))
                                           ? ((2U & (IData)(vlSelf->select))
                                               ? ((1U 
                                                   & (IData)(vlSelf->select))
                                                   ? 
                                                  ((IData)(vlSelf->in_a) 
                                                   & (~ (IData)(vlSelf->in_b)))
                                                   : 
                                                  ((IData)(vlSelf->in_a) 
                                                   ^ (IData)(vlSelf->in_b)))
                                               : ((1U 
                                                   & (IData)(vlSelf->select))
                                                   ? 
                                                  (~ (IData)(vlSelf->in_b))
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelf->in_a) 
                                                    & (IData)(vlSelf->in_b)))))
                                           : ((2U & (IData)(vlSelf->select))
                                               ? ((1U 
                                                   & (IData)(vlSelf->select))
                                                   ? 0U
                                                   : 
                                                  ((~ (IData)(vlSelf->in_a)) 
                                                   & (IData)(vlSelf->in_b)))
                                               : ((1U 
                                                   & (IData)(vlSelf->select))
                                                   ? 
                                                  (~ 
                                                   ((IData)(vlSelf->in_a) 
                                                    | (IData)(vlSelf->in_b)))
                                                   : 
                                                  (~ (IData)(vlSelf->in_a)))))));
    } else if ((8U & (IData)(vlSelf->select))) {
        if ((4U & (IData)(vlSelf->select))) {
            if ((2U & (IData)(vlSelf->select))) {
                if ((1U & (IData)(vlSelf->select))) {
                    vlSelf->ALU__DOT__temp = (0x1ffffU 
                                              & ((IData)(vlSelf->in_a) 
                                                 - (IData)(vlSelf->carry_in)));
                    vlSelf->alu_out = (0xffffU & vlSelf->ALU__DOT__temp);
                    vlSelf->carry_out = (1U & (vlSelf->ALU__DOT__temp 
                                               >> 0x10U));
                } else {
                    vlSelf->ALU__DOT__temp = (0x1ffffU 
                                              & ((((IData)(vlSelf->in_a) 
                                                   | (~ (IData)(vlSelf->in_b))) 
                                                  + (IData)(vlSelf->in_a)) 
                                                 + (IData)(vlSelf->carry_in)));
                    vlSelf->alu_out = (0xffffU & vlSelf->ALU__DOT__temp);
                    vlSelf->carry_out = (1U & (vlSelf->ALU__DOT__temp 
                                               >> 0x10U));
                }
            } else if ((1U & (IData)(vlSelf->select))) {
                vlSelf->ALU__DOT__temp = (0x1ffffU 
                                          & ((((IData)(vlSelf->in_a) 
                                               | (IData)(vlSelf->in_b)) 
                                              + (IData)(vlSelf->in_a)) 
                                             + (IData)(vlSelf->carry_in)));
                vlSelf->alu_out = (0xffffU & vlSelf->ALU__DOT__temp);
                vlSelf->carry_out = (1U & (vlSelf->ALU__DOT__temp 
                                           >> 0x10U));
            } else {
                vlSelf->ALU__DOT__temp = (0x1ffffU 
                                          & (((IData)(vlSelf->in_a) 
                                              + (IData)(vlSelf->in_a)) 
                                             + (IData)(vlSelf->carry_in)));
                vlSelf->alu_out = (0xffffU & vlSelf->ALU__DOT__temp);
                vlSelf->carry_out = (1U & (vlSelf->ALU__DOT__temp 
                                           >> 0x10U));
            }
        } else if ((2U & (IData)(vlSelf->select))) {
            if ((1U & (IData)(vlSelf->select))) {
                vlSelf->ALU__DOT__temp = (0x1ffffU 
                                          & (((IData)(vlSelf->in_a) 
                                              & (IData)(vlSelf->in_b)) 
                                             - (IData)(vlSelf->carry_in)));
                vlSelf->alu_out = (0xffffU & vlSelf->ALU__DOT__temp);
                vlSelf->carry_out = (1U & (vlSelf->ALU__DOT__temp 
                                           >> 0x10U));
            } else {
                vlSelf->ALU__DOT__temp = (0x1ffffU 
                                          & ((((IData)(vlSelf->in_a) 
                                               | (~ (IData)(vlSelf->in_b))) 
                                              + ((IData)(vlSelf->in_a) 
                                                 & (IData)(vlSelf->in_b))) 
                                             + (IData)(vlSelf->carry_in)));
                vlSelf->alu_out = (0xffffU & vlSelf->ALU__DOT__temp);
                vlSelf->carry_out = (1U & (vlSelf->ALU__DOT__temp 
                                           >> 0x10U));
            }
        } else if ((1U & (IData)(vlSelf->select))) {
            vlSelf->ALU__DOT__temp = (0x1ffffU & (((IData)(vlSelf->in_a) 
                                                   + (IData)(vlSelf->in_b)) 
                                                  + (IData)(vlSelf->carry_in)));
            vlSelf->alu_out = (0xffffU & vlSelf->ALU__DOT__temp);
            vlSelf->carry_out = (1U & (vlSelf->ALU__DOT__temp 
                                       >> 0x10U));
        } else {
            vlSelf->ALU__DOT__temp = (0x1ffffU & (((IData)(vlSelf->in_a) 
                                                   + 
                                                   ((IData)(vlSelf->in_a) 
                                                    & (IData)(vlSelf->in_b))) 
                                                  + (IData)(vlSelf->carry_in)));
            vlSelf->alu_out = (0xffffU & vlSelf->ALU__DOT__temp);
            vlSelf->carry_out = (1U & (vlSelf->ALU__DOT__temp 
                                       >> 0x10U));
        }
    } else if ((4U & (IData)(vlSelf->select))) {
        if ((2U & (IData)(vlSelf->select))) {
            if ((1U & (IData)(vlSelf->select))) {
                vlSelf->ALU__DOT__temp = ((IData)(vlSelf->in_a) 
                                          & ((~ (IData)(vlSelf->in_b)) 
                                             - (IData)(vlSelf->carry_in)));
                vlSelf->alu_out = (0xffffU & vlSelf->ALU__DOT__temp);
                vlSelf->carry_out = (1U & (vlSelf->ALU__DOT__temp 
                                           >> 0x10U));
            } else {
                vlSelf->ALU__DOT__temp = (0x1ffffU 
                                          & (((IData)(vlSelf->in_a) 
                                              - (IData)(vlSelf->in_b)) 
                                             - (IData)(vlSelf->carry_in)));
                vlSelf->alu_out = (0xffffU & vlSelf->ALU__DOT__temp);
                vlSelf->carry_out = (1U & (vlSelf->ALU__DOT__temp 
                                           >> 0x10U));
            }
        } else if ((1U & (IData)(vlSelf->select))) {
            vlSelf->ALU__DOT__temp = (0x1ffffU & ((
                                                   ((IData)(vlSelf->in_a) 
                                                    | (IData)(vlSelf->in_b)) 
                                                   + 
                                                   ((IData)(vlSelf->in_a) 
                                                    & (~ (IData)(vlSelf->in_b)))) 
                                                  + (IData)(vlSelf->carry_in)));
            vlSelf->alu_out = (0xffffU & vlSelf->ALU__DOT__temp);
            vlSelf->carry_out = (1U & (vlSelf->ALU__DOT__temp 
                                       >> 0x10U));
        } else {
            vlSelf->ALU__DOT__temp = (0x1ffffU & (((IData)(vlSelf->in_a) 
                                                   + 
                                                   ((IData)(vlSelf->in_a) 
                                                    & (~ (IData)(vlSelf->in_b)))) 
                                                  + (IData)(vlSelf->carry_in)));
            vlSelf->alu_out = (0xffffU & vlSelf->ALU__DOT__temp);
            vlSelf->carry_out = (1U & (vlSelf->ALU__DOT__temp 
                                       >> 0x10U));
        }
    } else if ((2U & (IData)(vlSelf->select))) {
        if ((1U & (IData)(vlSelf->select))) {
            vlSelf->alu_out = 0xffffU;
        } else {
            vlSelf->ALU__DOT__temp = (0x1ffffU & (((IData)(vlSelf->in_a) 
                                                   + 
                                                   (~ (IData)(vlSelf->in_b))) 
                                                  + (IData)(vlSelf->carry_in)));
            vlSelf->alu_out = (0xffffU & vlSelf->ALU__DOT__temp);
            vlSelf->carry_out = (1U & (vlSelf->ALU__DOT__temp 
                                       >> 0x10U));
        }
    } else if ((1U & (IData)(vlSelf->select))) {
        vlSelf->ALU__DOT__temp = (0x1ffffU & (((IData)(vlSelf->in_a) 
                                               + (IData)(vlSelf->in_b)) 
                                              + (IData)(vlSelf->carry_in)));
        vlSelf->alu_out = (0xffffU & vlSelf->ALU__DOT__temp);
        vlSelf->carry_out = (1U & (vlSelf->ALU__DOT__temp 
                                   >> 0x10U));
    } else {
        vlSelf->alu_out = vlSelf->in_a;
    }
    vlSelf->compare = (0U == (IData)(vlSelf->alu_out));
}

void Valu_ai___024root___eval_triggers__ico(Valu_ai___024root* vlSelf);

bool Valu_ai___024root___eval_phase__ico(Valu_ai___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_ai__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_ai___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Valu_ai___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Valu_ai___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Valu_ai___024root___eval_act(Valu_ai___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_ai__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_ai___024root___eval_act\n"); );
}

void Valu_ai___024root___eval_nba(Valu_ai___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_ai__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_ai___024root___eval_nba\n"); );
}

void Valu_ai___024root___eval_triggers__act(Valu_ai___024root* vlSelf);

bool Valu_ai___024root___eval_phase__act(Valu_ai___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_ai__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_ai___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Valu_ai___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Valu_ai___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Valu_ai___024root___eval_phase__nba(Valu_ai___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_ai__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_ai___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Valu_ai___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_ai___024root___dump_triggers__ico(Valu_ai___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_ai___024root___dump_triggers__nba(Valu_ai___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_ai___024root___dump_triggers__act(Valu_ai___024root* vlSelf);
#endif  // VL_DEBUG

void Valu_ai___024root___eval(Valu_ai___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_ai__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_ai___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Valu_ai___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("alu_ai.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Valu_ai___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Valu_ai___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("alu_ai.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Valu_ai___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("alu_ai.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Valu_ai___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Valu_ai___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Valu_ai___024root___eval_debug_assertions(Valu_ai___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_ai__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_ai___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->carry_in & 0xfeU))) {
        Verilated::overWidthError("carry_in");}
    if (VL_UNLIKELY((vlSelf->select & 0xf0U))) {
        Verilated::overWidthError("select");}
    if (VL_UNLIKELY((vlSelf->mode & 0xfeU))) {
        Verilated::overWidthError("mode");}
}
#endif  // VL_DEBUG
