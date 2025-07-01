#include "math.h"
double area (int a){
    return a*a;
}

double area  (int a, int b, int c){ // Use of function overloading and default argument
    return a*b*c;
}

double pow (int base, int expo){
    int total = 1;
    for (int i = 0; i < expo; i++)
    {
        total *= base;
    }
    return total; 
}
