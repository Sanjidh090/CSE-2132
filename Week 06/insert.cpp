#include <iostream>
using namespace std;

int main() {
    // Initialize the array with 5 elements. The array size is 6 but we are only using the first 5 elements.
    int arr[6] = {18, 30, 15, 70, 12};
    
    // Variable 'n' holds the number of valid elements currently in the array (5 elements).
    int n = 5;
    
    // Variable 'x' will hold the element to be inserted, and 'pos' specifies the position at which to insert it.
    int x, pos = 4;  // Insert at position 4 (5th element in a 0-indexed array).

    // Taking input for the element to be inserted.
    cin >> x;

    // Shift elements starting from the last index (n) towards the specified position (pos).
    // This loop shifts elements to the right to make space for the new element at 'pos'.
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];  // Each element at index i is moved to index i+1.
    }

    // Insert the new element 'x' at the desired position (pos).
    arr[pos] = x;

    // Increment 'n' to reflect the new size of the array (now it has 6 elements).
    n++;

    // Loop to print all the elements of the array after the insertion.
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // Print each element followed by a space.
    }

    return 0;  // Return 0 to indicate successful program termination.
}
