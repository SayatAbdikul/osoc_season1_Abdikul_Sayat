// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_module.h for the primary calling header

#include "Vtop_module__pch.h"
#include "Vtop_module__Syms.h"
#include "Vtop_module___024unit.h"

extern "C" int ALU(int q, int r, int w);

VL_INLINE_OPT void Vtop_module___024unit____Vdpiimwrap_ALU_TOP____024unit(IData/*31:0*/ q, IData/*31:0*/ r, IData/*31:0*/ w, IData/*31:0*/ &ALU__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_module___024unit____Vdpiimwrap_ALU_TOP____024unit\n"); );
    // Body
    int q__Vcvt;
    for (size_t q__Vidx = 0; q__Vidx < 1; ++q__Vidx) q__Vcvt = q;
    int r__Vcvt;
    for (size_t r__Vidx = 0; r__Vidx < 1; ++r__Vidx) r__Vcvt = r;
    int w__Vcvt;
    for (size_t w__Vidx = 0; w__Vidx < 1; ++w__Vidx) w__Vcvt = w;
    int ALU__Vfuncrtn__Vcvt;
    ALU__Vfuncrtn__Vcvt = ALU(q__Vcvt, r__Vcvt, w__Vcvt);
    ALU__Vfuncrtn = ALU__Vfuncrtn__Vcvt;
}
