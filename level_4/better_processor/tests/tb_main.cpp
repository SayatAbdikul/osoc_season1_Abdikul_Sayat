#include <verilated.h>
#include "Vtop_module.h"          
#include "verilated_vcd_c.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "BetterEmulator.h"
#define MAX_SIM_TIME 120
int main(int argc, char **argv) {
    
    Verilated::commandArgs(argc, argv);
    Vtop_module *dut = new Vtop_module;
    Verilated::traceEverOn(true);
    VerilatedVcdC *trace = new VerilatedVcdC;
    dut->trace(trace, 99);
    trace->open("waveform.vcd");
    int sim_time = 0;
    int tests = 0, state=0;

    // Reset the DUT
    // dut->clk = 0;
    // dut->reset = 1;
    // dut->eval(); // Evaluate once with reset active
    // dut->clk = 1;
    // dut->eval();
    // dut->reset = 0; // Release reset
    // dut->clk = 0;   // Prepare for next clock cycle

    BetterEmulator emulator;
    //emulator.Evaluate();
    int i=0, result=emulator.reg_c, run=0;
    while(sim_time<MAX_SIM_TIME){
        dut->clk = !(dut->clk);
        dut->eval();
        trace->dump(sim_time);
        sim_time++;
        if(dut->done && dut->clk == 0){
            //int branch = emulator.CheckBranchLogic();
            emulator.Evaluate();
            std::cout<<" and verilog result = "<<dut->d_out<<"\n";
            //while(branch) branch = emulator.CheckBranchLogic(), emulator.Evaluate();
            //if(run) emulator.Evaluate();
            if(emulator.reg_c != dut->d_out){
                std::cout<<"Error!!! emulator result = "<<emulator.reg_c<<" and verilog result = "<<dut->d_out<<"\n";
                trace->close();
                delete dut;
                return 0;
            }
            //std::cout<<"emulator instruction = "<<emulator.instruction<<"\n";
        }
    }
    trace->close();
    delete dut;
    return 0;
}
