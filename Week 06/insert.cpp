#include <iostream>
using namespace std;

int main() {
    int arr[6] = {18, 30, 15, 70, 12};
    int n = 5;
    int x, pos = 4;
    cin >> x;
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = x;
    n++;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}