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

template <typename T> //Overloading in function template
void swap(T a[],T b[],int s){
    for (int i = 0; i < s; i++)
    {
        T temp;
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
    
}

int main() {
    int const SIZE = 6;
    int a = 20;
    int b = 10;

    std::string fn = "Prajwal";
    std::string ln = "D C";

    int eight[] = {8,8,8,8,8,8};
    int zero[] = {0,0,0,0,0,0};

    cout << "Before value of a is " << a <<" and value of b is " << b << endl;
    cout << "Before First Name is " << fn <<" and Last Name is " << ln << endl;

    swap (a,b);
    cout << "The value a is swaped to " << a <<" and b is swapped to " << b << endl;

    swap(fn,ln);
    cout << "First Name " << fn <<" Last Name " << ln << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << eight[i] <<zero[i] << " ";
    }
    cout << "\n";

    swap(eight,zero,SIZE);
    
        for (int i = 0; i < SIZE; i++)
    {
        cout << eight[i] <<zero[i] << " ";
    }
    cout << "\n";

} 