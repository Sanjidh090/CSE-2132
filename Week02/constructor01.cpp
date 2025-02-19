#include <iostream>
#include <cmath>
using namespace std;
class Point {
private:
    int x, y;

public:
    Point(int a, int b) {
        x = a;
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
    Point p1(2, 3), p2(5, 5);

    cout << "Distance: " << distance(p1, p2) << endl;

    return 0;
}
