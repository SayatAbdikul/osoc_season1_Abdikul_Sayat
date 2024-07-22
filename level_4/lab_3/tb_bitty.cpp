#include <verilated.h>
#include "Vtop_module.h"          
#include "verilated_vcd_c.h"
#include <iostream>
#define MAX_SIM_TIME 400


int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    Vtop_module *dut = new Vtop_module;

    VerilatedVcdC *trace = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    dut->trace(trace, 99);
    trace->open("trace.vcd");
    int instruction = 48140, sim_time = 0;
    dut->clk = 0;
    while(sim_time < MAX_SIM_TIME){
        dut->clk = sim_time;
        dut->instruction = instruction;
        dut->reset = 0;
        dut->eval();
        for(int i=0; i<2; i++) {
            sim_time++;
            dut->clk=sim_time;
            dut->eval();
        }
        std::cout<<dut->result<<"\n";
    }
}