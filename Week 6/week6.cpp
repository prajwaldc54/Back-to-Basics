#include <iostream>
#include <fstream> 
#include <vector>

using std::cout;
using std::cin;
using std::endl;

int main (){
    // cout << "Enter any file you wanna create: \n";
    // std:: string file;
    // cin >> file;

    std::ofstream name("Basic.txt");
    std::vector <std::string> vec;
    vec.push_back("Prajwal");
    vec.push_back("Manish");
    vec.push_back("Rubin");
    vec.push_back("Pankaj");

    for (std::string n : vec)
    {
        name << n << endl;
    }
    
    
}