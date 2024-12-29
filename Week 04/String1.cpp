#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    s = "Hello World!";
    string s1;
    s1 = s;
    cout<< s1<<endl;
    s1 = s1 + s;
    cout<< s1<<endl;
    s1.insert(4,"hi");
    cout<< s1<<endl;
    return 0;
}
