// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VFetchUnit__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VFetchUnit::VFetchUnit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VFetchUnit__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , en_pc{vlSymsp->TOP.en_pc}
    , instruction{vlSymsp->TOP.instruction}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VFetchUnit::VFetchUnit(const char* _vcname__)
    : VFetchUnit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VFetchUnit::~VFetchUnit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VFetchUnit___024root___eval_debug_assertions(VFetchUnit___024root* vlSelf);
#endif  // VL_DEBUG
void VFetchUnit___024root___eval_static(VFetchUnit___024root* vlSelf);
void VFetchUnit___024root___eval_initial(VFetchUnit___024root* vlSelf);
void VFetchUnit___024root___eval_settle(VFetchUnit___024root* vlSelf);
void VFetchUnit___024root___eval(VFetchUnit___024root* vlSelf);

void VFetchUnit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFetchUnit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VFetchUnit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VFetchUnit___024root___eval_static(&(vlSymsp->TOP));
        VFetchUnit___024root___eval_initial(&(vlSymsp->TOP));
        VFetchUnit___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VFetchUnit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VFetchUnit::eventsPending() { return false; }

uint64_t VFetchUnit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VFetchUnit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VFetchUnit___024root___eval_final(VFetchUnit___024root* vlSelf);

VL_ATTR_COLD void VFetchUnit::final() {
    VFetchUnit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VFetchUnit::hierName() const { return vlSymsp->name(); }
const char* VFetchUnit::modelName() const { return "VFetchUnit"; }
unsigned VFetchUnit::threads() const { return 1; }
void VFetchUnit::prepareClone() const { contextp()->prepareClone(); }
void VFetchUnit::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VFetchUnit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VFetchUnit___024root__trace_decl_types(VerilatedVcd* tracep);

void VFetchUnit___024root__trace_init_top(VFetchUnit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VFetchUnit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFetchUnit___024root*>(voidSelf);
    VFetchUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VFetchUnit___024root__trace_decl_types(tracep);
    VFetchUnit___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VFetchUnit___024root__trace_register(VFetchUnit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VFetchUnit::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VFetchUnit::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VFetchUnit___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
