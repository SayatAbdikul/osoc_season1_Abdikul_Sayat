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
        bufp->chgBit(oldp+0,(vlSelf->top_module__DOT__en_pc));
        bufp->chgSData(oldp+1,(vlSelf->top_module__DOT__core__DOT__reg_c),16);
        bufp->chgSData(oldp+2,(vlSelf->top_module__DOT__core__DOT__reg_s),16);
        bufp->chgSData(oldp+3,(vlSelf->top_module__DOT__core__DOT__registers[0]),16);
        bufp->chgSData(oldp+4,(vlSelf->top_module__DOT__core__DOT__registers[1]),16);
        bufp->chgSData(oldp+5,(vlSelf->top_module__DOT__core__DOT__registers[2]),16);
        bufp->chgSData(oldp+6,(vlSelf->top_module__DOT__core__DOT__registers[3]),16);
        bufp->chgSData(oldp+7,(vlSelf->top_module__DOT__core__DOT__registers[4]),16);
        bufp->chgSData(oldp+8,(vlSelf->top_module__DOT__core__DOT__registers[5]),16);
        bufp->chgSData(oldp+9,(vlSelf->top_module__DOT__core__DOT__registers[6]),16);
        bufp->chgSData(oldp+10,(vlSelf->top_module__DOT__core__DOT__registers[7]),16);
        bufp->chgBit(oldp+11,(vlSelf->top_module__DOT__core__DOT__en_c));
        bufp->chgBit(oldp+12,(vlSelf->top_module__DOT__core__DOT__en_s));
        bufp->chgIData(oldp+13,(vlSelf->top_module__DOT__core__DOT__cpp_result),32);
        bufp->chgSData(oldp+14,(vlSelf->top_module__DOT__core__DOT__operand),16);
        bufp->chgCData(oldp+15,(vlSelf->top_module__DOT__core__DOT__control__DOT__state),2);
        bufp->chgCData(oldp+16,(vlSelf->top_module__DOT__core__DOT__control__DOT__next_state),2);
        bufp->chgSData(oldp+17,(vlSelf->top_module__DOT__fetch__DOT__pc),12);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgSData(oldp+18,(vlSelf->top_module__DOT__instruction),16);
        bufp->chgSData(oldp+19,(vlSelf->top_module__DOT__core__DOT__result),16);
        bufp->chgBit(oldp+20,((2U == (3U & (IData)(vlSelf->top_module__DOT__instruction)))));
        bufp->chgBit(oldp+21,((2U != (3U & (IData)(vlSelf->top_module__DOT__instruction)))));
        bufp->chgCData(oldp+22,((7U & ((IData)(vlSelf->top_module__DOT__instruction) 
                                       >> 0xdU))),3);
        bufp->chgCData(oldp+23,((7U & ((IData)(vlSelf->top_module__DOT__instruction) 
                                       >> 0xaU))),3);
        bufp->chgCData(oldp+24,((7U & ((IData)(vlSelf->top_module__DOT__instruction) 
                                       >> 2U))),3);
        bufp->chgCData(oldp+25,((3U & (IData)(vlSelf->top_module__DOT__instruction))),2);
        bufp->chgCData(oldp+26,((7U & ((IData)(vlSelf->top_module__DOT__instruction) 
                                       >> 0xdU))),3);
    }
    bufp->chgBit(oldp+27,(vlSelf->clk));
    bufp->chgBit(oldp+28,(vlSelf->reset));
    bufp->chgSData(oldp+29,(vlSelf->d_out),16);
    bufp->chgBit(oldp+30,(vlSelf->done));
    bufp->chgBit(oldp+31,(vlSelf->top_module__DOT__branch_res));
    bufp->chgSData(oldp+32,(vlSelf->top_module__DOT__new_pc),12);
    bufp->chgCData(oldp+33,(vlSelf->top_module__DOT__core__DOT__en_reg),8);
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
