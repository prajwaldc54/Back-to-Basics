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
    User user1,user2,user3;
    std::vector<User> users;

    user1.first_name = "Prajwal";
    user1.last_name = "D C";

    user2.first_name = "Rubin";
    user2.last_name = "Adhikari";

    user3.first_name = "Pankaj";
    user3.last_name = "Basnet";

    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);

    User user4;
    user4.first_name = "Prajwal";
    user4.last_name = "D C";
    
    cout << "Do the names repeat " << (name_exists(users, user4)? "True" : "False") << endl;
}