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
        bufp->chgSData(oldp+3,(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_s),16);
        bufp->chgSData(oldp+4,(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_c),16);
        bufp->chgSData(oldp+5,(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i),16);
        bufp->chgCData(oldp+6,(vlSelf->top_module__DOT__u_ControlUnit__DOT__state),3);
        bufp->chgCData(oldp+7,(vlSelf->top_module__DOT__u_ControlUnit__DOT__next_state),3);
        bufp->chgSData(oldp+8,(vlSelf->top_module__DOT__u_ControlUnit__DOT__registers[0]),16);
        bufp->chgSData(oldp+9,(vlSelf->top_module__DOT__u_ControlUnit__DOT__registers[1]),16);
        bufp->chgSData(oldp+10,(vlSelf->top_module__DOT__u_ControlUnit__DOT__registers[2]),16);
        bufp->chgSData(oldp+11,(vlSelf->top_module__DOT__u_ControlUnit__DOT__registers[3]),16);
        bufp->chgSData(oldp+12,(vlSelf->top_module__DOT__u_ControlUnit__DOT__registers[4]),16);
        bufp->chgSData(oldp+13,(vlSelf->top_module__DOT__u_ControlUnit__DOT__registers[5]),16);
        bufp->chgSData(oldp+14,(vlSelf->top_module__DOT__u_ControlUnit__DOT__registers[6]),16);
        bufp->chgSData(oldp+15,(vlSelf->top_module__DOT__u_ControlUnit__DOT__registers[7]),16);
        bufp->chgCData(oldp+16,((7U & ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i) 
                                       >> 0xdU))),3);
        bufp->chgCData(oldp+17,((7U & ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i) 
                                       >> 0xaU))),3);
        bufp->chgCData(oldp+18,((0xfU & ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i) 
                                         >> 3U))),4);
        bufp->chgBit(oldp+19,((1U & ((IData)(vlSelf->top_module__DOT__u_ControlUnit__DOT__reg_i) 
                                     >> 2U))));
        bufp->chgSData(oldp+20,(vlSelf->top_module__DOT__u_ControlUnit__DOT__y),16);
        bufp->chgSData(oldp+21,(vlSelf->top_module__DOT__u_ControlUnit__DOT__result),16);
        bufp->chgIData(oldp+22,(vlSelf->top_module__DOT__u_ControlUnit__DOT__i),32);
        bufp->chgSData(oldp+23,(vlSelf->top_module__DOT__u_ControlUnit__DOT__alu__DOT__alu_result),16);
    }
    bufp->chgBit(oldp+24,(vlSelf->clk));
    bufp->chgBit(oldp+25,(vlSelf->reset));
    bufp->chgSData(oldp+26,(vlSelf->instruction),16);
    bufp->chgBit(oldp+27,(vlSelf->done));
    bufp->chgSData(oldp+28,(vlSelf->result),16);
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
