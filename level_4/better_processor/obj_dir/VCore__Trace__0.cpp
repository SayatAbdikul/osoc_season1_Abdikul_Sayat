// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCore__Syms.h"


void VCore___024root__trace_chg_0_sub_0(VCore___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VCore___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root__trace_chg_0\n"); );
    // Init
    VCore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCore___024root*>(voidSelf);
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VCore___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VCore___024root__trace_chg_0_sub_0(VCore___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->Core__DOT__reg_c),16);
        bufp->chgSData(oldp+1,(vlSelf->Core__DOT__reg_s),16);
        bufp->chgSData(oldp+2,(vlSelf->Core__DOT__registers[0]),16);
        bufp->chgSData(oldp+3,(vlSelf->Core__DOT__registers[1]),16);
        bufp->chgSData(oldp+4,(vlSelf->Core__DOT__registers[2]),16);
        bufp->chgSData(oldp+5,(vlSelf->Core__DOT__registers[3]),16);
        bufp->chgSData(oldp+6,(vlSelf->Core__DOT__registers[4]),16);
        bufp->chgSData(oldp+7,(vlSelf->Core__DOT__registers[5]),16);
        bufp->chgSData(oldp+8,(vlSelf->Core__DOT__registers[6]),16);
        bufp->chgSData(oldp+9,(vlSelf->Core__DOT__registers[7]),16);
        bufp->chgBit(oldp+10,(vlSelf->Core__DOT__en_c));
        bufp->chgBit(oldp+11,(vlSelf->Core__DOT__en_s));
        bufp->chgIData(oldp+12,(vlSelf->Core__DOT__cpp_result),32);
        bufp->chgCData(oldp+13,(vlSelf->Core__DOT__control__DOT__state),2);
        bufp->chgCData(oldp+14,(vlSelf->Core__DOT__control__DOT__next_state),2);
    }
    bufp->chgSData(oldp+15,(vlSelf->instruction),16);
    bufp->chgBit(oldp+16,(vlSelf->clk));
    bufp->chgBit(oldp+17,(vlSelf->run));
    bufp->chgBit(oldp+18,(vlSelf->reset));
    bufp->chgSData(oldp+19,(vlSelf->d_out),16);
    bufp->chgBit(oldp+20,(vlSelf->done));
    bufp->chgCData(oldp+21,(vlSelf->Core__DOT__en_reg),8);
    bufp->chgSData(oldp+22,(vlSelf->Core__DOT__result),16);
    bufp->chgCData(oldp+23,((7U & ((IData)(vlSelf->instruction) 
                                   >> 0xdU))),3);
    bufp->chgCData(oldp+24,((7U & ((IData)(vlSelf->instruction) 
                                   >> 0xaU))),3);
    bufp->chgCData(oldp+25,((7U & ((IData)(vlSelf->instruction) 
                                   >> 2U))),3);
    bufp->chgSData(oldp+26,(vlSelf->Core__DOT____Vcellinp__alu__in_b),16);
    bufp->chgCData(oldp+27,((7U & ((IData)(vlSelf->instruction) 
                                   >> 0xdU))),3);
}

void VCore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore___024root__trace_cleanup\n"); );
    // Init
    VCore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCore___024root*>(voidSelf);
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
