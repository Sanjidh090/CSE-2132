#include <iostream>
#include <string>

int main() {
    std::string s;
    std::string s1("hello");
    std::string s2 = "hello";
    std::string s3(8, 'x');
    std::string s4 = s3;
    std::string s5(s2, 3, 2); // Extracts substring from s2 starting at index 3 with length 2

    std::cout << "s1: " << s1 << std::endl;
    std::cout << "s2: " << s2 << std::endl;
    std::cout << "s3: " << s3 << std::endl;
    std::cout << "s4: " << s4 << std::endl;
    std::cout << "s5: " << s5 << std::endl;

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
