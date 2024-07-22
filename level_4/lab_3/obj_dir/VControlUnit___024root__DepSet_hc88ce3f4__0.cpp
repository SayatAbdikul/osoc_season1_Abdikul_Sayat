// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VControlUnit.h for the primary calling header

#include "VControlUnit__pch.h"
#include "VControlUnit___024root.h"

void VControlUnit___024root___eval_act(VControlUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_act\n"); );
}

void VControlUnit___024root___nba_sequent__TOP__0(VControlUnit___024root* vlSelf);
void VControlUnit___024root___nba_sequent__TOP__1(VControlUnit___024root* vlSelf);
void VControlUnit___024root___nba_sequent__TOP__2(VControlUnit___024root* vlSelf);
void VControlUnit___024root___nba_sequent__TOP__3(VControlUnit___024root* vlSelf);

void VControlUnit___024root___eval_nba(VControlUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VControlUnit___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VControlUnit___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VControlUnit___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VControlUnit___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void VControlUnit___024root___nba_sequent__TOP__0(VControlUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->ControlUnit__DOT__d_in = 0U;
    }
}

VL_INLINE_OPT void VControlUnit___024root___nba_sequent__TOP__1(VControlUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->ControlUnit__DOT__reg_s = 0U;
        vlSelf->ControlUnit__DOT__reg_i = 0U;
        vlSelf->ControlUnit__DOT__mY__DOT__Reg7 = 0U;
        vlSelf->ControlUnit__DOT__mY__DOT__Reg6 = 0U;
        vlSelf->ControlUnit__DOT__mY__DOT__Reg5 = 0U;
        vlSelf->ControlUnit__DOT__mY__DOT__Reg4 = 0U;
        vlSelf->ControlUnit__DOT__mY__DOT__Reg3 = 0U;
        vlSelf->ControlUnit__DOT__mY__DOT__Reg2 = 0U;
        vlSelf->ControlUnit__DOT__mY__DOT__Reg0 = 0U;
        vlSelf->ControlUnit__DOT__mY__DOT__Reg1 = 0U;
        vlSelf->ControlUnit__DOT__mX__DOT__Reg7 = 0U;
        vlSelf->ControlUnit__DOT__mX__DOT__Reg6 = 0U;
        vlSelf->ControlUnit__DOT__mX__DOT__Reg5 = 0U;
        vlSelf->ControlUnit__DOT__mX__DOT__Reg4 = 0U;
        vlSelf->ControlUnit__DOT__mX__DOT__Reg3 = 0U;
        vlSelf->ControlUnit__DOT__mX__DOT__Reg2 = 0U;
        vlSelf->ControlUnit__DOT__mX__DOT__Reg0 = 0U;
        vlSelf->ControlUnit__DOT__mX__DOT__Reg1 = 0U;
        vlSelf->ControlUnit__DOT__reg_c = 0U;
    } else {
        if (vlSelf->en_s) {
            vlSelf->ControlUnit__DOT__reg_s = vlSelf->ControlUnit__DOT__x;
        }
        if (vlSelf->en_i) {
            vlSelf->ControlUnit__DOT__reg_i = vlSelf->instruction;
        }
        if (vlSelf->en_7) {
            vlSelf->ControlUnit__DOT__mY__DOT__Reg7 
                = vlSelf->ControlUnit__DOT__reg_c;
            vlSelf->ControlUnit__DOT__mX__DOT__Reg7 
                = vlSelf->ControlUnit__DOT__reg_c;
        }
        if (vlSelf->en_6) {
            vlSelf->ControlUnit__DOT__mY__DOT__Reg6 
                = vlSelf->ControlUnit__DOT__reg_c;
            vlSelf->ControlUnit__DOT__mX__DOT__Reg6 
                = vlSelf->ControlUnit__DOT__reg_c;
        }
        if (vlSelf->en_5) {
            vlSelf->ControlUnit__DOT__mY__DOT__Reg5 
                = vlSelf->ControlUnit__DOT__reg_c;
            vlSelf->ControlUnit__DOT__mX__DOT__Reg5 
                = vlSelf->ControlUnit__DOT__reg_c;
        }
        if (vlSelf->en_4) {
            vlSelf->ControlUnit__DOT__mY__DOT__Reg4 
                = vlSelf->ControlUnit__DOT__reg_c;
            vlSelf->ControlUnit__DOT__mX__DOT__Reg4 
                = vlSelf->ControlUnit__DOT__reg_c;
        }
        if (vlSelf->en_3) {
            vlSelf->ControlUnit__DOT__mY__DOT__Reg3 
                = vlSelf->ControlUnit__DOT__reg_c;
            vlSelf->ControlUnit__DOT__mX__DOT__Reg3 
                = vlSelf->ControlUnit__DOT__reg_c;
        }
        if (vlSelf->en_2) {
            vlSelf->ControlUnit__DOT__mY__DOT__Reg2 
                = vlSelf->ControlUnit__DOT__reg_c;
            vlSelf->ControlUnit__DOT__mX__DOT__Reg2 
                = vlSelf->ControlUnit__DOT__reg_c;
        }
        if (vlSelf->en_0) {
            vlSelf->ControlUnit__DOT__mY__DOT__Reg0 
                = vlSelf->ControlUnit__DOT__reg_c;
            vlSelf->ControlUnit__DOT__mX__DOT__Reg0 
                = vlSelf->ControlUnit__DOT__reg_c;
        }
        if (vlSelf->en_1) {
            vlSelf->ControlUnit__DOT__mY__DOT__Reg1 
                = vlSelf->ControlUnit__DOT__reg_c;
            vlSelf->ControlUnit__DOT__mX__DOT__Reg1 
                = vlSelf->ControlUnit__DOT__reg_c;
        }
        if (vlSelf->en_c) {
            vlSelf->ControlUnit__DOT__reg_c = vlSelf->ControlUnit__DOT__result;
        }
    }
}

VL_INLINE_OPT void VControlUnit___024root___nba_sequent__TOP__2(VControlUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->ControlUnit__DOT__reg_s = 0U;
        vlSelf->ControlUnit__DOT__reg_i = 0U;
        vlSelf->ControlUnit__DOT__reg_c = 0U;
        vlSelf->ControlUnit__DOT__result = 0U;
    }
}

VL_INLINE_OPT void VControlUnit___024root___nba_sequent__TOP__3(VControlUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___nba_sequent__TOP__3\n"); );
    // Body
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
    vlSelf->d_out = vlSelf->ControlUnit__DOT__reg_c;
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

void VControlUnit___024root___eval_triggers__act(VControlUnit___024root* vlSelf);

bool VControlUnit___024root___eval_phase__act(VControlUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VControlUnit___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VControlUnit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VControlUnit___024root___eval_phase__nba(VControlUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VControlUnit___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VControlUnit___024root___dump_triggers__nba(VControlUnit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VControlUnit___024root___dump_triggers__act(VControlUnit___024root* vlSelf);
#endif  // VL_DEBUG

void VControlUnit___024root___eval(VControlUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VControlUnit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("ControlUnit.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VControlUnit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("ControlUnit.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VControlUnit___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VControlUnit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VControlUnit___024root___eval_debug_assertions(VControlUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->en_s & 0xfeU))) {
        Verilated::overWidthError("en_s");}
    if (VL_UNLIKELY((vlSelf->en_c & 0xfeU))) {
        Verilated::overWidthError("en_c");}
    if (VL_UNLIKELY((vlSelf->en_i & 0xfeU))) {
        Verilated::overWidthError("en_i");}
    if (VL_UNLIKELY((vlSelf->en_0 & 0xfeU))) {
        Verilated::overWidthError("en_0");}
    if (VL_UNLIKELY((vlSelf->en_1 & 0xfeU))) {
        Verilated::overWidthError("en_1");}
    if (VL_UNLIKELY((vlSelf->en_2 & 0xfeU))) {
        Verilated::overWidthError("en_2");}
    if (VL_UNLIKELY((vlSelf->en_3 & 0xfeU))) {
        Verilated::overWidthError("en_3");}
    if (VL_UNLIKELY((vlSelf->en_4 & 0xfeU))) {
        Verilated::overWidthError("en_4");}
    if (VL_UNLIKELY((vlSelf->en_5 & 0xfeU))) {
        Verilated::overWidthError("en_5");}
    if (VL_UNLIKELY((vlSelf->en_6 & 0xfeU))) {
        Verilated::overWidthError("en_6");}
    if (VL_UNLIKELY((vlSelf->en_7 & 0xfeU))) {
        Verilated::overWidthError("en_7");}
}
#endif  // VL_DEBUG
