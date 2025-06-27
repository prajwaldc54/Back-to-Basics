#include <iostream>
#include <fstream> 

using std::cout;
using std::cin;
using std::endl;

int main (){
    cout << "Enter any file you wanna create: \n";
    std:: string file;
    cin >> file;

    std::ofstream name(file);
    name << "Hello Guys into file system" << endl;
}