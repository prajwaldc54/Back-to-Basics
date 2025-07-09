#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

class User {
    std::string status;
    static int user_count;
    public:
    int get_user_count (){
        return user_count;
    }
        std::string first_name;
        std::string last_name;
        std::string get_status(){  // getting data from private access modifier in a struct
            return status;
        }

        User () {
            user_count++;
        }

        User (std::string n, std::string l, std::string s){
                first_name = n;
                last_name = l;
                status = s;
                user_count ++;
        }

        ~User (){
            user_count --;
        }

        void set_status (std::string s) {
            if (s == "Gold" || s == "Silver" || s == "Bronze"){
                status = s;
                cout << "Matched\n";
            }else
            cout << "It doesnt maatch the status\n";
        }
}; 

int User::user_count = 000;


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
    User user4, user1,user2,user3;
    user4.first_name = "Prajwal"; 
    user4.last_name = "D C";
    user1.set_status("Gold");
    cout << "Number of user: " << user1.get_user_count() << endl;
}