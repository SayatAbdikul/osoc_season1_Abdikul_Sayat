// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_module.h for the primary calling header

#include "Vtop_module__pch.h"
#include "Vtop_module__Syms.h"
#include "Vtop_module___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_module___024root___dump_triggers__stl(Vtop_module___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_module___024root___eval_triggers__stl(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_module___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void Vtop_module___024unit____Vdpiimwrap_ALU_TOP____024unit(IData/*31:0*/ q, IData/*31:0*/ r, IData/*31:0*/ w, IData/*31:0*/ &ALU__Vfuncrtn);

VL_ATTR_COLD void Vtop_module___024root___stl_sequent__TOP__0(Vtop_module___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->done = vlSelf->top_module__DOT__en_c;
    vlSelf->result = vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_c;
    vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_a 
        = vlSelf->top_module__DOT__u_ControlUnit__DOT__registers
        [(7U & ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i) 
                >> 0xdU))];
    vlSelf->top_module__DOT__u_ControlUnit__DOT__operand = 0U;
    vlSelf->select = (7U & ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i) 
                            >> 2U));
    if (vlSelf->top_module__DOT__en_s) {
        vlSelf->top_module__DOT__u_ControlUnit__DOT__operand 
            = ((1U == (3U & (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i)))
                ? (0xffU & ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i) 
                            >> 5U)) : vlSelf->top_module__DOT__u_ControlUnit__DOT__registers
               [(7U & ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i) 
                       >> 0xaU))]);
    }
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
    vlSelf->top_module__DOT__u_ControlUnit__DOT__cpp_result = 0U;
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
}
