#include <iostream>
#include <fstream>
#include <cstdint>
using namespace std;
void Generate(int max_size, int n){
    std::ofstream outFile;
    outFile.open("output.txt");
    if(outFile.is_open()){
        for(int i=0; i<n; i++){
            outFile<<rand() % max_size<<"\n";
        }
    }
}
int main(){
    int n, max_size;
    cout<<"Hello! write the max_size and the number of random values\n";
    cout<<"max_size: ";
    cin>>max_size;
    cout<<endl;
    cout<<"n: ";
    cin>>n;
    cout<<endl;
    Generate(max_size, n);
    cout<<"The output is in the txt file.";
}