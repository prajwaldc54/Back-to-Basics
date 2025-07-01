#include <iostream>
#include "math.h"

using std::cout;
using std::cin;
using std::endl;

int main(){
    Rectangle rec;
    rec.length = 5;
    rec.width = 12;

    cout << "Area of rectangle: " << area(rec.length,rec.width) << endl;
    cout << "Area of square: " << area(rec.length) << endl;
    cout << "Area of triangle: " << area(rec.length,rec.width, 8) << endl; //default argument
    cout << "Power of exponent 3: " << pow(3,3) << endl;
    cout << "Power of exponent 1: " << pow(3) << endl;
    return 0;
}