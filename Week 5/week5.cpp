#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime> // for time
#include <vector> // vector time
using std::cout;
using std::cin;
using std::endl;

void print_vector (std:: vector <int> &data){
    data.pop_back();
    for (int i : data)
    {
        cout << i << " ";
    }
    cout << "\n";
    
}

int main (){
   std:: vector <int> item = {2,4,6,8,10};
   print_vector(item); 
}