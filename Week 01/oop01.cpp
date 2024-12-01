#include <iostream>
using namespace std;

//1.prototype

int sumUpToN(int);
// 2.definition
int sumUpToN(int N)
{
   int sum = 0;
   for(int i = 1; i<= N; i++)
   {
       sum += i;
   }
   return sum;
}

int main()
{
    // 3.calling function
    cout << sumUpToN(10) << endl;
    return 0;
}