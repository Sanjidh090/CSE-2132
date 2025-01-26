#include <iostream>
using namespace std;

class Sort
{
    public:
    void bubblesort(int Arr[],int n)
    {for(int i=0;i<n-1;++i)
        for(int j=0;j<n -1;++j)
                if (Arr[j]>Arr[j+1])
                     swap(Arr[j],Arr[j+1]);          
        
    }
    void swap(int &a, int &b) 
    {
        int temp = a;
        a = b;
        b = temp;
    }

};
int main (){
    int Arr[] = {5,4,3,2,1};
    int n = sizeof(Arr)/sizeof(Arr[0]);
    Sort s;
    s.bubblesort( Arr, n);
    for (int i = 0; i < n; ++i)
    {
        cout << Arr[i] << " ";
    }
}