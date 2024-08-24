#include <verilated.h>
#include "Vtop_module.h"          
#include "verilated_vcd_c.h"
#include <iostream>
#define MAX_SIM_TIME 10000000

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    Vtop_module *dut = new Vtop_module;

    VerilatedVcdC *trace = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    dut->trace(trace, 99);
    trace->open("trace.vcd");
    int sim_time = 0;
    int tests = 0;

    // Reset the DUT
    dut->clk = 0;
    dut->reset = 1;
    dut->eval();
    sim_time++;
    dut->clk = 1;
    dut->eval();
    sim_time++;
    dut->reset = 0;

    while(sim_time < MAX_SIM_TIME){
        dut->clk = !dut->clk;
        dut->eval();
        sim_time++;
        if (sim_time % 10 == 0) {
            // std::cout << "Time: " << sim_time << "\n";
            // std::cout << "Result: " << std::bitset<16>(dut->result) << "\n";
            // std::cout << "Done: " << std::bitset<1>(dut->done) << "\n";
            // std::cout << "Select: " << std::bitset<3>(dut->select) << "\n";
            tests++;
        }
    }

    std::cout << "Number of Tests: " << tests << "\n";
    trace->close();
    delete dut;
    return 0;
}
