// #include <iostream>
// using std::cout;
// using std::cin;
// using std::endl;

// class Point {
//     public:
//         int x;
//         int y;

//         Point (int x, int y){
//             this->x = x;
//             this->y = y;
//         }

//         Point (){
//             int x = 0;
//             int y = 0;
//         }

//         Point operator + (Point pos){
//             Point temp;
//             temp.x = pos.x + x;
//             temp.y = pos.y + y;
//             return temp;
//         }

//         bool operator == (Point p){
//             if (x == p.x && y == p.y){
//                 return true;
//             }
//             return false;
//         }
// };

// int main(){
//     Point p1 (15,20);
//     Point p2(15,20);
//     Point p3 = p1 + p2;
//     cout << "The values of 2D vectors are " << p3.x << " and " << p3.y << endl;

//     if (p1 == p2){
//         cout << "Same Brother";
//     }

// }

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
            cout << "It doesnt match the status\n";
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

std::ostream& operator << (std::ostream &output, User u){
    output << "First Name: " << u.first_name << " Last Name: " << u.last_name << endl;
    return output;
}

int main () {
    User user4;
    user4.first_name = "Prajwal"; 
    user4.last_name = "D C";
    user4.set_status("Pearl");
    cout << user4 << endl;
}