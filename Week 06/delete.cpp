#include <iostream>
using namespace std;

int main() {
    int arr[100] = {18, 30, 15, 70, 12};
    int n = 5;
    int pos;
    cin >> pos;  // position to delete

    for(int i = pos; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
    n--;
 
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}