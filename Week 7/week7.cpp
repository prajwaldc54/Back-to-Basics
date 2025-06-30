#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int arr[][3] = {{1,2,3}, {4,5,6}, {7,8,9}}; //the second area is for the size of array set which is mandatory
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
        
    }
    
}