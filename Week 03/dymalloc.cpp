#include <iostream>
using namespace std;
int main()
{   
    int asize = 5;
    int arra[asize]= { 4,6,78,35,7};
   // we might need to increase the size of the array
    // we can use dynamic memory allocation
    int *arr2 = new int[asize];
    for( int i = 1;i <= asize; i++)
    {
        arr2[i-1] = i*10;
    }
    // for(int i =0;i< asize;i++)
    // {
    //     cout<< arr2[i]<< " ";
    // }
    asize++;
    int *arr3 = new int[asize];
    for( int i = 0;i <= asize - 1; i++)
    {
        arr3[i] = arr2[i];
    }
    delete[] arr2;
    arr2 = arr3;
    arr2[asize-1] = 60;
    for(int i =0;i< asize;i++)
    {
        cout<< arr2[i]<< " ";
    }
    return 0;
}
