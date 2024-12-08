#include <iostream>
#include <cmath>
using namespace std;

class Point {
    int x;
    int y;

public:
    Point() {}
    Point(int a, int b) {
        x = a;
        y = b;
        cout << "Called\n";
    }

    int getX() {
        return x;
    }

    int getY() {
        return y;
    }
};

float distance(Point p1, Point p2);

float distance(Point p1, Point p2) {
    float d;
    d = sqrt(pow(p1.getX() - p2.getX(), 2) + pow(p1.getY() - p2.getY(), 2));
    return d;
}

int main() {
    int x = 9, y;

    Point p1(0,0), p2(5,5), p3;
    
    cout << distance(p1, p2) << endl;

    return 0;
}
