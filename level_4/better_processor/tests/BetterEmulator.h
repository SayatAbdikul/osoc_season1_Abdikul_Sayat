#ifndef BITTY_EMULATOR_H
#define BITTY_EMULATOR_H

#include <cstdint>  
#include <vector>  

class BetterEmulator {
public:
    BetterEmulator();
    void Evaluate();
    uint16_t GetRegisterValue(uint16_t reg_num) const;
    void MoveInstruction();
    bool CheckBranchLogic();
    bool CheckImmediate();
    bool CheckLSU();
//private:
    std::vector<uint16_t> registers_, instructions_memory, memory;
    bool done;
    uint16_t instruction, instruction_index;
    uint16_t reg_inst;
    uint16_t reg_c;
    uint16_t reg_s;
};

#endif // BITTY_EMULATOR_H
