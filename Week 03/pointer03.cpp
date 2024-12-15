#include <iostream>
using namespace std;

int main()
{
    char c = 'A';
    char *p = &c;

    cout << "Value of c: " << c << endl; // Print the value of c
    printf("Value of c: %c\n", c); // Print the value of c using printf
    printf("Address of c: %p\n", (void*)&c); // Print the address of c using printf with correct format specifier

    cout << "Size of p: " << sizeof(p) << endl; // Print the size of pointer p
    cout << "Size of c: " << sizeof(c) << endl; // Print the size of char c
    return 0;
}
