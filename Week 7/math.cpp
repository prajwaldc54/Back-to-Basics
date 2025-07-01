#include <iostream>

using std::cout;
using std::cin;
using std::endl;

struct Rectangle {
    int length; 
    int width;
};

double area (int a){
    return a*a;
}

double area  (int a, int b, int c= 1){ // Use of function overloading and default argument
    return a*b*c;
}

double pow (int base, int expo = 1){
    int total = 1;
    for (int i = 0; i < expo; i++)
    {
        total *= base;
    }
    return total; 
}

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