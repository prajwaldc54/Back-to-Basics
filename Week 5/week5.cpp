#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;

void print_array (int ar[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << "\t";
    }
    
}

int main (){
    int const size = 50;
    int arr [size];
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (cin >> arr[i])
        {
            count ++; 
        } else {
            break;
        }
        
        
    }
    cin.clear(); // reset the cin to further use after using character to end the cin
    cin.ignore(1000,'\n'); // ignoring the last stored value in cin so that we can re-utilize cin again

    print_array (arr, count);
    
    std::string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << name << endl;

}