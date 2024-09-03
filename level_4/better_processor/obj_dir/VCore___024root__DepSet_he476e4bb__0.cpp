// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCore.h for the primary calling header

#include "VCore__pch.h"
#include "VCore___024root.h"

void VCore___024root___ico_sequent__TOP__0(VCore___024root* vlSelf);

void VCore___024root___eval_ico(VCore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VCore___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VCore___024root___ico_sequent__TOP__0(VCore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->Core__DOT__en_reg = 0U;
    if ((0U != (IData)(vlSelf->Core__DOT__control__DOT__state))) {
        if ((1U != (IData)(vlSelf->Core__DOT__control__DOT__state))) {
            if ((2U == (IData)(vlSelf->Core__DOT__control__DOT__state))) {
                vlSelf->Core__DOT__en_reg = ((IData)(vlSelf->Core__DOT__en_reg) 
                                             | (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & ((IData)(vlSelf->instruction) 
                                                       >> 0xdU)))));
            }
        }
    }
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
    vlSelf->d_out = vlSelf->Core__DOT__result;
}

void VCore___024root___eval_triggers__ico(VCore___024root* vlSelf);

bool VCore___024root___eval_phase__ico(VCore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VCore___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VCore___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VCore___024root___eval_act(VCore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_act\n"); );
}

void VCore___024root___nba_sequent__TOP__0(VCore___024root* vlSelf);

void VCore___024root___eval_nba(VCore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VCore___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VCore___024root___eval_triggers__act(VCore___024root* vlSelf);

bool VCore___024root___eval_phase__act(VCore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VCore___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VCore___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VCore___024root___eval_phase__nba(VCore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VCore___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__ico(VCore___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__nba(VCore___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__act(VCore___024root* vlSelf);
#endif  // VL_DEBUG

void VCore___024root___eval(VCore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval\n"); );
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
            VCore___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/Core.sv", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VCore___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VCore___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/Core.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VCore___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/Core.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VCore___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VCore___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VCore___024root___eval_debug_assertions(VCore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->run & 0xfeU))) {
        Verilated::overWidthError("run");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
