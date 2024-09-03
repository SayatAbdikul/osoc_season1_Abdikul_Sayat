// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFetchUnit__Syms.h"


void VFetchUnit___024root__trace_chg_0_sub_0(VFetchUnit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VFetchUnit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFetchUnit___024root__trace_chg_0\n"); );
    // Init
    VFetchUnit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFetchUnit___024root*>(voidSelf);
    VFetchUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VFetchUnit___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VFetchUnit___024root__trace_chg_0_sub_0(VFetchUnit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VFetchUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFetchUnit___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->reset));
    bufp->chgBit(oldp+2,(vlSelf->en_pc));
    bufp->chgSData(oldp+3,(vlSelf->instruction),16);
    bufp->chgCData(oldp+4,(vlSelf->FetchUnit__DOT__pc),8);
}

void VFetchUnit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFetchUnit___024root__trace_cleanup\n"); );
    // Init
    VFetchUnit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFetchUnit___024root*>(voidSelf);
    VFetchUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
