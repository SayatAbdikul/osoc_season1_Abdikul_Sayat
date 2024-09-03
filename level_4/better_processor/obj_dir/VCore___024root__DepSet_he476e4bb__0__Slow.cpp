// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCore.h for the primary calling header

#include "VCore__pch.h"
#include "VCore___024root.h"

VL_ATTR_COLD void VCore___024root___eval_static__TOP(VCore___024root* vlSelf);

VL_ATTR_COLD void VCore___024root___eval_static(VCore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_static\n"); );
    // Body
    VCore___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VCore___024root___eval_static__TOP(VCore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->Core__DOT__registers[7U] = 8U;
    vlSelf->Core__DOT__registers[6U] = 7U;
    vlSelf->Core__DOT__registers[5U] = 6U;
    vlSelf->Core__DOT__registers[4U] = 5U;
    vlSelf->Core__DOT__registers[3U] = 4U;
    vlSelf->Core__DOT__registers[2U] = 3U;
    vlSelf->Core__DOT__registers[1U] = 2U;
    vlSelf->Core__DOT__registers[0U] = 1U;
}

VL_ATTR_COLD void VCore___024root___eval_initial(VCore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
}

VL_ATTR_COLD void VCore___024root___eval_final(VCore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__stl(VCore___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VCore___024root___eval_phase__stl(VCore___024root* vlSelf);

VL_ATTR_COLD void VCore___024root___eval_settle(VCore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VCore___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/Core.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VCore___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__stl(VCore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCore___024root___stl_sequent__TOP__0(VCore___024root* vlSelf);

VL_ATTR_COLD void VCore___024root___eval_stl(VCore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VCore___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VCore___024root___stl_sequent__TOP__0(VCore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->Core__DOT__en_s = 0U;
    if ((0U == (IData)(vlSelf->Core__DOT__control__DOT__state))) {
        vlSelf->Core__DOT__en_s = 1U;
        vlSelf->Core__DOT__control__DOT__next_state = 1U;
    } else {
        vlSelf->Core__DOT__control__DOT__next_state 
            = ((1U == (IData)(vlSelf->Core__DOT__control__DOT__state))
                ? 2U : 0U);
    }
    vlSelf->Core__DOT__en_c = 0U;
    vlSelf->done = 0U;
    vlSelf->Core__DOT__en_reg = 0U;
    if ((0U != (IData)(vlSelf->Core__DOT__control__DOT__state))) {
        if ((1U == (IData)(vlSelf->Core__DOT__control__DOT__state))) {
            vlSelf->Core__DOT__en_c = 1U;
        }
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

VL_ATTR_COLD void VCore___024root___eval_triggers__stl(VCore___024root* vlSelf);

VL_ATTR_COLD bool VCore___024root___eval_phase__stl(VCore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VCore___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VCore___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__ico(VCore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__act(VCore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore___024root___dump_triggers__nba(VCore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCore___024root___ctor_var_reset(VCore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->instruction = VL_RAND_RESET_I(16);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->run = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->d_out = VL_RAND_RESET_I(16);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__reg_c = VL_RAND_RESET_I(16);
    vlSelf->Core__DOT__reg_s = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->Core__DOT__registers[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->Core__DOT__en_reg = VL_RAND_RESET_I(8);
    vlSelf->Core__DOT__en_c = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__en_s = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__result = VL_RAND_RESET_I(16);
    vlSelf->Core__DOT__cpp_result = 0;
    vlSelf->Core__DOT____Vcellinp__alu__in_b = VL_RAND_RESET_I(16);
    vlSelf->Core__DOT__control__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__control__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
