#include <verilated.h>
#include "Vtop_module.h"          
#include "verilated_vcd_c.h"
#include <iostream>
#include "BittyInstructionGenerator.h"
#include "BittyInstructionGenerator.cpp"
#define MAX_SIM_TIME 10000000

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    Vtop_module *dut = new Vtop_module;

    VerilatedVcdC *trace = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    dut->trace(trace, 99);
    trace->open("trace.vcd");
    int sim_time = 0;
    BittyInstructionGenerator generator;
    dut->clk = 0;
    int tests=0;
    while(sim_time < MAX_SIM_TIME){
        dut->clk = sim_time;
        dut->instruction = generator.Generate(65535);
        dut->reset = 0;
        for(int i=0; i<5; i++) {
            sim_time++;
            dut->clk=sim_time;
            dut->eval();
        }
        tests++;
        // std::cout<<"result is "<<std::bitset<16>(dut->result)<<"\n";
        // std::cout<<"done is "<<std::bitset<1>(dut->done)<<"\n";
        // std::cout<<"select is "<<std::bitset<3>(dut->select)<<"\n";
    }
    std::cout<<"Tests number is "<<tests<<"\n";
}