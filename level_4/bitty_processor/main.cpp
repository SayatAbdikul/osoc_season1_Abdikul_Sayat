#include <iostream>
#include "BittyEmulator.h"
#include "BittyEmulator.cpp"
using namespace std;
int main(){
    BittyEmulator emulator;
    uint16_t instruction = 0b0000010000000000;
    uint16_t x=15, y=7;
    for(int i=0; i<8; i++){
        int result = ALU(x, y, i);
        int em_result = emulator.Evaluate(instruction);
        if(em_result != result){
            cout<<"Error on operation "<<i<<endl;
            cout<<"True result: "<<result<<endl;
            cout<<"Emulator result: "<<result<<endl;
            break;
        }
        x = result;
        instruction += 4;
    }
    cout<<"Test is finished.";
}