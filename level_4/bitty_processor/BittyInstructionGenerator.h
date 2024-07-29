#ifndef RANDOM_INSTRUCTION
#define RANDOM_INSTRUCTION
class BittyInstructionGenerator {
public:
    BittyInstructionGenerator() = default;
    uint16_t Generate(int max_size);
};

#endif