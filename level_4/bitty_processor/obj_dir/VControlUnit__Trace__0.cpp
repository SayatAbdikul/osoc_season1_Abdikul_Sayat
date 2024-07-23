// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VControlUnit__Syms.h"


void VControlUnit___024root__trace_chg_0_sub_0(VControlUnit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VControlUnit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root__trace_chg_0\n"); );
    // Init
    VControlUnit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VControlUnit___024root*>(voidSelf);
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VControlUnit___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VControlUnit___024root__trace_chg_0_sub_0(VControlUnit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->ControlUnit__DOT__mX__DOT__Reg0),16);
        bufp->chgSData(oldp+1,(vlSelf->ControlUnit__DOT__mX__DOT__Reg1),16);
        bufp->chgSData(oldp+2,(vlSelf->ControlUnit__DOT__mX__DOT__Reg2),16);
        bufp->chgSData(oldp+3,(vlSelf->ControlUnit__DOT__mX__DOT__Reg3),16);
        bufp->chgSData(oldp+4,(vlSelf->ControlUnit__DOT__mX__DOT__Reg4),16);
        bufp->chgSData(oldp+5,(vlSelf->ControlUnit__DOT__mX__DOT__Reg5),16);
        bufp->chgSData(oldp+6,(vlSelf->ControlUnit__DOT__mX__DOT__Reg6),16);
        bufp->chgSData(oldp+7,(vlSelf->ControlUnit__DOT__mX__DOT__Reg7),16);
        bufp->chgSData(oldp+8,(vlSelf->ControlUnit__DOT__mY__DOT__Reg0),16);
        bufp->chgSData(oldp+9,(vlSelf->ControlUnit__DOT__mY__DOT__Reg1),16);
        bufp->chgSData(oldp+10,(vlSelf->ControlUnit__DOT__mY__DOT__Reg2),16);
        bufp->chgSData(oldp+11,(vlSelf->ControlUnit__DOT__mY__DOT__Reg3),16);
        bufp->chgSData(oldp+12,(vlSelf->ControlUnit__DOT__mY__DOT__Reg4),16);
        bufp->chgSData(oldp+13,(vlSelf->ControlUnit__DOT__mY__DOT__Reg5),16);
        bufp->chgSData(oldp+14,(vlSelf->ControlUnit__DOT__mY__DOT__Reg6),16);
        bufp->chgSData(oldp+15,(vlSelf->ControlUnit__DOT__mY__DOT__Reg7),16);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgSData(oldp+16,(vlSelf->ControlUnit__DOT__reg_s),16);
        bufp->chgSData(oldp+17,(vlSelf->ControlUnit__DOT__reg_c),16);
        bufp->chgSData(oldp+18,(vlSelf->ControlUnit__DOT__reg_i),16);
        bufp->chgCData(oldp+19,((7U & ((IData)(vlSelf->ControlUnit__DOT__reg_i) 
                                       >> 0xdU))),3);
        bufp->chgCData(oldp+20,((7U & ((IData)(vlSelf->ControlUnit__DOT__reg_i) 
                                       >> 0xaU))),3);
        bufp->chgCData(oldp+21,((7U & ((IData)(vlSelf->ControlUnit__DOT__reg_i) 
                                       >> 3U))),3);
        bufp->chgBit(oldp+22,((1U & ((IData)(vlSelf->ControlUnit__DOT__reg_i) 
                                     >> 2U))));
        bufp->chgCData(oldp+23,((7U & ((IData)(vlSelf->ControlUnit__DOT__reg_i) 
                                       >> 3U))),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgSData(oldp+24,(vlSelf->ControlUnit__DOT__x),16);
        bufp->chgSData(oldp+25,(vlSelf->ControlUnit__DOT__y),16);
        bufp->chgSData(oldp+26,(vlSelf->ControlUnit__DOT__alu__DOT__alu_result),16);
    }
    bufp->chgSData(oldp+27,(vlSelf->instruction),16);
    bufp->chgBit(oldp+28,(vlSelf->clk));
    bufp->chgBit(oldp+29,(vlSelf->reset));
    bufp->chgBit(oldp+30,(vlSelf->en_s));
    bufp->chgBit(oldp+31,(vlSelf->en_c));
    bufp->chgBit(oldp+32,(vlSelf->en_i));
    bufp->chgBit(oldp+33,(vlSelf->en_0));
    bufp->chgBit(oldp+34,(vlSelf->en_1));
    bufp->chgBit(oldp+35,(vlSelf->en_2));
    bufp->chgBit(oldp+36,(vlSelf->en_3));
    bufp->chgBit(oldp+37,(vlSelf->en_4));
    bufp->chgBit(oldp+38,(vlSelf->en_5));
    bufp->chgBit(oldp+39,(vlSelf->en_6));
    bufp->chgBit(oldp+40,(vlSelf->en_7));
    bufp->chgBit(oldp+41,(vlSelf->done));
    bufp->chgSData(oldp+42,(vlSelf->d_out),16);
    bufp->chgSData(oldp+43,(vlSelf->ControlUnit__DOT__d_in),16);
    bufp->chgSData(oldp+44,(vlSelf->ControlUnit__DOT__result),16);
}

void VControlUnit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root__trace_cleanup\n"); );
    // Init
    VControlUnit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VControlUnit___024root*>(voidSelf);
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
