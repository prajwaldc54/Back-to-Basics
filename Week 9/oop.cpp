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

        User (std::string n, std::string l){
                first_name = n;
                last_name = l;
        }

        ~User (){
            cout << "Destructor\n";
        }
}; 

bool name_exists (std::vector <User> &users, User u) {
    for (int i = 0; i < users.size(); i++)
    {
        if (users[i].first_name == u.first_name && users[i].last_name == u.last_name )
        {
            return true;
        }
        return false;
        
    }
    
}

int main () {
    User user1 ("Prajwal", "D C"),user2 ("Rubin", "Adhikari"),user3 ("Pankaj", "Basnet");
    std::vector<User> users;
    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);
    User user4 ("Prajwal", "D C");
    cout << "Do the names repeat " << (name_exists(users, user4)? "True" : "False") << endl;
}