//!..This Pointer...
#include<iostream>
using namespace std;

class Point{
    int x, y;
public:
    Point(int x1, int y1) {
        this->x = x1;
        this->y = y1;
    }
    void print() const {
        cout << x << " " << y << endl;
    }
};
int main() {
    Point p1(10,20),p2(5,5);
    p1.print();
    p2.print();
    return 0;
}