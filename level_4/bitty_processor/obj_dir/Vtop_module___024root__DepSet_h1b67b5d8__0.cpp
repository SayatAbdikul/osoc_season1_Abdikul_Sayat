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
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_module___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_module___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_module___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_module___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop_module___024root___nba_sequent__TOP__0(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __VdlyVal__top_module__DOT__u_ControlUnit__DOT__registers__v8;
    __VdlyVal__top_module__DOT__u_ControlUnit__DOT__registers__v8 = 0;
    CData/*2:0*/ __VdlyDim0__top_module__DOT__u_ControlUnit__DOT__registers__v8;
    __VdlyDim0__top_module__DOT__u_ControlUnit__DOT__registers__v8 = 0;
    CData/*0:0*/ __VdlySet__top_module__DOT__u_ControlUnit__DOT__registers__v0;
    __VdlySet__top_module__DOT__u_ControlUnit__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__top_module__DOT__u_ControlUnit__DOT__registers__v8;
    __VdlySet__top_module__DOT__u_ControlUnit__DOT__registers__v8 = 0;
    // Body
    vlSelf->__Vdly__top_module__DOT__fetch__DOT__pc 
        = vlSelf->top_module__DOT__fetch__DOT__pc;
    vlSelf->__Vdly__top_module__DOT__u_ControlUnit__DOT__reg_c 
        = vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_c;
    __VdlySet__top_module__DOT__u_ControlUnit__DOT__registers__v0 = 0U;
    __VdlySet__top_module__DOT__u_ControlUnit__DOT__registers__v8 = 0U;
    if (vlSelf->reset) {
        vlSelf->top_module__DOT__u_ControlUnit__DOT__i = 8U;
        vlSelf->__Vdly__top_module__DOT__fetch__DOT__pc = 0U;
        vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i = 0U;
        vlSelf->__Vdly__top_module__DOT__u_ControlUnit__DOT__reg_c = 0U;
        vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_s = 0U;
        __VdlySet__top_module__DOT__u_ControlUnit__DOT__registers__v0 = 1U;
    } else {
        if (vlSelf->top_module__DOT__en_pc) {
            vlSelf->__Vdly__top_module__DOT__fetch__DOT__pc 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->top_module__DOT__fetch__DOT__pc)));
        }
        if (((0U == (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__state)) 
             & (IData)(vlSelf->top_module__DOT__en_i))) {
            vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i 
                = vlSelf->top_module__DOT__instruction;
        }
        if (((1U == (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__state)) 
             & (IData)(vlSelf->top_module__DOT__en_s))) {
            vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_s 
                = vlSelf->top_module__DOT__u_ControlUnit__DOT__registers
                [vlSelf->top_module__DOT__u_ControlUnit__DOT__Rx];
        }
        if ((3U == (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__state))) {
            __VdlyVal__top_module__DOT__u_ControlUnit__DOT__registers__v8 
                = vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_c;
            __VdlyDim0__top_module__DOT__u_ControlUnit__DOT__registers__v8 
                = vlSelf->top_module__DOT__u_ControlUnit__DOT__Rx;
            __VdlySet__top_module__DOT__u_ControlUnit__DOT__registers__v8 = 1U;
        }
        if (((2U == (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__state)) 
             & (IData)(vlSelf->top_module__DOT__en_c))) {
            vlSelf->__Vdly__top_module__DOT__u_ControlUnit__DOT__reg_c 
                = vlSelf->top_module__DOT__u_ControlUnit__DOT__result;
        }
    }
    if (__VdlySet__top_module__DOT__u_ControlUnit__DOT__registers__v0) {
        vlSelf->top_module__DOT__u_ControlUnit__DOT__registers[0U] = 0U;
        vlSelf->top_module__DOT__u_ControlUnit__DOT__registers[1U] = 0U;
        vlSelf->top_module__DOT__u_ControlUnit__DOT__registers[2U] = 0U;
        vlSelf->top_module__DOT__u_ControlUnit__DOT__registers[3U] = 0U;
        vlSelf->top_module__DOT__u_ControlUnit__DOT__registers[4U] = 0U;
        vlSelf->top_module__DOT__u_ControlUnit__DOT__registers[5U] = 0U;
        vlSelf->top_module__DOT__u_ControlUnit__DOT__registers[6U] = 0U;
        vlSelf->top_module__DOT__u_ControlUnit__DOT__registers[7U] = 0U;
    }
    if (__VdlySet__top_module__DOT__u_ControlUnit__DOT__registers__v8) {
        vlSelf->top_module__DOT__u_ControlUnit__DOT__registers[__VdlyDim0__top_module__DOT__u_ControlUnit__DOT__registers__v8] 
            = __VdlyVal__top_module__DOT__u_ControlUnit__DOT__registers__v8;
    }
    vlSelf->top_module__DOT__u_ControlUnit__DOT__Rx 
        = (7U & ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i) 
                 >> 0xdU));
    vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_a 
        = vlSelf->top_module__DOT__u_ControlUnit__DOT__registers
        [(7U & ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i) 
                >> 0xdU))];
    vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_b 
        = vlSelf->top_module__DOT__u_ControlUnit__DOT__registers
        [(7U & ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i) 
                >> 0xaU))];
    vlSelf->top_module__DOT__en_i = (1U & (~ (IData)(vlSelf->reset)));
    vlSelf->top_module__DOT__en_s = (1U & (~ (IData)(vlSelf->reset)));
    vlSelf->top_module__DOT__en_c = (1U & (~ (IData)(vlSelf->reset)));
}

VL_INLINE_OPT void Vtop_module___024root___nba_sequent__TOP__1(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (VL_UNLIKELY(((4U == (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__state)) 
                     & ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__result) 
                        != vlSelf->top_module__DOT__u_ControlUnit__DOT__cpp_result)))) {
        VL_WRITEF_NX("Error!\n The cpp result is %5#\n\nThe verilog result is %5#\n\n",0,
                     16,vlSelf->top_module__DOT__u_ControlUnit__DOT__result,
                     16,(IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_c));
    } else if ((4U == (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__state))) {
        vlSelf->top_module__DOT__u_ControlUnit__DOT__tests 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__tests)));
    }
    if (vlSelf->top_module__DOT__en_pc) {
        vlSelf->top_module__DOT__instruction = vlSelf->top_module__DOT__fetch__DOT__memory
            [vlSelf->top_module__DOT__fetch__DOT__pc];
    }
    vlSelf->select = (7U & ((IData)(vlSelf->top_module__DOT__instruction) 
                            >> 2U));
}

extern const VlUnpacked<CData/*2:0*/, 64> Vtop_module__ConstPool__TABLE_h576d4726_0;

VL_INLINE_OPT void Vtop_module___024root___nba_sequent__TOP__2(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_c 
        = vlSelf->__Vdly__top_module__DOT__u_ControlUnit__DOT__reg_c;
    vlSelf->top_module__DOT__fetch__DOT__pc = vlSelf->__Vdly__top_module__DOT__fetch__DOT__pc;
    vlSelf->result = vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_c;
    vlSelf->top_module__DOT__u_ControlUnit__DOT__state 
        = ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__next_state));
    vlSelf->top_module__DOT__en_pc = (1U & (~ (IData)(vlSelf->reset)));
    vlSelf->done = (4U == (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__state));
    vlSelf->__Vtableidx1 = (((IData)(vlSelf->top_module__DOT__en_c) 
                             << 5U) | (((IData)(vlSelf->top_module__DOT__en_s) 
                                        << 4U) | (((IData)(vlSelf->top_module__DOT__en_i) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__state))));
    vlSelf->top_module__DOT__u_ControlUnit__DOT__next_state 
        = Vtop_module__ConstPool__TABLE_h576d4726_0
        [vlSelf->__Vtableidx1];
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
            VL_FATAL_MT("top_module.sv", 1, "", "NBA region did not converge.");
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
                VL_FATAL_MT("top_module.sv", 1, "", "Active region did not converge.");
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
