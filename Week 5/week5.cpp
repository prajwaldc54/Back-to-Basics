#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main (){
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
                        cout << "Lets gooo!!!\n";
                        break;
    }
     } while (choice != 0);
     

}