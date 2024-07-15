#include <verilated.h>
#include "VALU.h"          
#include "verilated_vcd_c.h"
#include <iostream>
int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    VALU *dut = new VALU;

    VerilatedVcdC *trace = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    dut->trace(trace, 99);
    trace->open("trace.vcd");
    // Initial values
    dut->carry_in = 0;
    dut->in_a = 0;
    dut->in_b = 0;
    dut->select = 0;
    dut->mode = 0;

    // Test case 1: Addition
    dut->in_a = 5;
    dut->in_b = 3;
    dut->select = 1;
    dut->eval();
    trace->dump(1);
    if (dut->alu_out != 8) {
        std::cout << "Test case 1 failed: alu_out = " << dut->alu_out << std::endl;
    }

    // Test case 2:
    dut->in_a = 5;
    dut->in_b = 3;
    dut->select = 2;
    dut->eval();
    trace->dump(5 + ~(3));
    if (dut->alu_out != 5 + ~(3)) {
        std::cout << "Test case 2 failed: alu_out = " << dut->alu_out << std::endl;
        std::cout << "should be = " << 5 + ~(3) << std::endl;
    }

    // Test case 3: Bitwise AND
    dut->in_a = 13;
    dut->in_b = 45;
    dut->select = 3;
    dut->eval();
    trace->dump(-1);
    if (dut->alu_out != -1) {
        std::cout << "Test case 3 failed: alu_out = " << dut->alu_out << std::endl;
    }

    // Test case 4: 
    dut->in_a = 2;
    dut->in_b = 9;
    dut->select = 4;
    dut->eval();
    trace->dump(2 + (2 & ~9));
    if (dut->alu_out != 2 + (2 & ~9)) {
        std::cout << "Test case 4 failed: alu_out = " << dut->alu_out << std::endl;
    }

    
    std::cout << "everything is alright" << std::endl;
    // Cleanup
    trace->close();
    delete dut;
    delete trace;

    return 0;
}
