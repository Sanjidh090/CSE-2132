#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    int *p;
    p = &x;
    int **pp;
    pp = &p;
    cout << " **pp : " << **pp << endl;
    cout << " *pp : " << *pp << endl;
    cout << " pp : " << pp << endl;
    
    printf("Address of x: %d\n", &x);
    cout << &x << endl;
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;

    return 0;
}
