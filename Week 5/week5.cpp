#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;

void play_game(){
    int random = rand() % 99 + 1;
    while (true){
    cout << "Guess the random number generated: \n";
    int guess;
    cin >> guess;
    if (guess == random)
    {
        cout << "You got it brother!!!" << endl;
        break;
    }else if (guess > random) {
        cout << "Its a lower value than you guessed" << endl;
    } else if (guess < 0){
        cout << "Invalid input only positive numbers" << endl;
    } else {
        cout << "Its a higher value than you guessed" << endl;
    }
    
    }
}

int main (){
    srand(time(0));
    cout << "Welcome to my console-based application.\n";
     int choice;
     do
     {
            cout << "Press 0 to exit or 1 to Play game:\n";
            cin>>choice;
            switch (choice)
                {
                    case 0:
                        cout << "Thanks for playing\n";
                        break;
                    case 1: 
                        play_game();
                        break;
    }
     } while (choice != 0);
     

}