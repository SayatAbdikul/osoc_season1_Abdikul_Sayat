// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Valu_ai__pch.h"

//============================================================
// Constructors

Valu_ai::Valu_ai(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Valu_ai__Syms(contextp(), _vcname__, this)}
    , carry_in{vlSymsp->TOP.carry_in}
    , select{vlSymsp->TOP.select}
    , mode{vlSymsp->TOP.mode}
    , carry_out{vlSymsp->TOP.carry_out}
    , compare{vlSymsp->TOP.compare}
    , in_a{vlSymsp->TOP.in_a}
    , in_b{vlSymsp->TOP.in_b}
    , alu_out{vlSymsp->TOP.alu_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Valu_ai::Valu_ai(const char* _vcname__)
    : Valu_ai(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Valu_ai::~Valu_ai() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Valu_ai___024root___eval_debug_assertions(Valu_ai___024root* vlSelf);
#endif  // VL_DEBUG
void Valu_ai___024root___eval_static(Valu_ai___024root* vlSelf);
void Valu_ai___024root___eval_initial(Valu_ai___024root* vlSelf);
void Valu_ai___024root___eval_settle(Valu_ai___024root* vlSelf);
void Valu_ai___024root___eval(Valu_ai___024root* vlSelf);

void Valu_ai::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Valu_ai::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Valu_ai___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Valu_ai___024root___eval_static(&(vlSymsp->TOP));
        Valu_ai___024root___eval_initial(&(vlSymsp->TOP));
        Valu_ai___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Valu_ai___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Valu_ai::eventsPending() { return false; }

uint64_t Valu_ai::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Valu_ai::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Valu_ai___024root___eval_final(Valu_ai___024root* vlSelf);

VL_ATTR_COLD void Valu_ai::final() {
    Valu_ai___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Valu_ai::hierName() const { return vlSymsp->name(); }
const char* Valu_ai::modelName() const { return "Valu_ai"; }
unsigned Valu_ai::threads() const { return 1; }
void Valu_ai::prepareClone() const { contextp()->prepareClone(); }
void Valu_ai::atClone() const {
    contextp()->threadPoolpOnClone();
}
