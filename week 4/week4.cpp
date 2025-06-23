#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main (){
    int arr[5] = {100,70,89,-5,35};
    bool found = false;
    for (int i = 0; i < sizeof(arr); i++)
    {   
        cout << arr[i] << " \n";
        if (arr[i] < 0)
        {
            cout << "There is an invalild marks! Please check\n";
            break;
        }
        
    }
    return 0; 
}
