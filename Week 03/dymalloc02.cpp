#include <iostream>

using namespace std;

int main()
{
    int asize = 5;
    int arra[asize] = {4,6,78,35,7};

    int *arr2 = new int[asize];
    for(int i=1; i<=asize;i++)
        arr2[i-1] = i*10;

//    for(int i=0;i<asize;i++)
//        cout << arr2[i] << " ";

    asize--;
    int *arr3 = new int[asize];
    for(int i=0; i<asize;i++)
        arr3[i] = arr2[i];

    delete[] arr2;
    arr2 = arr3;

 

    for(int i=0;i<asize;i++)
        cout << arr2[i] << " ";

    return 0;
}
