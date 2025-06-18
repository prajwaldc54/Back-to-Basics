#include <iostream>
#include <cmath> // including it to see some of the numeric functions.
#include <string> // Use of string class
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(){
    // double a;
    //  cout << "Give any number so we can show you some calculations based on numeric functions available.\n";
    //  cin >> a;
    //  cout << "The square root is\n" << sqrt (a) << endl; // basically the square root of the number  
    //  cout << "The remainder if divided by 2 is\n" << remainder(a,2) << endl; // the remainder once it is divided by 2
    //  cout << "The truncated value is\n" << trunc(a) << endl; // what truncate does is it cus the decimal value
    //  cout << "The ceiling value is\n" << ceil(a) << endl; // the ceiling makes it go upward value menaing if its 9.2 it outputs 10
    //  cout << "The floor value is\n" << floor(a) << endl; // floor is similar to truncate removes the decimal
    //  cout << "The round value is\n" << round(a) << endl; // the mathematical round ooff if its <= 0.5 it bumps the value up
    string h;
    cout << "Enter any string you want?:\n";
    getline(cin,h);

    cout << "The entered string is. " << h << endl;
    cout << h.length() <<endl; //basic length
    cout << h.size() << endl; // same as length just diff name
    cout << h.erase(3,1) << endl; // remove one after the 3rd index
    cout << h.replace(0,4,"Heaven") << endl; // I already knew what i was typing so replacing all
    h.pop_back(); // just remove last one
    cout << h << endl; // printed after removing
    return 0;
}
