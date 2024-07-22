// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VControlUnit__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VControlUnit::VControlUnit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VControlUnit__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , en_s{vlSymsp->TOP.en_s}
    , en_c{vlSymsp->TOP.en_c}
    , en_i{vlSymsp->TOP.en_i}
    , en_0{vlSymsp->TOP.en_0}
    , en_1{vlSymsp->TOP.en_1}
    , en_2{vlSymsp->TOP.en_2}
    , en_3{vlSymsp->TOP.en_3}
    , en_4{vlSymsp->TOP.en_4}
    , en_5{vlSymsp->TOP.en_5}
    , en_6{vlSymsp->TOP.en_6}
    , en_7{vlSymsp->TOP.en_7}
    , done{vlSymsp->TOP.done}
    , instruction{vlSymsp->TOP.instruction}
    , d_out{vlSymsp->TOP.d_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VControlUnit::VControlUnit(const char* _vcname__)
    : VControlUnit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VControlUnit::~VControlUnit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VControlUnit___024root___eval_debug_assertions(VControlUnit___024root* vlSelf);
#endif  // VL_DEBUG
void VControlUnit___024root___eval_static(VControlUnit___024root* vlSelf);
void VControlUnit___024root___eval_initial(VControlUnit___024root* vlSelf);
void VControlUnit___024root___eval_settle(VControlUnit___024root* vlSelf);
void VControlUnit___024root___eval(VControlUnit___024root* vlSelf);

void VControlUnit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VControlUnit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VControlUnit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VControlUnit___024root___eval_static(&(vlSymsp->TOP));
        VControlUnit___024root___eval_initial(&(vlSymsp->TOP));
        VControlUnit___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VControlUnit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VControlUnit::eventsPending() { return false; }

uint64_t VControlUnit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VControlUnit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VControlUnit___024root___eval_final(VControlUnit___024root* vlSelf);

VL_ATTR_COLD void VControlUnit::final() {
    VControlUnit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VControlUnit::hierName() const { return vlSymsp->name(); }
const char* VControlUnit::modelName() const { return "VControlUnit"; }
unsigned VControlUnit::threads() const { return 1; }
void VControlUnit::prepareClone() const { contextp()->prepareClone(); }
void VControlUnit::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VControlUnit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VControlUnit___024root__trace_decl_types(VerilatedVcd* tracep);

void VControlUnit___024root__trace_init_top(VControlUnit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VControlUnit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VControlUnit___024root*>(voidSelf);
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VControlUnit___024root__trace_decl_types(tracep);
    VControlUnit___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VControlUnit___024root__trace_register(VControlUnit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VControlUnit::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VControlUnit::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VControlUnit___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
