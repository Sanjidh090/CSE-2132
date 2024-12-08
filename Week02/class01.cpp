#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    int x, y;

public:
    void setX(int a) {
        x = a;
    }

    void setY(int b) {
        y = b;
    }

    int getX() {
        return x;
    }

    int getY() {
        return y;
    }
};

float distance(Point p1, Point p2) {
    float d;
    d = sqrt(pow(p1.getX() - p2.getX(), 2) + pow(p1.getY() - p2.getY(), 2));
    return d;
}

int main() {
    Point p1, p2;
    p1.setX(0);
    p1.setY(0);
    p2.setX(3);
    p2.setY(4);

    cout << "Distance: " << distance(p1, p2) << endl;

    return 0;
}
