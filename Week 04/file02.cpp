#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // string line;
    // ifstream read;
    // read.open("Student.txt"); 
    // while(getline(read,line)){cout << line << endl;}
    // getline(read,line);
    // cout << line <<endl;
    // getline(read,line);
    // cout << line <<endl;

string line;
ifstream read;
read.open("Students.txt");
getline(read,line);
cout<< line << endl;
read.close();
cout<< line << endl;

    return 0;
}
