#include <iostream>
using namespace std;

void func(int array[]);

int main() {
    int arra[] = {10, 20, 30, 40, 50}; // Array declaration

    func(arra); // Pass the array to the function

    cout << "In main => " << arra[3] << endl; // Access the modified value
    return 0;
}

void func(int array[]) {
    array[3] = 100; // Modify the fourth element of the array
    cout << "In func => " << array[3] << endl; // Print the modified value
}
