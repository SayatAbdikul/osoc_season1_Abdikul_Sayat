// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_module.h for the primary calling header

#include "Vtop_module__pch.h"
#include "Vtop_module__Syms.h"
#include "Vtop_module___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_module___024root___dump_triggers__ico(Vtop_module___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_module___024root___eval_triggers__ico(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_module___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vtop_module___024unit____Vdpiimwrap_ALU_TOP____024unit(IData/*31:0*/ q, IData/*31:0*/ r, IData/*31:0*/ w, IData/*31:0*/ &ALU__Vfuncrtn);

VL_INLINE_OPT void Vtop_module___024root___ico_sequent__TOP__0(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->select = (7U & ((IData)(vlSelf->instruction) 
                            >> 2U));
    Vtop_module___024unit____Vdpiimwrap_ALU_TOP____024unit(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_s, 
                                                           vlSelf->top_module__DOT__u_ControlUnit__DOT__registers
                                                           [
                                                           (7U 
                                                            & ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i) 
                                                               >> 0xaU))], vlSelf->select, vlSelf->__Vfunc_ALU__0__Vfuncout);
    vlSelf->top_module__DOT__u_ControlUnit__DOT__cpp_result 
        = vlSelf->__Vfunc_ALU__0__Vfuncout;
    vlSelf->top_module__DOT__u_ControlUnit__DOT__result 
        = (0xffffU & vlSelf->top_module__DOT__u_ControlUnit__DOT__cpp_result);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_module___024root___dump_triggers__act(Vtop_module___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_module___024root___eval_triggers__act(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0)))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_module___024root___dump_triggers__act(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*2:0*/, 64> Vtop_module__ConstPool__TABLE_h576d4726_0;

VL_INLINE_OPT void Vtop_module___024root___nba_sequent__TOP__1(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___nba_sequent__TOP__1\n"); );
    // Init
    SData/*15:0*/ __Vdly__top_module__DOT__u_ControlUnit__DOT__reg_c;
    __Vdly__top_module__DOT__u_ControlUnit__DOT__reg_c = 0;
    SData/*15:0*/ __VdlyVal__top_module__DOT__u_ControlUnit__DOT__registers__v8;
    __VdlyVal__top_module__DOT__u_ControlUnit__DOT__registers__v8 = 0;
    CData/*2:0*/ __VdlyDim0__top_module__DOT__u_ControlUnit__DOT__registers__v8;
    __VdlyDim0__top_module__DOT__u_ControlUnit__DOT__registers__v8 = 0;
    CData/*0:0*/ __VdlySet__top_module__DOT__u_ControlUnit__DOT__registers__v0;
    __VdlySet__top_module__DOT__u_ControlUnit__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__top_module__DOT__u_ControlUnit__DOT__registers__v8;
    __VdlySet__top_module__DOT__u_ControlUnit__DOT__registers__v8 = 0;
    // Body
    __Vdly__top_module__DOT__u_ControlUnit__DOT__reg_c 
        = vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_c;
    __VdlySet__top_module__DOT__u_ControlUnit__DOT__registers__v0 = 0U;
    __VdlySet__top_module__DOT__u_ControlUnit__DOT__registers__v8 = 0U;
    if (vlSelf->reset) {
        vlSelf->top_module__DOT__u_ControlUnit__DOT__i = 8U;
        vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i = 0U;
        __Vdly__top_module__DOT__u_ControlUnit__DOT__reg_c = 0U;
        vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_s = 0U;
        __VdlySet__top_module__DOT__u_ControlUnit__DOT__registers__v0 = 1U;
    } else {
        if (((0U == (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__state)) 
             & (IData)(vlSelf->top_module__DOT__en_i))) {
            vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i 
                = vlSelf->instruction;
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
            __Vdly__top_module__DOT__u_ControlUnit__DOT__reg_c 
                = vlSelf->top_module__DOT__u_ControlUnit__DOT__result;
        }
    }
    vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_c 
        = __Vdly__top_module__DOT__u_ControlUnit__DOT__reg_c;
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
    vlSelf->result = vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_c;
    vlSelf->top_module__DOT__u_ControlUnit__DOT__Rx 
        = (7U & ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i) 
                 >> 0xdU));
    Vtop_module___024unit____Vdpiimwrap_ALU_TOP____024unit(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_s, 
                                                           vlSelf->top_module__DOT__u_ControlUnit__DOT__registers
                                                           [
                                                           (7U 
                                                            & ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i) 
                                                               >> 0xaU))], vlSelf->select, vlSelf->__Vfunc_ALU__0__Vfuncout);
    vlSelf->top_module__DOT__u_ControlUnit__DOT__state 
        = ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__next_state));
    vlSelf->top_module__DOT__u_ControlUnit__DOT__cpp_result 
        = vlSelf->__Vfunc_ALU__0__Vfuncout;
    vlSelf->top_module__DOT__u_ControlUnit__DOT__result 
        = (0xffffU & vlSelf->top_module__DOT__u_ControlUnit__DOT__cpp_result);
    vlSelf->top_module__DOT__en_i = (1U & (~ (IData)(vlSelf->reset)));
    vlSelf->top_module__DOT__en_s = (1U & (~ (IData)(vlSelf->reset)));
    vlSelf->top_module__DOT__en_c = (1U & (~ (IData)(vlSelf->reset)));
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
