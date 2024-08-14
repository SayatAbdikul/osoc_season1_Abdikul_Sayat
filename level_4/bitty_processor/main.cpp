#include <iostream>
#include <vector>
#include <fstream>
#include "BittyEmulator.h"
#include "BittyEmulator.cpp"
using namespace std;
uint16_t registers[] = {15, 7, 12, 1, 9, 2, 22, 7};
int main(){
    BittyEmulator emulator;
    ifstream inputFile("Instruction_Generator/instructions.txt");
    if (!inputFile.is_open()) {
        std::cerr << "Failed to open the file." << std::endl;
        return 1; 
    }
    uint16_t instruction;
    vector<uint16_t> instructions;
    while (inputFile >> instruction) {
        //std::cout << "Read number: " << instruction << std::endl;
        instructions.push_back(instruction);
    }
    for(int i=0; i<instructions.size(); i++){
        instruction = instructions[i];
        uint16_t x = getRange(13, 15, instruction), y = getRange(10, 12, instruction), select = getRange(2, 4, instruction);
        uint16_t result = ALU(registers[x], registers[y], select);
        uint16_t em_result = emulator.Evaluate(instruction);
        if(em_result != result){
            cout<<"Error on instruction "<<i<<endl;
            cout<<"True result: "<<result<<endl;
            cout<<"Emulator result: "<<em_result<<endl;
            break;
        }
        registers[x]=result;
    }
    cout<<"Test is finished.";
}