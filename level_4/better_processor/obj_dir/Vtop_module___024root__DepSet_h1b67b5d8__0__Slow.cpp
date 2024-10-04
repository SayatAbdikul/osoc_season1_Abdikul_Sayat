// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_module.h for the primary calling header

#include "Vtop_module__pch.h"
#include "Vtop_module___024root.h"

VL_ATTR_COLD void Vtop_module___024root___eval_static__TOP(Vtop_module___024root* vlSelf);

VL_ATTR_COLD void Vtop_module___024root___eval_static(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___eval_static\n"); );
    // Body
    Vtop_module___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop_module___024root___eval_static__TOP(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->top_module__DOT__core__DOT__operand = vlSelf->top_module__DOT__core__DOT__registers
        [(7U & ((IData)(vlSelf->top_module__DOT__instruction) 
                >> 0xaU))];
}

VL_ATTR_COLD void Vtop_module___024root___eval_initial__TOP(Vtop_module___024root* vlSelf);

VL_ATTR_COLD void Vtop_module___024root___eval_initial(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___eval_initial\n"); );
    // Body
    Vtop_module___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
}

extern const VlWide<26>/*831:0*/ Vtop_module__ConstPool__CONST_hb405f07f_0;

VL_ATTR_COLD void Vtop_module___024root___eval_initial__TOP(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___eval_initial__TOP\n"); );
    // Body
    VL_READMEM_N(true, 16, 4096, 0, VL_CVT_PACK_STR_NW(26, Vtop_module__ConstPool__CONST_hb405f07f_0)
                 ,  &(vlSelf->top_module__DOT__fetch__DOT__memory)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop_module___024root___eval_final(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_module___024root___dump_triggers__stl(Vtop_module___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop_module___024root___eval_phase__stl(Vtop_module___024root* vlSelf);

VL_ATTR_COLD void Vtop_module___024root___eval_settle(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___eval_settle\n"); );
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
            Vtop_module___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/top_module.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop_module___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_module___024root___dump_triggers__stl(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_module___024root___stl_sequent__TOP__0(Vtop_module___024root* vlSelf);

VL_ATTR_COLD void Vtop_module___024root___eval_stl(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop_module___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtop_module___024root___stl_sequent__TOP__0(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->top_module__DOT__core__DOT__en_s = 0U;
    if ((0U == (IData)(vlSelf->top_module__DOT__core__DOT__control__DOT__state))) {
        vlSelf->top_module__DOT__core__DOT__en_s = 1U;
        vlSelf->top_module__DOT__core__DOT__control__DOT__next_state = 1U;
    } else {
        vlSelf->top_module__DOT__core__DOT__control__DOT__next_state 
            = ((1U == (IData)(vlSelf->top_module__DOT__core__DOT__control__DOT__state))
                ? 2U : 0U);
    }
    vlSelf->top_module__DOT__core__DOT__en_c = 0U;
    vlSelf->top_module__DOT__core__DOT__en_reg = 0U;
    vlSelf->top_module__DOT__en_pc = 0U;
    if ((0U != (IData)(vlSelf->top_module__DOT__core__DOT__control__DOT__state))) {
        if ((1U == (IData)(vlSelf->top_module__DOT__core__DOT__control__DOT__state))) {
            vlSelf->top_module__DOT__core__DOT__en_c = 1U;
        }
        if ((1U != (IData)(vlSelf->top_module__DOT__core__DOT__control__DOT__state))) {
            if ((2U == (IData)(vlSelf->top_module__DOT__core__DOT__control__DOT__state))) {
                vlSelf->top_module__DOT__core__DOT__en_reg 
                    = ((IData)(vlSelf->top_module__DOT__core__DOT__en_reg) 
                       | (0xffU & ((IData)(1U) << (7U 
                                                   & ((IData)(vlSelf->top_module__DOT__instruction) 
                                                      >> 0xdU)))));
                vlSelf->top_module__DOT__en_pc = 1U;
            }
        }
    }
    vlSelf->top_module__DOT__core__DOT__result = 0U;
    if (((((((((0U == (7U & ((IData)(vlSelf->top_module__DOT__instruction) 
                             >> 2U))) | (1U == (7U 
                                                & ((IData)(vlSelf->top_module__DOT__instruction) 
                                                   >> 2U)))) 
              | (2U == (7U & ((IData)(vlSelf->top_module__DOT__instruction) 
                              >> 2U)))) | (3U == (7U 
                                                  & ((IData)(vlSelf->top_module__DOT__instruction) 
                                                     >> 2U)))) 
            | (4U == (7U & ((IData)(vlSelf->top_module__DOT__instruction) 
                            >> 2U)))) | (5U == (7U 
                                                & ((IData)(vlSelf->top_module__DOT__instruction) 
                                                   >> 2U)))) 
          | (6U == (7U & ((IData)(vlSelf->top_module__DOT__instruction) 
                          >> 2U)))) | (7U == (7U & 
                                              ((IData)(vlSelf->top_module__DOT__instruction) 
                                               >> 2U))))) {
        vlSelf->top_module__DOT__core__DOT__result 
            = (0xffffU & ((0U == (7U & ((IData)(vlSelf->top_module__DOT__instruction) 
                                        >> 2U))) ? 
                          ((IData)(vlSelf->top_module__DOT__core__DOT__reg_s) 
                           + (IData)(vlSelf->top_module__DOT__core__DOT__operand))
                           : ((1U == (7U & ((IData)(vlSelf->top_module__DOT__instruction) 
                                            >> 2U)))
                               ? ((IData)(vlSelf->top_module__DOT__core__DOT__reg_s) 
                                  - (IData)(vlSelf->top_module__DOT__core__DOT__operand))
                               : ((2U == (7U & ((IData)(vlSelf->top_module__DOT__instruction) 
                                                >> 2U)))
                                   ? ((IData)(vlSelf->top_module__DOT__core__DOT__reg_s) 
                                      & (IData)(vlSelf->top_module__DOT__core__DOT__operand))
                                   : ((3U == (7U & 
                                              ((IData)(vlSelf->top_module__DOT__instruction) 
                                               >> 2U)))
                                       ? ((IData)(vlSelf->top_module__DOT__core__DOT__reg_s) 
                                          | (IData)(vlSelf->top_module__DOT__core__DOT__operand))
                                       : ((4U == (7U 
                                                  & ((IData)(vlSelf->top_module__DOT__instruction) 
                                                     >> 2U)))
                                           ? ((IData)(vlSelf->top_module__DOT__core__DOT__reg_s) 
                                              ^ (IData)(vlSelf->top_module__DOT__core__DOT__operand))
                                           : ((5U == 
                                               (7U 
                                                & ((IData)(vlSelf->top_module__DOT__instruction) 
                                                   >> 2U)))
                                               ? VL_SHIFTL_III(16,16,16, (IData)(vlSelf->top_module__DOT__core__DOT__reg_s), (IData)(vlSelf->top_module__DOT__core__DOT__operand))
                                               : ((6U 
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
    vlSelf->done = vlSelf->top_module__DOT__en_pc;
    vlSelf->d_out = vlSelf->top_module__DOT__core__DOT__result;
}

VL_ATTR_COLD void Vtop_module___024root___eval_triggers__stl(Vtop_module___024root* vlSelf);

VL_ATTR_COLD bool Vtop_module___024root___eval_phase__stl(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop_module___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop_module___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_module___024root___dump_triggers__act(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_module___024root___dump_triggers__nba(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_module___024root___ctor_var_reset(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->d_out = VL_RAND_RESET_I(16);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->top_module__DOT__instruction = VL_RAND_RESET_I(16);
    vlSelf->top_module__DOT__en_pc = VL_RAND_RESET_I(1);
    vlSelf->top_module__DOT__en_new_pc = VL_RAND_RESET_I(1);
    vlSelf->top_module__DOT__branch_res = VL_RAND_RESET_I(1);
    vlSelf->top_module__DOT__new_pc = VL_RAND_RESET_I(12);
    vlSelf->top_module__DOT__core__DOT__reg_c = VL_RAND_RESET_I(16);
    vlSelf->top_module__DOT__core__DOT__reg_s = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top_module__DOT__core__DOT__registers[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->top_module__DOT__core__DOT__en_c = VL_RAND_RESET_I(1);
    vlSelf->top_module__DOT__core__DOT__en_s = VL_RAND_RESET_I(1);
    vlSelf->top_module__DOT__core__DOT__cpp_result = 0;
    vlSelf->top_module__DOT__core__DOT__en_reg = VL_RAND_RESET_I(8);
    vlSelf->top_module__DOT__core__DOT__result = VL_RAND_RESET_I(16);
    vlSelf->top_module__DOT__core__DOT__operand = VL_RAND_RESET_I(16);
    vlSelf->top_module__DOT__core__DOT__control__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->top_module__DOT__core__DOT__control__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->top_module__DOT__fetch__DOT__pc = VL_RAND_RESET_I(12);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->top_module__DOT__fetch__DOT__memory[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__Vdly__top_module__DOT__instruction = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
