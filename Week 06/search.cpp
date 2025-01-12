#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10,20,0,40,50};
    int i = 0;
    //cout << arr[3] << endl;
    for(i = 0; i <= 4; i++)
    {

        if (arr[i] == 30)
        {
            cout << "30 is present";
            break;
        }
        if ( i == 6)
        {
            cout << " 30 is not present ";
        }
        //cout << i << " th element and value "<< " " << arr[i] << endl;
    }
    return 0;
}
