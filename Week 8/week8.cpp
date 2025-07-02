#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

template <typename T> //Template Function

void swap (T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 20;
    int b = 10;

    std::string fn = "Prajwal";
    std::string ln = "D C";

    cout << "Before value of a is " << a <<" and value of b is " << b << endl;
    cout << "Before First Name is " << fn <<" and Last Name is " << ln << endl;

    swap (a,b);
    cout << "The value a is swaped to " << a <<" and b is swapped to " << b << endl;

    swap(fn,ln);
    cout << "First Name " << fn <<" Last Name " << ln << endl;

} 