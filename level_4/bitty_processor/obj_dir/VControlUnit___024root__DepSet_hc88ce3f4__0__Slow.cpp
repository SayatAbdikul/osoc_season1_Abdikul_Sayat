// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VControlUnit.h for the primary calling header

#include "VControlUnit__pch.h"
#include "VControlUnit___024root.h"

VL_ATTR_COLD void VControlUnit___024root___eval_static(VControlUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_static\n"); );
}

VL_ATTR_COLD void VControlUnit___024root___eval_initial__TOP(VControlUnit___024root* vlSelf);

VL_ATTR_COLD void VControlUnit___024root___eval_initial(VControlUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_initial\n"); );
    // Body
    VControlUnit___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
}

VL_ATTR_COLD void VControlUnit___024root___eval_initial__TOP(VControlUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->done = 1U;
}

VL_ATTR_COLD void VControlUnit___024root___eval_final(VControlUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VControlUnit___024root___dump_triggers__stl(VControlUnit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VControlUnit___024root___eval_phase__stl(VControlUnit___024root* vlSelf);

VL_ATTR_COLD void VControlUnit___024root___eval_settle(VControlUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_settle\n"); );
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
            VControlUnit___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("ControlUnit.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VControlUnit___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VControlUnit___024root___dump_triggers__stl(VControlUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VControlUnit___024root___stl_sequent__TOP__0(VControlUnit___024root* vlSelf);

VL_ATTR_COLD void VControlUnit___024root___eval_stl(VControlUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VControlUnit___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VControlUnit___024root___stl_sequent__TOP__0(VControlUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->d_out = vlSelf->ControlUnit__DOT__reg_c;
    if ((0x20U & (IData)(vlSelf->ControlUnit__DOT__reg_i))) {
        if ((0x10U & (IData)(vlSelf->ControlUnit__DOT__reg_i))) {
            if ((8U & (IData)(vlSelf->ControlUnit__DOT__reg_i))) {
                vlSelf->ControlUnit__DOT__x = vlSelf->ControlUnit__DOT__mX__DOT__Reg7;
                vlSelf->ControlUnit__DOT__y = vlSelf->ControlUnit__DOT__mY__DOT__Reg7;
            } else {
                vlSelf->ControlUnit__DOT__x = vlSelf->ControlUnit__DOT__mX__DOT__Reg6;
                vlSelf->ControlUnit__DOT__y = vlSelf->ControlUnit__DOT__mY__DOT__Reg6;
            }
        } else if ((8U & (IData)(vlSelf->ControlUnit__DOT__reg_i))) {
            vlSelf->ControlUnit__DOT__x = vlSelf->ControlUnit__DOT__mX__DOT__Reg5;
            vlSelf->ControlUnit__DOT__y = vlSelf->ControlUnit__DOT__mY__DOT__Reg5;
        } else {
            vlSelf->ControlUnit__DOT__x = vlSelf->ControlUnit__DOT__mX__DOT__Reg4;
            vlSelf->ControlUnit__DOT__y = vlSelf->ControlUnit__DOT__mY__DOT__Reg4;
        }
    } else if ((0x10U & (IData)(vlSelf->ControlUnit__DOT__reg_i))) {
        if ((8U & (IData)(vlSelf->ControlUnit__DOT__reg_i))) {
            vlSelf->ControlUnit__DOT__x = vlSelf->ControlUnit__DOT__mX__DOT__Reg3;
            vlSelf->ControlUnit__DOT__y = vlSelf->ControlUnit__DOT__mY__DOT__Reg3;
        } else {
            vlSelf->ControlUnit__DOT__x = vlSelf->ControlUnit__DOT__mX__DOT__Reg2;
            vlSelf->ControlUnit__DOT__y = vlSelf->ControlUnit__DOT__mY__DOT__Reg2;
        }
    } else if ((8U & (IData)(vlSelf->ControlUnit__DOT__reg_i))) {
        vlSelf->ControlUnit__DOT__x = vlSelf->ControlUnit__DOT__mX__DOT__Reg1;
        vlSelf->ControlUnit__DOT__y = vlSelf->ControlUnit__DOT__mY__DOT__Reg1;
    } else {
        vlSelf->ControlUnit__DOT__x = vlSelf->ControlUnit__DOT__mX__DOT__Reg0;
        vlSelf->ControlUnit__DOT__y = vlSelf->ControlUnit__DOT__mY__DOT__Reg0;
    }
    vlSelf->ControlUnit__DOT__alu__DOT__alu_result 
        = (0xffffU & ((4U & (IData)(vlSelf->ControlUnit__DOT__reg_i))
                       ? ((0x20U & (IData)(vlSelf->ControlUnit__DOT__reg_i))
                           ? ((0x10U & (IData)(vlSelf->ControlUnit__DOT__reg_i))
                               ? ((8U & (IData)(vlSelf->ControlUnit__DOT__reg_i))
                                   ? ((IData)(vlSelf->ControlUnit__DOT__x) 
                                      & (~ (IData)(vlSelf->ControlUnit__DOT__y)))
                                   : ((IData)(vlSelf->ControlUnit__DOT__x) 
                                      ^ (IData)(vlSelf->ControlUnit__DOT__y)))
                               : ((8U & (IData)(vlSelf->ControlUnit__DOT__reg_i))
                                   ? (~ (IData)(vlSelf->ControlUnit__DOT__y))
                                   : (~ ((IData)(vlSelf->ControlUnit__DOT__x) 
                                         & (IData)(vlSelf->ControlUnit__DOT__y)))))
                           : ((0x10U & (IData)(vlSelf->ControlUnit__DOT__reg_i))
                               ? ((8U & (IData)(vlSelf->ControlUnit__DOT__reg_i))
                                   ? 0U : ((~ (IData)(vlSelf->ControlUnit__DOT__x)) 
                                           & (IData)(vlSelf->ControlUnit__DOT__y)))
                               : ((8U & (IData)(vlSelf->ControlUnit__DOT__reg_i))
                                   ? (~ ((IData)(vlSelf->ControlUnit__DOT__x) 
                                         | (IData)(vlSelf->ControlUnit__DOT__y)))
                                   : (~ (IData)(vlSelf->ControlUnit__DOT__x)))))
                       : ((0x20U & (IData)(vlSelf->ControlUnit__DOT__reg_i))
                           ? ((0x10U & (IData)(vlSelf->ControlUnit__DOT__reg_i))
                               ? ((8U & (IData)(vlSelf->ControlUnit__DOT__reg_i))
                                   ? (((IData)(vlSelf->ControlUnit__DOT__x) 
                                       & (~ (IData)(vlSelf->ControlUnit__DOT__y))) 
                                      - (IData)(1U))
                                   : (((IData)(vlSelf->ControlUnit__DOT__x) 
                                       - (IData)(vlSelf->ControlUnit__DOT__y)) 
                                      - (IData)(1U)))
                               : ((8U & (IData)(vlSelf->ControlUnit__DOT__reg_i))
                                   ? (((IData)(vlSelf->ControlUnit__DOT__x) 
                                       | (IData)(vlSelf->ControlUnit__DOT__y)) 
                                      + ((IData)(vlSelf->ControlUnit__DOT__x) 
                                         & (~ (IData)(vlSelf->ControlUnit__DOT__y))))
                                   : ((IData)(vlSelf->ControlUnit__DOT__x) 
                                      | ((IData)(vlSelf->ControlUnit__DOT__x) 
                                         & (~ (IData)(vlSelf->ControlUnit__DOT__y))))))
                           : ((0x10U & (IData)(vlSelf->ControlUnit__DOT__reg_i))
                               ? ((8U & (IData)(vlSelf->ControlUnit__DOT__reg_i))
                                   ? 0xffffU : ((IData)(vlSelf->ControlUnit__DOT__x) 
                                                | (~ (IData)(vlSelf->ControlUnit__DOT__y))))
                               : ((8U & (IData)(vlSelf->ControlUnit__DOT__reg_i))
                                   ? ((IData)(vlSelf->ControlUnit__DOT__x) 
                                      | (IData)(vlSelf->ControlUnit__DOT__y))
                                   : (IData)(vlSelf->ControlUnit__DOT__x))))));
}

VL_ATTR_COLD void VControlUnit___024root___eval_triggers__stl(VControlUnit___024root* vlSelf);

VL_ATTR_COLD bool VControlUnit___024root___eval_phase__stl(VControlUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VControlUnit___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VControlUnit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VControlUnit___024root___dump_triggers__act(VControlUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge reset)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VControlUnit___024root___dump_triggers__nba(VControlUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge reset)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VControlUnit___024root___ctor_var_reset(VControlUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->instruction = VL_RAND_RESET_I(16);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->en_s = VL_RAND_RESET_I(1);
    vlSelf->en_c = VL_RAND_RESET_I(1);
    vlSelf->en_i = VL_RAND_RESET_I(1);
    vlSelf->en_0 = VL_RAND_RESET_I(1);
    vlSelf->en_1 = VL_RAND_RESET_I(1);
    vlSelf->en_2 = VL_RAND_RESET_I(1);
    vlSelf->en_3 = VL_RAND_RESET_I(1);
    vlSelf->en_4 = VL_RAND_RESET_I(1);
    vlSelf->en_5 = VL_RAND_RESET_I(1);
    vlSelf->en_6 = VL_RAND_RESET_I(1);
    vlSelf->en_7 = VL_RAND_RESET_I(1);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->d_out = VL_RAND_RESET_I(16);
    vlSelf->ControlUnit__DOT__d_in = VL_RAND_RESET_I(16);
    vlSelf->ControlUnit__DOT__reg_s = VL_RAND_RESET_I(16);
    vlSelf->ControlUnit__DOT__reg_c = VL_RAND_RESET_I(16);
    vlSelf->ControlUnit__DOT__result = VL_RAND_RESET_I(16);
    vlSelf->ControlUnit__DOT__reg_i = VL_RAND_RESET_I(16);
    vlSelf->ControlUnit__DOT__x = VL_RAND_RESET_I(16);
    vlSelf->ControlUnit__DOT__y = VL_RAND_RESET_I(16);
    vlSelf->ControlUnit__DOT__mX__DOT__Reg0 = VL_RAND_RESET_I(16);
    vlSelf->ControlUnit__DOT__mX__DOT__Reg1 = VL_RAND_RESET_I(16);
    vlSelf->ControlUnit__DOT__mX__DOT__Reg2 = VL_RAND_RESET_I(16);
    vlSelf->ControlUnit__DOT__mX__DOT__Reg3 = VL_RAND_RESET_I(16);
    vlSelf->ControlUnit__DOT__mX__DOT__Reg4 = VL_RAND_RESET_I(16);
    vlSelf->ControlUnit__DOT__mX__DOT__Reg5 = VL_RAND_RESET_I(16);
    vlSelf->ControlUnit__DOT__mX__DOT__Reg6 = VL_RAND_RESET_I(16);
    vlSelf->ControlUnit__DOT__mX__DOT__Reg7 = VL_RAND_RESET_I(16);
    vlSelf->ControlUnit__DOT__mY__DOT__Reg0 = VL_RAND_RESET_I(16);
    vlSelf->ControlUnit__DOT__mY__DOT__Reg1 = VL_RAND_RESET_I(16);
    vlSelf->ControlUnit__DOT__mY__DOT__Reg2 = VL_RAND_RESET_I(16);
    vlSelf->ControlUnit__DOT__mY__DOT__Reg3 = VL_RAND_RESET_I(16);
    vlSelf->ControlUnit__DOT__mY__DOT__Reg4 = VL_RAND_RESET_I(16);
    vlSelf->ControlUnit__DOT__mY__DOT__Reg5 = VL_RAND_RESET_I(16);
    vlSelf->ControlUnit__DOT__mY__DOT__Reg6 = VL_RAND_RESET_I(16);
    vlSelf->ControlUnit__DOT__mY__DOT__Reg7 = VL_RAND_RESET_I(16);
    vlSelf->ControlUnit__DOT__alu__DOT__alu_result = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
