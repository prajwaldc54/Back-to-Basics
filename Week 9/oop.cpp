#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

class User {
    std::string status = "Platinum";
    public:
        std::string first_name;
        std::string last_name;
        std::string get_status(){  // getting data from private access modifier in a struct
            return status;
        }

        User () {

        }

        // User (std::string n, std::string l, std::string s){
        //         first_name = n;
        //         last_name = l;
        //         status = s;
        // }

        ~User (){}

        void set_status (std::string s) {
            if (s == "Gold" || s == "Silver" || s == "Bronze"){
                status = s;
                cout << "Matched";
            }else
            cout << "It doesnt maatch the status";
        }
}; 

// bool person_checker (std::vector <User>& users, User& u) {
//     for (int i = 0; i < users.size(); i++)
//     {
//         if (users[i].first_name == u.first_name && users[i].last_name == u.last_name && users[i].status == u.status )
//         {
//             return true;
//         }
//     }
//      return false;
// }

int main () {
    User user4;
    user4.first_name = "Prajwal"; 
    user4.last_name = "D C";
    user4.set_status("Silver");
}