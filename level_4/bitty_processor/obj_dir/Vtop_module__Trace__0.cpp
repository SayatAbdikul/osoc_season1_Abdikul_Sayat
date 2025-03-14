// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_module__Syms.h"


void Vtop_module___024root__trace_chg_0_sub_0(Vtop_module___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_module___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root__trace_chg_0\n"); );
    // Init
    Vtop_module___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_module___024root*>(voidSelf);
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_module___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_module___024root__trace_chg_0_sub_0(Vtop_module___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->top_module__DOT__en_i));
        bufp->chgBit(oldp+1,(vlSelf->top_module__DOT__en_s));
        bufp->chgBit(oldp+2,(vlSelf->top_module__DOT__en_c));
        bufp->chgBit(oldp+3,(vlSelf->top_module__DOT__en_pc));
        bufp->chgCData(oldp+4,(vlSelf->top_module__DOT__en_reg),8);
        bufp->chgCData(oldp+5,(vlSelf->top_module__DOT__state),3);
        bufp->chgCData(oldp+6,(vlSelf->top_module__DOT__fetch__DOT__pc),8);
        bufp->chgSData(oldp+7,(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_s),16);
        bufp->chgSData(oldp+8,(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_c),16);
        bufp->chgSData(oldp+9,(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i),16);
        bufp->chgSData(oldp+10,(vlSelf->top_module__DOT__u_ControlUnit__DOT__result),16);
        bufp->chgCData(oldp+11,(vlSelf->top_module__DOT__u_ControlUnit__DOT__state),3);
        bufp->chgSData(oldp+12,(vlSelf->top_module__DOT__u_ControlUnit__DOT__registers[0]),16);
        bufp->chgSData(oldp+13,(vlSelf->top_module__DOT__u_ControlUnit__DOT__registers[1]),16);
        bufp->chgSData(oldp+14,(vlSelf->top_module__DOT__u_ControlUnit__DOT__registers[2]),16);
        bufp->chgSData(oldp+15,(vlSelf->top_module__DOT__u_ControlUnit__DOT__registers[3]),16);
        bufp->chgSData(oldp+16,(vlSelf->top_module__DOT__u_ControlUnit__DOT__registers[4]),16);
        bufp->chgSData(oldp+17,(vlSelf->top_module__DOT__u_ControlUnit__DOT__registers[5]),16);
        bufp->chgSData(oldp+18,(vlSelf->top_module__DOT__u_ControlUnit__DOT__registers[6]),16);
        bufp->chgSData(oldp+19,(vlSelf->top_module__DOT__u_ControlUnit__DOT__registers[7]),16);
        bufp->chgCData(oldp+20,((3U & (IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i))),2);
        bufp->chgCData(oldp+21,((7U & ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i) 
                                       >> 0xdU))),3);
        bufp->chgCData(oldp+22,((7U & ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i) 
                                       >> 0xaU))),3);
        bufp->chgSData(oldp+23,(vlSelf->top_module__DOT__u_ControlUnit__DOT__operand),16);
        bufp->chgSData(oldp+24,(vlSelf->top_module__DOT__u_ControlUnit__DOT__registers
                                [(7U & ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i) 
                                        >> 0xaU))]),16);
        bufp->chgIData(oldp+25,(vlSelf->top_module__DOT__u_ControlUnit__DOT__i),32);
        bufp->chgIData(oldp+26,(vlSelf->top_module__DOT__u_ControlUnit__DOT__cpp_result),32);
        bufp->chgSData(oldp+27,(vlSelf->top_module__DOT__u_ControlUnit__DOT____Vcellinp__b_alu__in_a),16);
    }
    bufp->chgBit(oldp+28,(vlSelf->clk));
    bufp->chgBit(oldp+29,(vlSelf->reset));
    bufp->chgBit(oldp+30,(vlSelf->done));
    bufp->chgSData(oldp+31,(vlSelf->result),16);
    bufp->chgCData(oldp+32,(vlSelf->select),3);
    bufp->chgSData(oldp+33,(vlSelf->top_module__DOT__instruction),16);
    bufp->chgCData(oldp+34,(vlSelf->top_module__DOT__next_state),3);
    bufp->chgCData(oldp+35,(vlSelf->top_module__DOT__u_ControlUnit__DOT__tests),6);
}

void Vtop_module___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root__trace_cleanup\n"); );
    // Init
    Vtop_module___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_module___024root*>(voidSelf);
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
