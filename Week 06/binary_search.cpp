#include <iostream>
using namespace std;

int main() {
    int arr[] = {35, 20, 30, 40, 50}; // Sorted array
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 35;

    int low = 0, high = size - 1, mid;
    bool found = false;

    // Binary search
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == target) {
            cout << "Element found at index " << mid << endl;
            found = true;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }

    if (!found) {
        cout << "Element not found." << endl;
    }

    return 0;
}
