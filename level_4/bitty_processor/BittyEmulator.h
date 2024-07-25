#ifndef BITTY_EMULATOR_H
#define BITTY_EMULATOR_H

#include <cstdint>  
#include <vector>  

class BittyEmulator {
public:
    BittyEmulator();
    uint16_t Evaluate(uint16_t instruction);
    uint16_t GetRegisterValue(uint16_t reg_num) const;

private:
    std::vector<uint16_t> registers_;
    bool done;
    uint16_t reg_inst;
    uint16_t reg_c;
    uint16_t reg_s;
};

#endif // BITTY_EMULATOR_H
