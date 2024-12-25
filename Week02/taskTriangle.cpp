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
    return sqrt(pow(p1.getX() - p2.getX(), 2) + pow(p1.getY() - p2.getY(), 2));
}

class Triangle {
private:
    float a, b, c, area;

public:
    Triangle(Point p1, Point p2, Point p3) {
        a = distance(p1, p2);
        b = distance(p2, p3);
        c = distance(p3, p1);
        area = 0;
    }

    void calarea() {
        float s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
    }

    float getArea() {
        return area;
    }

    float getA() {
        return a;
    }
    float getB() {
        return b;
    }
    float getC() {
        return c;
    }
};

int main() {
    Point p1(0, 0), p2(3, 0), p3(0, 4);

    Triangle t(p1, p2, p3);
    t.calarea();

    cout << "Side a: " << t.getA() << endl;
    cout << "Side b: " << t.getB() << endl;
    cout << "Side c: " << t.getC() << endl;
    cout << "Area of the triangle: " << t.getArea() << endl;

    return 0;
}
