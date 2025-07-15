#ifndef HEADER_H
#define HEADER_H
class User {
    std::string status;
    static int user_count;
    public:
    int get_user_count (); 
        std::string first_name;
        std::string last_name;
        std::string get_status();

        User ();

        User (std::string n, std::string l, std::string s);

        ~User ();

        void set_status (std::string s);

        friend std::ostream& operator << (std::ostream &output, User& u);
        friend std::istream& operator >> (std::istream& input, User& u);
        
}; 

#endif