#include <iostream>
using namespace std;

//1.prototype

int sumUpToN(int n,int m);
// 2.definition
int sumUpToN(int n,int m)
{
   int sum = 0;
   for(int i = n; i<= m; i++)
   {
       sum += i;
   }
   return sum;
}

int main()
{
    // 3.calling function
    cout << sumUpToN(10,11) << endl;
    return 0;
}
