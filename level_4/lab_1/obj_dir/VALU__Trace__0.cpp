// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU__Syms.h"


void VALU___024root__trace_chg_0_sub_0(VALU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VALU___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_chg_0\n"); );
    // Init
    VALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VALU___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VALU___024root__trace_chg_0_sub_0(VALU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->carry_in));
    bufp->chgSData(oldp+1,(vlSelf->in_a),16);
    bufp->chgSData(oldp+2,(vlSelf->in_b),16);
    bufp->chgCData(oldp+3,(vlSelf->select),4);
    bufp->chgBit(oldp+4,(vlSelf->mode));
    bufp->chgBit(oldp+5,(vlSelf->carry_out));
    bufp->chgBit(oldp+6,(vlSelf->compare));
    bufp->chgSData(oldp+7,(vlSelf->alu_out),16);
    bufp->chgSData(oldp+8,(vlSelf->ALU__DOT__alu_result),16);
}

void VALU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_cleanup\n"); );
    // Init
    VALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
