#include <iostream>
#include <cstdint>
#include "BittyInstructionGenerator.h"
uint16_t BittyInstructionGenerator::Generate(int max_size){
    return rand() % max_size;
}