#include <iostream>

using std::cout;
using std::cin;
using std::endl;

struct User {
    std::string first_name;
    std::string last_name;
    std::string get_status(){  // getting data from private access modifier in a struct
        return status;
    }
    private:
    std::string status = "Platinum";
}; 

int main () {
    User user;
    user.first_name = "Prajwal";
    user.last_name = "D C";
    
    cout << "Data from struct are " << "Firstname: " << user.first_name << " Lastname: " << user.last_name << " Status: " << user.get_status() << endl;
}