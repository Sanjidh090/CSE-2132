#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    string s1("hello");
    string s2 = "hello";
    string s3(8, 'x');
    string s4 = s3;
    string s5(s2, 3, 2); // Extracts substring from s2 starting at index 3 with length 2

    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    cout << "s3: " << s3 << endl;
    cout << "s4: " << s4 << endl;
    cout << "s5: " << s5 << endl;

    return 0;
}

// //////
// String object///
// "s2 += s" == "s2 = s2 + s"

// s6 = "ABCD*SHSH::"
// s4 = s6.substr(5, 3 )    // s4 = "SHSH"
// //erase(4,2)
//replace(whre, how many, what)
//find function
//swap 
//s1 .swap(s2)

//member function