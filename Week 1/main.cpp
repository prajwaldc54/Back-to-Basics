#include <iostream>
#include <cmath> //Start to use fucntion built in math function. 
using std::cout; // using decrective and declaring for the whole program. 
using std::cin;

int main () {
    cout << "This is a basic pizza slices calculator. "<< std::endl;
    int slices; // variable declaration 
    int exponents_slices; // power of the slices
    cout<< "How many Pizza slices do you have you retard?"<< std::endl;
    cin>> slices; // taking input
    cout << "Whats the power you wanna add on the number of pizza slices: "<< std::endl;
    cin >> exponents_slices;
    cout << "The power of the pizza slices are: " << pow (slices, exponents_slices) <<std::endl;
    return 0;
}