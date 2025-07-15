#include <iostream>
#include <vector>
#include "User.h"
using std::cout;
using std::cin;
using std::endl;

int User::user_count = 0;
int User::get_user_count (){
        return user_count;
    }
        std::string User::get_status(){  // getting data from private access modifier in a struct
            return status;
        }

        User::User () {
            user_count++;
        }

        User::User (std::string n, std::string l, std::string s){
                first_name = n;
                last_name = l;
                status = s;
                user_count ++;
        }

        User::~User (){
            user_count --;
        }

        void User::set_status (std::string s) {
            if (s == "Gold" || s == "Silver" || s == "Bronze"){
                status = s;
                cout << "Matched\n";
            }else
            cout << "It doesnt match the status\n";
        }

std::ostream& operator << (std::ostream &output, User& u){
    output << "First Name: " << u.first_name << " Last Name: " << u.last_name 
    << " Status:" << u.status << endl;
    return output;
}

std::istream& operator >> (std::istream& input, User& u){
    input >> u.first_name >> u.last_name >> u.status;
    return input;
}
