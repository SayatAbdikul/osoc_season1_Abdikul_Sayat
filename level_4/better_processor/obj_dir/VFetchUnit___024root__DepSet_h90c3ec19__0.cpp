// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFetchUnit.h for the primary calling header

#include "VFetchUnit__pch.h"
#include "VFetchUnit___024root.h"

void VFetchUnit___024root___eval_act(VFetchUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFetchUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFetchUnit___024root___eval_act\n"); );
}

void VFetchUnit___024root___nba_sequent__TOP__0(VFetchUnit___024root* vlSelf);
void VFetchUnit___024root___nba_sequent__TOP__1(VFetchUnit___024root* vlSelf);
void VFetchUnit___024root___nba_sequent__TOP__2(VFetchUnit___024root* vlSelf);

void VFetchUnit___024root___eval_nba(VFetchUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFetchUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFetchUnit___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VFetchUnit___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VFetchUnit___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VFetchUnit___024root___nba_sequent__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void VFetchUnit___024root___nba_sequent__TOP__0(VFetchUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFetchUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFetchUnit___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__FetchUnit__DOT__pc = vlSelf->FetchUnit__DOT__pc;
    if (vlSelf->reset) {
        vlSelf->__Vdly__FetchUnit__DOT__pc = 0U;
    } else if (vlSelf->en_pc) {
        vlSelf->__Vdly__FetchUnit__DOT__pc = (0xffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->FetchUnit__DOT__pc)));
    }
}

VL_INLINE_OPT void VFetchUnit___024root___nba_sequent__TOP__1(VFetchUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFetchUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFetchUnit___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->en_pc) {
        vlSelf->instruction = vlSelf->FetchUnit__DOT__memory
            [vlSelf->FetchUnit__DOT__pc];
    }
}

VL_INLINE_OPT void VFetchUnit___024root___nba_sequent__TOP__2(VFetchUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFetchUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFetchUnit___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->FetchUnit__DOT__pc = vlSelf->__Vdly__FetchUnit__DOT__pc;
}

void VFetchUnit___024root___eval_triggers__act(VFetchUnit___024root* vlSelf);

bool VFetchUnit___024root___eval_phase__act(VFetchUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFetchUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFetchUnit___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VFetchUnit___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VFetchUnit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VFetchUnit___024root___eval_phase__nba(VFetchUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFetchUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFetchUnit___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VFetchUnit___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFetchUnit___024root___dump_triggers__nba(VFetchUnit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VFetchUnit___024root___dump_triggers__act(VFetchUnit___024root* vlSelf);
#endif  // VL_DEBUG

void VFetchUnit___024root___eval(VFetchUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFetchUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFetchUnit___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VFetchUnit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/FetchUnit.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VFetchUnit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/FetchUnit.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VFetchUnit___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VFetchUnit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VFetchUnit___024root___eval_debug_assertions(VFetchUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFetchUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFetchUnit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->en_pc & 0xfeU))) {
        Verilated::overWidthError("en_pc");}
}
#endif  // VL_DEBUG