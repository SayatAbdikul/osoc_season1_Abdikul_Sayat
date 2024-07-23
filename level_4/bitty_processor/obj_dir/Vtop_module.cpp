// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop_module__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtop_module::Vtop_module(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop_module__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , done{vlSymsp->TOP.done}
    , select{vlSymsp->TOP.select}
    , instruction{vlSymsp->TOP.instruction}
    , result{vlSymsp->TOP.result}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtop_module::Vtop_module(const char* _vcname__)
    : Vtop_module(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop_module::~Vtop_module() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop_module___024root___eval_debug_assertions(Vtop_module___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop_module___024root___eval_static(Vtop_module___024root* vlSelf);
void Vtop_module___024root___eval_initial(Vtop_module___024root* vlSelf);
void Vtop_module___024root___eval_settle(Vtop_module___024root* vlSelf);
void Vtop_module___024root___eval(Vtop_module___024root* vlSelf);

void Vtop_module::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop_module::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop_module___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop_module___024root___eval_static(&(vlSymsp->TOP));
        Vtop_module___024root___eval_initial(&(vlSymsp->TOP));
        Vtop_module___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop_module___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop_module::eventsPending() { return false; }

uint64_t Vtop_module::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtop_module::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop_module___024root___eval_final(Vtop_module___024root* vlSelf);

VL_ATTR_COLD void Vtop_module::final() {
    Vtop_module___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop_module::hierName() const { return vlSymsp->name(); }
const char* Vtop_module::modelName() const { return "Vtop_module"; }
unsigned Vtop_module::threads() const { return 1; }
void Vtop_module::prepareClone() const { contextp()->prepareClone(); }
void Vtop_module::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtop_module::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtop_module___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtop_module___024root__trace_init_top(Vtop_module___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop_module___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_module___024root*>(voidSelf);
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop_module___024root__trace_decl_types(tracep);
    Vtop_module___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_module___024root__trace_register(Vtop_module___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop_module::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtop_module::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtop_module___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
