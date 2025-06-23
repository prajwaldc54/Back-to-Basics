#include <iostream>
#include <string.h>
using std::cout;
using std::cin;
// using std::string;
using std::endl;

int main (){
    // int factorial_of;
    // cout << "Enter the number you want factorial of: \n";
    // cin>> factorial_of;
    // int fact = factorial_of;
    // for (int i = factorial_of - 1; i > 1; i--)
    // {
    //     factorial_of = factorial_of * i;
    // }
    
    // cout << "The factorial of " << fact << " is: " << factorial_of << endl;

    // int factorial;
    // cout << "Enter the number you want the factorial of: ";
    // cin>> factorial;
    // int fact = factorial;
    // int i = factorial - 1;
    // while (i > 0){
    //     factorial *=i;
    //     i --;
    // };
    // cout << "The factorial of " << fact << " is: " << factorial << endl;

    int factorial;
    cout << "Enter any number you want factorial of: ";
    cin >> factorial;
    int fact = factorial;
    int i =1;
    do
    {
        factorial *=i;
        i ++;
    } while (i < fact);
    
    cout << "The factorial of " << fact << " is: " << factorial << endl;

    
    return 0; 
}
