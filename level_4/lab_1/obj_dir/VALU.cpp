// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VALU__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VALU::VALU(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VALU__Syms(contextp(), _vcname__, this)}
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
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VALU::VALU(const char* _vcname__)
    : VALU(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VALU::~VALU() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VALU___024root___eval_debug_assertions(VALU___024root* vlSelf);
#endif  // VL_DEBUG
void VALU___024root___eval_static(VALU___024root* vlSelf);
void VALU___024root___eval_initial(VALU___024root* vlSelf);
void VALU___024root___eval_settle(VALU___024root* vlSelf);
void VALU___024root___eval(VALU___024root* vlSelf);

void VALU::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VALU::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VALU___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VALU___024root___eval_static(&(vlSymsp->TOP));
        VALU___024root___eval_initial(&(vlSymsp->TOP));
        VALU___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VALU___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VALU::eventsPending() { return false; }

uint64_t VALU::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VALU::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VALU___024root___eval_final(VALU___024root* vlSelf);

VL_ATTR_COLD void VALU::final() {
    VALU___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VALU::hierName() const { return vlSymsp->name(); }
const char* VALU::modelName() const { return "VALU"; }
unsigned VALU::threads() const { return 1; }
void VALU::prepareClone() const { contextp()->prepareClone(); }
void VALU::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VALU::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VALU___024root__trace_decl_types(VerilatedVcd* tracep);

void VALU___024root__trace_init_top(VALU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VALU___024root__trace_decl_types(tracep);
    VALU___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VALU___024root__trace_register(VALU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VALU::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VALU::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VALU___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
