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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->top_module__DOT__core__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+1,(vlSelf->top_module__DOT__run));
        bufp->chgBit(oldp+2,(vlSelf->top_module__DOT__en_branch));
        bufp->chgBit(oldp+3,(vlSelf->top_module__DOT__en_fetch));
        bufp->chgBit(oldp+4,(vlSelf->top_module__DOT__en_memory));
        bufp->chgBit(oldp+5,(vlSelf->top_module__DOT__branch_res));
        bufp->chgSData(oldp+6,(vlSelf->top_module__DOT__new_pc),12);
        bufp->chgCData(oldp+7,(vlSelf->top_module__DOT__core__DOT__control__DOT__next_state),2);
        bufp->chgCData(oldp+8,(vlSelf->top_module__DOT__fsm__DOT__next_state),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgSData(oldp+9,(vlSelf->top_module__DOT__core__DOT__reg_c),16);
        bufp->chgSData(oldp+10,(vlSelf->top_module__DOT__core__DOT__reg_s),16);
        bufp->chgSData(oldp+11,(vlSelf->top_module__DOT__core__DOT__registers[0]),16);
        bufp->chgSData(oldp+12,(vlSelf->top_module__DOT__core__DOT__registers[1]),16);
        bufp->chgSData(oldp+13,(vlSelf->top_module__DOT__core__DOT__registers[2]),16);
        bufp->chgSData(oldp+14,(vlSelf->top_module__DOT__core__DOT__registers[3]),16);
        bufp->chgSData(oldp+15,(vlSelf->top_module__DOT__core__DOT__registers[4]),16);
        bufp->chgSData(oldp+16,(vlSelf->top_module__DOT__core__DOT__registers[5]),16);
        bufp->chgSData(oldp+17,(vlSelf->top_module__DOT__core__DOT__registers[6]),16);
        bufp->chgSData(oldp+18,(vlSelf->top_module__DOT__core__DOT__registers[7]),16);
        bufp->chgIData(oldp+19,(vlSelf->top_module__DOT__core__DOT__cpp_result),32);
        bufp->chgSData(oldp+20,(vlSelf->top_module__DOT__core__DOT__operand),16);
        bufp->chgCData(oldp+21,(vlSelf->top_module__DOT__core__DOT__control__DOT__state),2);
        bufp->chgSData(oldp+22,(vlSelf->top_module__DOT__fetch__DOT__current_pc),12);
        bufp->chgCData(oldp+23,(vlSelf->top_module__DOT__fsm__DOT__state),3);
    }
    bufp->chgBit(oldp+24,(vlSelf->clk));
    bufp->chgBit(oldp+25,(vlSelf->reset));
    bufp->chgSData(oldp+26,(vlSelf->d_out),16);
    bufp->chgCData(oldp+27,(vlSelf->Rx_val),3);
    bufp->chgCData(oldp+28,(vlSelf->Ry_val),3);
    bufp->chgCData(oldp+29,(vlSelf->sel_val),3);
    bufp->chgSData(oldp+30,(vlSelf->x_val),16);
    bufp->chgSData(oldp+31,(vlSelf->operand_val),16);
    bufp->chgSData(oldp+32,(vlSelf->instruction_val),16);
    bufp->chgBit(oldp+33,(vlSelf->branch_val));
    bufp->chgBit(oldp+34,(vlSelf->run_val));
    bufp->chgBit(oldp+35,(vlSelf->done));
    bufp->chgSData(oldp+36,(vlSelf->pc_val),12);
    bufp->chgSData(oldp+37,(vlSelf->top_module__DOT__pc),12);
    bufp->chgBit(oldp+38,(vlSelf->top_module__DOT__core__DOT__en_c));
    bufp->chgBit(oldp+39,(vlSelf->top_module__DOT__core__DOT__en_s));
    bufp->chgCData(oldp+40,((7U & ((IData)(vlSelf->instruction_val) 
                                   >> 0xdU))),3);
    bufp->chgCData(oldp+41,((7U & ((IData)(vlSelf->instruction_val) 
                                   >> 0xaU))),3);
    bufp->chgCData(oldp+42,((7U & ((IData)(vlSelf->instruction_val) 
                                   >> 2U))),3);
    bufp->chgCData(oldp+43,(vlSelf->top_module__DOT__core__DOT__en_reg),8);
    bufp->chgSData(oldp+44,(vlSelf->top_module__DOT__core__DOT__result),16);
    bufp->chgCData(oldp+45,((3U & (IData)(vlSelf->instruction_val))),2);
    bufp->chgCData(oldp+46,((7U & ((IData)(vlSelf->instruction_val) 
                                   >> 0xdU))),3);
    bufp->chgSData(oldp+47,(vlSelf->top_module__DOT__memory__DOT__current_pc),12);
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
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
