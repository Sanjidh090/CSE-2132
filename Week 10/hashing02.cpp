#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> hashmap;
    for (int i = 0; i < n; i++)
    {
        hashmap[arr[i]]++;
    }

    int q, num;
    cin >> q; // read number of queries

    while (q--)
    {
        cin >> num;
        cout << hashmap[num] << endl; // outputs 0 if not found
    }

    return 0;
}
