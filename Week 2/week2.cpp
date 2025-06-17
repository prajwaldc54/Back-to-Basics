#include <iostream>
#include <climits>
using std::cout;
using std::cin;
#define Y 10
void print_stuff(short a, int b, long c, long long d){ // using void fucntion as learned in last lecture to less populate the main function. 
    cout << SHRT_MAX<< std::endl;
    cout << SHRT_MIN<< std::endl;
    cout << USHRT_MAX<< std::endl;
    cout << INT_MAX<< std::endl;
    cout << INT_MIN<< std::endl;
    cout << UINT_MAX<< std::endl;
    cout << LONG_MAX<< std::endl;
    cout << LONG_MIN<< std::endl;
    cout << ULONG_MAX<< std::endl;
    cout << LLONG_MAX<< std::endl;
    cout << LLONG_MIN<< std::endl;
    cout << ULLONG_MAX<< std::endl;
}
int main (){
    short a;
    int b;
    long c;
    long long d;
    print_stuff(a,b,c,d); //Not making main function too crowded for just printing the memory value.
    const int y = 7;
    char x = 'a'; // for char
    bool is_found = false;
    cout << (int) x << std::endl;
    cout << std::boolalpha << is_found << std::endl; // using manipulator to print true or false
    cout << Y << std::endl;
    cout << y <<std::endl;
}