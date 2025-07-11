#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Point {
    public:
        int x;
        int y;

        Point (int x, int y){
            this->x = x;
            this->y = y;
        }

        Point (){
            int x = 0;
            int y = 0;
        }

        Point operator + (Point pos){
            Point temp;
            temp.x = pos.x + x;
            temp.y = pos.y + y;
            return temp;
        }

        bool operator == (Point p){
            if (x == p.x && y == p.y){
                return true;
            }
            return false;
        }
};

int main(){
    Point p1 (15,20);
    Point p2(15,20);
    Point p3 = p1 + p2;
    cout << "The values of 2D vectors are " << p3.x << " and " << p3.y << endl;

    if (p1 == p2){
        cout << "Same Brother";
    }

}