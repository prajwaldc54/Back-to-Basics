#include <iostream>
#include <string.h>
using std::cout;
using std::cin;
// using std::string;
using std::endl;

int main (){
    // string answer_name = "Prajwal";
    // int answer_age = 25;
    // string guess_name;
    // cout << "Try guessing my name: ";
    // cin>> guess_name;

    // int guess_age;
    // cout << "Second time lucky try guessing my age: ";
    // cin >> guess_age;

    // if (answer_name == guess_name && answer_age == guess_age) //Conditional flow to understand it.
    // {
    //     cout << "Buwaaay you are correct " << endl;
    // }
    // else{
    //     cout << "Hard Luck! Try guessing me again" << endl;
    // }

    int age = 14;
    int guess_age;
    cout << "Guess my age: " << endl;
    cin>> guess_age;
    switch (guess_age)
    {
    case 13:
        cout << "So close just one higher";
        break;

    case 14:
        cout << "So close just one lower";
        break;
    
    default:
        cout << "Hard luck try again";
        break;
    }
    return 0; 
}
