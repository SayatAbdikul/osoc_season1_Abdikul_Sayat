// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_module.h for the primary calling header

#include "Vtop_module__pch.h"
#include "Vtop_module__Syms.h"
#include "Vtop_module___024root.h"

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

void Vtop_module___024unit____Vdpiimwrap_ALU_TOP____024unit(IData/*31:0*/ q, IData/*31:0*/ r, IData/*31:0*/ w, IData/*31:0*/ &ALU__Vfuncrtn);

VL_INLINE_OPT void Vtop_module___024root___nba_sequent__TOP__1(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*7:0*/ __Vdly__top_module__DOT__fetch__DOT__pc;
    __Vdly__top_module__DOT__fetch__DOT__pc = 0;
    SData/*15:0*/ __VdlyVal__top_module__DOT__u_ControlUnit__DOT__registers__v8;
    __VdlyVal__top_module__DOT__u_ControlUnit__DOT__registers__v8 = 0;
    CData/*2:0*/ __VdlyDim0__top_module__DOT__u_ControlUnit__DOT__registers__v8;
    __VdlyDim0__top_module__DOT__u_ControlUnit__DOT__registers__v8 = 0;
    CData/*0:0*/ __VdlySet__top_module__DOT__u_ControlUnit__DOT__registers__v0;
    __VdlySet__top_module__DOT__u_ControlUnit__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__top_module__DOT__u_ControlUnit__DOT__registers__v8;
    __VdlySet__top_module__DOT__u_ControlUnit__DOT__registers__v8 = 0;
    // Body
    __Vdly__top_module__DOT__fetch__DOT__pc = vlSelf->top_module__DOT__fetch__DOT__pc;
    __VdlySet__top_module__DOT__u_ControlUnit__DOT__registers__v0 = 0U;
    __VdlySet__top_module__DOT__u_ControlUnit__DOT__registers__v8 = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        vlSelf->top_module__DOT__u_ControlUnit__DOT__state 
            = vlSelf->top_module__DOT__u_ControlUnit__DOT__next_state;
    }
    if (vlSelf->reset) {
        vlSelf->top_module__DOT__u_ControlUnit__DOT__i = 8U;
        __Vdly__top_module__DOT__fetch__DOT__pc = 0U;
        vlSelf->top_module__DOT__fetch__DOT__pc = __Vdly__top_module__DOT__fetch__DOT__pc;
        __VdlySet__top_module__DOT__u_ControlUnit__DOT__registers__v0 = 1U;
        vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_s = 0U;
    } else {
        if (vlSelf->top_module__DOT__en_pc) {
            __Vdly__top_module__DOT__fetch__DOT__pc 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->top_module__DOT__fetch__DOT__pc)));
        }
        vlSelf->top_module__DOT__fetch__DOT__pc = __Vdly__top_module__DOT__fetch__DOT__pc;
        if ((1U & ((IData)(vlSelf->top_module__DOT__en_reg) 
                   >> (7U & ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i) 
                             >> 0xdU))))) {
            __VdlyVal__top_module__DOT__u_ControlUnit__DOT__registers__v8 
                = vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_c;
            __VdlyDim0__top_module__DOT__u_ControlUnit__DOT__registers__v8 
                = (7U & ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i) 
                         >> 0xdU));
            __VdlySet__top_module__DOT__u_ControlUnit__DOT__registers__v8 = 1U;
        }
        if (vlSelf->top_module__DOT__en_s) {
            vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_s 
                = vlSelf->top_module__DOT__u_ControlUnit__DOT__registers
                [(7U & ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i) 
                        >> 0xdU))];
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
    if (vlSelf->reset) {
        vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_c = 0U;
        vlSelf->result = vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_c;
        vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i = 0U;
    } else {
        if (vlSelf->top_module__DOT__en_c) {
            vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_c 
                = vlSelf->top_module__DOT__u_ControlUnit__DOT__result;
        }
        vlSelf->result = vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_c;
        if (vlSelf->top_module__DOT__en_i) {
            vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i 
                = vlSelf->top_module__DOT__instruction;
        }
    }
    vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_a 
        = vlSelf->top_module__DOT__u_ControlUnit__DOT__registers
        [(7U & ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i) 
                >> 0xdU))];
    vlSelf->select = (7U & ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i) 
                            >> 2U));
    if (vlSelf->reset) {
        vlSelf->top_module__DOT__en_i = 0U;
        vlSelf->top_module__DOT__en_s = 0U;
        vlSelf->top_module__DOT__en_c = 0U;
        vlSelf->top_module__DOT__en_pc = 0U;
    } else if ((0U == (IData)(vlSelf->top_module__DOT__state))) {
        vlSelf->top_module__DOT__en_i = 1U;
        vlSelf->top_module__DOT__en_s = 0U;
        vlSelf->top_module__DOT__en_c = 0U;
        vlSelf->top_module__DOT__en_pc = 0U;
        vlSelf->top_module__DOT__en_reg = 0U;
    } else if ((1U == (IData)(vlSelf->top_module__DOT__state))) {
        vlSelf->top_module__DOT__en_i = 0U;
        vlSelf->top_module__DOT__en_s = 1U;
        vlSelf->top_module__DOT__en_c = 0U;
        vlSelf->top_module__DOT__en_pc = 0U;
        vlSelf->top_module__DOT__en_reg = 0U;
    } else if ((2U == (IData)(vlSelf->top_module__DOT__state))) {
        vlSelf->top_module__DOT__en_i = 0U;
        vlSelf->top_module__DOT__en_s = 0U;
        vlSelf->top_module__DOT__en_c = 1U;
        vlSelf->top_module__DOT__en_pc = 0U;
        vlSelf->top_module__DOT__en_reg = 0U;
    } else if ((3U == (IData)(vlSelf->top_module__DOT__state))) {
        vlSelf->top_module__DOT__en_i = 0U;
        vlSelf->top_module__DOT__en_s = 0U;
        vlSelf->top_module__DOT__en_c = 0U;
        vlSelf->top_module__DOT__en_pc = 1U;
        vlSelf->top_module__DOT__en_reg = ((IData)(vlSelf->top_module__DOT__en_reg) 
                                           | (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((IData)(vlSelf->top_module__DOT__instruction) 
                                                     >> 0xdU)))));
    } else if ((4U == (IData)(vlSelf->top_module__DOT__state))) {
        vlSelf->top_module__DOT__en_i = 0U;
        vlSelf->top_module__DOT__en_s = 0U;
        vlSelf->top_module__DOT__en_c = 0U;
        vlSelf->top_module__DOT__en_pc = 0U;
        vlSelf->top_module__DOT__en_reg = ((~ ((IData)(1U) 
                                               << (7U 
                                                   & ((IData)(vlSelf->top_module__DOT__instruction) 
                                                      >> 0xdU)))) 
                                           & (IData)(vlSelf->top_module__DOT__en_reg));
    }
    vlSelf->done = vlSelf->top_module__DOT__en_c;
    vlSelf->top_module__DOT__u_ControlUnit__DOT__operand = 0U;
    vlSelf->top_module__DOT__u_ControlUnit__DOT__cpp_result = 0U;
    if (vlSelf->top_module__DOT__en_s) {
        vlSelf->top_module__DOT__u_ControlUnit__DOT__operand 
            = ((1U == (3U & (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i)))
                ? (0xffU & ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i) 
                            >> 5U)) : vlSelf->top_module__DOT__u_ControlUnit__DOT__registers
               [(7U & ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i) 
                       >> 0xaU))]);
    }
    if (vlSelf->top_module__DOT__en_s) {
        if ((1U == (3U & (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i)))) {
            Vtop_module___024unit____Vdpiimwrap_ALU_TOP____024unit(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_s, 
                                                                   (0xffU 
                                                                    & ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i) 
                                                                       >> 5U)), (IData)(vlSelf->select), vlSelf->__Vfunc_ALU__0__Vfuncout);
            vlSelf->top_module__DOT__u_ControlUnit__DOT__cpp_result 
                = vlSelf->__Vfunc_ALU__0__Vfuncout;
        } else {
            Vtop_module___024unit____Vdpiimwrap_ALU_TOP____024unit(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_s, 
                                                                   vlSelf->top_module__DOT__u_ControlUnit__DOT__registers
                                                                   [
                                                                   (7U 
                                                                    & ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i) 
                                                                       >> 0xaU))], vlSelf->select, vlSelf->__Vfunc_ALU__1__Vfuncout);
            vlSelf->top_module__DOT__u_ControlUnit__DOT__cpp_result 
                = vlSelf->__Vfunc_ALU__1__Vfuncout;
        }
    }
    vlSelf->top_module__DOT__state = ((IData)(vlSelf->reset)
                                       ? 0U : (IData)(vlSelf->top_module__DOT__next_state));
    if (((((((((0U == (IData)(vlSelf->select)) | (1U 
                                                  == (IData)(vlSelf->select))) 
              | (2U == (IData)(vlSelf->select))) | 
             (3U == (IData)(vlSelf->select))) | (4U 
                                                 == (IData)(vlSelf->select))) 
           | (5U == (IData)(vlSelf->select))) | (6U 
                                                 == (IData)(vlSelf->select))) 
         | (7U == (IData)(vlSelf->select)))) {
        vlSelf->top_module__DOT__u_ControlUnit__DOT__result 
            = (0xffffU & ((0U == (IData)(vlSelf->select))
                           ? ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_a) 
                              + (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__operand))
                           : ((1U == (IData)(vlSelf->select))
                               ? ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_a) 
                                  - (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__operand))
                               : ((2U == (IData)(vlSelf->select))
                                   ? ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_a) 
                                      & (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__operand))
                                   : ((3U == (IData)(vlSelf->select))
                                       ? ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_a) 
                                          | (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__operand))
                                       : ((4U == (IData)(vlSelf->select))
                                           ? ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_a) 
                                              ^ (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__operand))
                                           : ((5U == (IData)(vlSelf->select))
                                               ? VL_SHIFTL_III(16,16,16, (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_a), (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__operand))
                                               : ((6U 
                                                   == (IData)(vlSelf->select))
                                                   ? 
                                                  VL_SHIFTR_III(16,16,16, (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_a), (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__operand))
                                                   : 
                                                  (((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_a) 
                                                    > (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__operand))
                                                    ? 1U
                                                    : 
                                                   (((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_a) 
                                                     < (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__operand))
                                                     ? 2U
                                                     : 0U))))))))));
    }
}
