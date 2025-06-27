#include <iostream>
#include <fstream> 
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main (){

    cout << "Enter a file name you wanna create:" << " ";
    std::string what;
    cin >> what;

    // Into ofstream......

    std::ofstream file (what, std::ios::app);
    if (file.is_open()){
        cout << "The new created file is done.\n";
    }
    std::vector <std::string> vec;
    vec.push_back("Prajwal is a CS grad student");
    vec.push_back("Rubin is a social media manager");
    vec.push_back("Manish is a data science intern");
    vec.push_back("Pankaj is a fottball player");

    for (std:: string v : vec)
    {
        file << v << endl;
    }
    
    // Into ifstream......
    std::ifstream name (what);
        if (name.is_open()){
        cout << "Opened the created new file.\n";
    }
    std::string n;
    while (getline(name, n)){
        cout << n << endl;
    }
    
    
}