#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

void swap (int a, int b){ 
    int temp = a;
    a = b;
    b = temp;

    cout << "a:" << a << " b:" << b << endl;
}

int main() {
 int a = 5;
 int b = 10;

 swap(a,b);

 cout << "a:" << a << " b:" << b << endl;
    
}