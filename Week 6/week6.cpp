#include <iostream>
#include <fstream> 
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main (){
    std::ifstream name ("Basic.txt");
    std::string n;
    while (getline(name, n)){
        cout << n << endl;
    }
    
    
}