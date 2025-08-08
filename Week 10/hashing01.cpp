#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[100];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int hasharr[13] = {0}; // Initialize all values to 0

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0 && arr[i] < 13) // Ensure within range
            hasharr[arr[i]]++;
    }

    int q, num;
    cin >> q; // Read number of queries

    while (q--)
    {
        cin >> num;
        if (num >= 0 && num < 13)
            cout << hasharr[num] << endl;
        else
            cout << "Out of range!" << endl;
    }

    return 0;
}
