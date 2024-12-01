#include <iostream>
using namespace std;

void swapx(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 5, b = 10;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swapx(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;
    return 0;
}
