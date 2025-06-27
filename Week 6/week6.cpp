#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime> // for time
#include <vector> // vector time
using std::cout;
using std::cin;
using std::endl;

void print_guess(std::vector <int> arr){
    cout << "Your total number of guesses is " << arr.size() << "\n";
    cout << "The guesses made are: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout  << arr[i] << " ";
        }
        cout << "\n";
    
}

void play_game(){
    int initial_score = 5;
    std::string n = "Binish";
    cout << "Enter your username for the highscore:" << " " << endl;
    std::string user_name;
    cin.ignore();
    getline(cin,user_name);
    int random = rand() % 99 + 1; // random number from 1 to 100
    std:: vector <int> number_of_guesses;
    while (true){
    cout << "Guess the random number generated: \n";
    int guess;
    cin >> guess;
    if (guess < 0){
        cout << "Invalid input only positive numbers" << endl;  // skips invalid guess that is negative number
        continue;
    }
    number_of_guesses.push_back(guess);
    if (guess == random)
    {
        cout << "You got it brother!!!" << endl;
        break;
    }else if (guess > random) {
        cout << "Its a lower value than you guessed" << endl;
    } else {
        cout << "Its a higher value than you guessed" << endl;
    }
    
    }
    print_guess(number_of_guesses);
    int current_value = number_of_guesses.size();
    std::ofstream file ("score.txt");
    file << "\tScore Board\t" << endl;
    file << n << " "<< initial_score << endl;
    if (user_name == n)
    {
        if (!current_value >= initial_score){
            file << n<< " "<<  current_value << endl;
        } else {
            file << n<< " "<<  initial_score << endl;
        } 
    } else {
        file << user_name << " "<< current_value << endl;
    }
    
}

int main (){
    srand(time(0)); // better to randomize according to time
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