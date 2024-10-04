#include <iostream>
#include <vector>
#include <fstream>
#include <cstdint>  
#include "BetterEmulator.h"

uint16_t getRange(int x, int y, uint16_t instruction) {
    if (x < 0 || y > 15 || x > y) {
        std::cerr << "Invalid bit range" << std::endl;
        exit(1);
    }
    uint16_t mask = ((1 << (y - x + 1)) - 1) << x;
    return (instruction & mask) >> x;
}
int max_size = 65536;
uint16_t ALU_internall(uint x, uint y, uint select){
    switch (select) {
    case 0:
        return (x + y);
    case 1:
        return (x>y) ? x-y : 65536-y+x;
    case 2:
        return x & y;
    case 3:
        return x | y;
    case 4:
        return x ^ y;
    case 5:
        return (y>31) ? 0 : x << y;
    case 6:
        return (y>31) ? 0 : x >> y;
    case 7:
        return (x > y) ? 1 : (x < y) ? 2 : 0;
    default:
        std::cerr << "Invalid ALU operation" << std::endl;
        return 0;
    }
}
extern "C" uint16_t ALU(uint16_t x, uint16_t y, uint16_t select) {
    return ALU_internall(x, y, select);
}

BetterEmulator::BetterEmulator() : registers_(8), instruction(0), instruction_index(0), done(false), reg_inst(0), reg_c(0), reg_s(0) {
    // std::ifstream infile("./instructions.txt"); 
    std::ifstream infile("/Users/sayat/Documents/GitHub/osoc_season1_Abdikul_Sayat/level_4/better_processor/tests/instructions.txt"); 
    if (!infile.is_open()) {
        std::cerr << "Error: Unable to open file." << std::endl;
        return;
    }
    memory.push_back(0);
    std::string hexStr;

    while (infile >> hexStr) { 
        try {
            int value = std::stoi(hexStr, nullptr, 16); 
            memory.push_back(value); 
            //std::cout << "Read hex: " << hexStr << " as integer: " << value << std::endl;
        } catch (const std::invalid_argument &e) {
            std::cerr << "Invalid hex value: " << hexStr << std::endl;
        } catch (const std::out_of_range &e) {
            std::cerr << "Hex value out of range: " << hexStr << std::endl;
        }
    }

    infile.close();

}
bool BetterEmulator::CheckBranchLogic(){
    return getRange(0, 1, instruction) == 2;
}
bool BetterEmulator::CheckImmediate(){
    return getRange(0, 1, instruction) == 1;
}
void BetterEmulator::MoveInstruction(){
    if(getRange(2, 3, instruction) == 0 && reg_c==0 || getRange(2, 3, instruction) == 1 && reg_c==1 || 
    getRange(2, 3, instruction) == 2 && reg_c==2){ 
        instruction_index = getRange(4, 15, instruction);
        std::cout<<"the new instruction_index "<<instruction_index<<"\n";
    } else instruction_index++;
    //std::cout<<getRange(2, 3, instruction)<<"\n";

}
void BetterEmulator::Evaluate() {
    if (instruction_index >= memory.size()) {
        std::cerr << "Error: Out of bounds instruction access. instruction_index = "<<instruction_index << std::endl;
        return;  // Avoid segmentation fault
    }
    instruction = memory[instruction_index];
    std::cout<<"emulator's current instruction "<<instruction<<"\n";
    if(CheckBranchLogic()) {
        MoveInstruction();
        std::cout<<"BRANCH!!! current instruction is "<<instruction<<"\n";
        Evaluate();
        return;
    }
    int select = getRange(2, 4, instruction);
    int Rx = getRange(13, 15, instruction);
    int Ry = getRange(10, 12, instruction);
    int operand = registers_[Ry];
    if(CheckImmediate()) operand = getRange(5, 12, instruction);
    std::cout<<"emulator Rx = "<<Rx<<"\n";
    std::cout<<"emulator Ry = "<<Ry<<"\n";
    std::cout<<"emulator x = "<<registers_[Rx]<<"\n";
    std::cout<<"emulator y = "<<operand<<"\n";
    std::cout<<"emulator select "<<select<<"\n";
    reg_c = ALU(registers_[Rx], operand, select);
    std::cout<<"emulator result = "<<reg_c<<"\n";
    //std::cout<<"reg_c is "<<reg_c<<"\n";
    reg_inst = instruction;
    reg_s = registers_[Rx];
    registers_[Rx] = reg_c;
    instruction_index++;
}

uint16_t BetterEmulator::GetRegisterValue(uint16_t reg_num) const {
    if (reg_num >= registers_.size()) {
        std::cerr << "Invalid register number" << std::endl;
        return 0;
    }
    return registers_[reg_num];
}

