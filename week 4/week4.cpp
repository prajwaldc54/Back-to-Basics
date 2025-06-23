#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main (){
    int arr[5] = {100,70,89,-5,35};
    int length = sizeof(arr) / sizeof(arr[5]);
    for (int i = 0; i < length; i++)
    {   
        if (arr[i] < 0)
        {
            continue;
        }
        
          cout << arr[i] << " \n";
    }
    return 0; 
}
