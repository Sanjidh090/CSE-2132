#include <iostream>
using namespace std;

int main() {
    int arr[100] = {18, 30, 15, 70, 12}; // Static array with initialized values
    int n = 5; // Current size of the array
    int pos = 3;// ( O based indexing ) Position where value is to be updated
    int value = 50; // Position where value is to be updated and the new value

    
    arr[pos] = value;  // Update the value at the position
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }

    return 0;
}
