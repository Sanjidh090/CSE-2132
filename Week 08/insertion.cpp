#include <iostream>
using namespace std;

// Function to perform insertion sort on an array
void insertionSort(int arr[], int n) {
    // Loop through the array starting from the second element
    for (int i = 1; i < n; i++) {
        int key = arr[i];  // The current element to be inserted
        int j = i - 1;     // Compare with the previous elements

        // Move elements of arr[0..i-1] that are greater than the key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert the key at the correct position
        arr[j + 1] = key;
    }
}

// Function to print the elements of the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {75, 60, 90, 80, 70};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print the original array
    cout << "Original array: ";
    printArray(arr, n);

    // Sort the array using insertion sort
    insertionSort(arr, n);

    // Print the sorted array
    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
