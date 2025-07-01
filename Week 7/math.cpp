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

int main(){
    Rectangle rec;
    rec.length = 5;
    rec.width = 12;

    cout << "Area of rectangle: " << area(rec.length,rec.width) << endl;
    cout << "Area of square: " << area(rec.length) << endl;
    cout << "Area of triangle: " << area(rec.length,rec.width, 8) << endl; //default argument
    
    return 0;
}