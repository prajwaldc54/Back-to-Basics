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

    enum class Day {
        Monday,
        Tuesday,
        Friday
    };
    Day guess_day = Day::Tuesday;
    switch (guess_day)
    {
    case Day::Monday:
        break;

    case Day::Tuesday:
        cout << "Good answer";
        break;
    
    default:
        cout << "Hard luck try again";
        break;
    }
    return 0; 
}
