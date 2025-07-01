#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;

void swap (std::string a, std::string b){
    std::string temp = a;
    a = b;
    b = temp;

    cout << "First Name: " << a << " Last Name: " << b << endl;
}

void swap (int &a, int &b){ // with ppassing by reference it persists the swap
    int temp = a;
    a = b;
    b = temp;

    cout << "a:" << a << " b:" << b << endl;
}

int main() {
 int a = 5;
 int b = 10;
 std::string first_name = "Prajwal";
 std::string last_name = "Vagwan";

 swap(a,b);
 swap(first_name,last_name);
}