#include <iostream>
using namespace std;

// Swap function that swaps two values
void swapx(int *x, int *y) { // Use pointers to pass by reference
    int t; // Temporary variable to store value during swap
    t = *x;
    *x = *y;
    *y = t;

    cout << "Inside Function:" << endl;
    cout << "x = " << *x << ", y = " << *y << endl;
}

int main() {
    // Pass by values
    int a = 10, b = 20;

    cout << "Before swapping in main:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Pass the address of variables to swap function
    swapx(&a, &b);

    cout << "In the Caller (after swapping):" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
