// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFetchUnit.h for the primary calling header

#include "VFetchUnit__pch.h"
#include "VFetchUnit___024root.h"

VL_ATTR_COLD void VFetchUnit___024root___eval_static(VFetchUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFetchUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFetchUnit___024root___eval_static\n"); );
}

VL_ATTR_COLD void VFetchUnit___024root___eval_initial__TOP(VFetchUnit___024root* vlSelf);

VL_ATTR_COLD void VFetchUnit___024root___eval_initial(VFetchUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFetchUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFetchUnit___024root___eval_initial\n"); );
    // Body
    VFetchUnit___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
}

extern const VlWide<10>/*319:0*/ VFetchUnit__ConstPool__CONST_h16d87fe8_0;

VL_ATTR_COLD void VFetchUnit___024root___eval_initial__TOP(VFetchUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFetchUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFetchUnit___024root___eval_initial__TOP\n"); );
    // Body
    VL_READMEM_N(true, 16, 4096, 0, VL_CVT_PACK_STR_NW(10, VFetchUnit__ConstPool__CONST_h16d87fe8_0)
                 ,  &(vlSelf->FetchUnit__DOT__memory)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VFetchUnit___024root___eval_final(VFetchUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFetchUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFetchUnit___024root___eval_final\n"); );
}

VL_ATTR_COLD void VFetchUnit___024root___eval_settle(VFetchUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFetchUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFetchUnit___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFetchUnit___024root___dump_triggers__act(VFetchUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFetchUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFetchUnit___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VFetchUnit___024root___dump_triggers__nba(VFetchUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFetchUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFetchUnit___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VFetchUnit___024root___ctor_var_reset(VFetchUnit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFetchUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFetchUnit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->en_pc = VL_RAND_RESET_I(1);
    vlSelf->new_pc = VL_RAND_RESET_I(12);
    vlSelf->en_new_pc = VL_RAND_RESET_I(1);
    vlSelf->instruction = VL_RAND_RESET_I(16);
    vlSelf->FetchUnit__DOT__pc = VL_RAND_RESET_I(12);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->FetchUnit__DOT__memory[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
}
