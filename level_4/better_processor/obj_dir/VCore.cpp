// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCore__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VCore::VCore(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VCore__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , run{vlSymsp->TOP.run}
    , en_new_pc{vlSymsp->TOP.en_new_pc}
    , done{vlSymsp->TOP.done}
    , instruction{vlSymsp->TOP.instruction}
    , d_out{vlSymsp->TOP.d_out}
    , new_pc{vlSymsp->TOP.new_pc}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VCore::VCore(const char* _vcname__)
    : VCore(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VCore::~VCore() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VCore___024root___eval_debug_assertions(VCore___024root* vlSelf);
#endif  // VL_DEBUG
void VCore___024root___eval_static(VCore___024root* vlSelf);
void VCore___024root___eval_initial(VCore___024root* vlSelf);
void VCore___024root___eval_settle(VCore___024root* vlSelf);
void VCore___024root___eval(VCore___024root* vlSelf);

void VCore::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCore::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCore___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VCore___024root___eval_static(&(vlSymsp->TOP));
        VCore___024root___eval_initial(&(vlSymsp->TOP));
        VCore___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VCore___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VCore::eventsPending() { return false; }

uint64_t VCore::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VCore::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VCore___024root___eval_final(VCore___024root* vlSelf);

VL_ATTR_COLD void VCore::final() {
    VCore___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VCore::hierName() const { return vlSymsp->name(); }
const char* VCore::modelName() const { return "VCore"; }
unsigned VCore::threads() const { return 1; }
void VCore::prepareClone() const { contextp()->prepareClone(); }
void VCore::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VCore::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VCore___024root__trace_decl_types(VerilatedVcd* tracep);

void VCore___024root__trace_init_top(VCore___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCore___024root*>(voidSelf);
    VCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VCore___024root__trace_decl_types(tracep);
    VCore___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VCore___024root__trace_register(VCore___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCore::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VCore::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VCore___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
