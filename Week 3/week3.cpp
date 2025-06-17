#include <iostream>
#include <cmath> // including it to see some of the numeric functions.
using std::cout;
using std::cin;
using std::endl;

int main(){
    double a;
    cout << "Give any number so we can show you some calculations based on numeric functions available.\n";
    cin >> a;
    cout << "The square root is\n" << sqrt (a) << endl; // basically the square root of the number  
    cout << "The remainder if divided by 2 is\n" << remainder(a,2) << endl; // the remainder once it is divided by 2
    cout << "The truncated value is\n" << trunc(a) << endl; // what truncate does is it cus the decimal value
    cout << "The ceiling value is\n" << ceil(a) << endl; // the ceiling makes it go upward value menaing if its 9.2 it outputs 10
    cout << "The floor value is\n" << floor(a) << endl; // floor is similar to truncate removes the decimal
    cout << "The round value is\n" << round(a) << endl; // the mathematical round ooff if its <= 0.5 it bumps the value up
    return 0;
}
