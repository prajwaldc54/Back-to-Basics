#include <iostream>

using std::cout;
using std::cin;
using std::endl;

struct User {
    std::string first_name;
    std::string last_name;
    std::string status;
}; 

int main () {
    User user;
    user.first_name = "Prajwal";
    user.last_name = "D C";
    user.status = "Platinum";

    cout << "Data from struct are " << "Firstname: " << user.first_name << " Lastname: " << user.last_name << " Status: " << user.status << endl;
}