#include <iostream>
#include <string>
#include <fstream>
#include <cstdint>
using namespace std;
void Generate(int max_size, int n, string fileName){
    std::ofstream outFile;
    outFile.open(fileName);
    if(outFile.is_open()){
        for(int i=0; i<n; i++){
            outFile<<std::hex<<rand() % max_size<<"\n";
        }
    }
}
int main(){
    int n, max_size;
    string fileName;
    cout<<"Hello! write the max_size, the number and file of random values\n";
    cout<<"max_size: ";
    cin>>max_size;
    cout<<endl;
    cout<<"n: ";
    cin>>n;
    cout<<endl;
    cout<<"file: ";
    cin>>fileName;
    cout<<endl;
    Generate(max_size, n, fileName);
    cout<<"The output is in the txt file.";
}