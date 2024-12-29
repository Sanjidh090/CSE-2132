//to store data parmanently
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream write;
    // write.open("Student.txt");
    write.open("Student.txt",ios :: out | ios :: app);
    // write << " We are EEE 2K22 batch\n";
    write << "from KUET,Say HI";
    write.close();

    return 0;
}