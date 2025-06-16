#include <iostream>
// #include <cmath> //Start to use fucntion built in math function. 
using std::cout; // using decrective and declaring for the whole program. 
using std::cin;

double pow (int , double); // Function declaration

void print_stuff (int slices, double exponents_slices){ // Void function to print stuff and also calling a function inside a function 
    cout << "The power of the pizza slices are: " << pow (slices, exponents_slices) <<std::endl; //Function Call
}

int main () {
    cout << "This is a basic pizza slices calculator. "<< std::endl;
    int slices; // variable declaration 
    double exponents_slices; // power of the slices
    cout<< "How many Pizza slices do you have you retard?"<< std::endl;
    cin>> slices; // taking input
    cout << "Whats the power you wanna add on the number of pizza slices: "<< std::endl;
    cin >> exponents_slices;
    print_stuff(slices,exponents_slices); // Using the void function that is to print the output
    return 0;
}

double pow (int slices, double exponent_slices){ //Function Definition 
    int result = 1;
    for (int i = 0; i < exponent_slices; i++)
    {
        result = result * slices;
    }
    return result;
}