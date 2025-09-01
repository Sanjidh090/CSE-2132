//Write a program in C++ (using the concept of Object Oriented Programming) that will take the roll number and marks of all the theory courses of all the students for the session 2023-2024 (Batch 2K22) as input. Calculate the average mark of each student and print the roll number and average mark of the student whose average mark is the second highest. If more than one student gets the second highest average, print the roll number and average mark of the student who got the highest mark in the (SE 2131 course among them. It is ensured that no two students get the same mark in CSE 2131
#include <iostream>
using namespace std;

class Student {
public:
    string roll;
    int marks[10];     // store marks of up to 10 courses
    int numCourses;

    void input() {
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter marks of " << numCourses << " theory courses (CSE2131 first): ";
        for (int i = 0; i < numCourses; i++) {
            cin >> marks[i];
        }
    }

    double average() {
        int sum = 0;
        for (int i = 0; i < numCourses; i++) {
            sum += marks[i];
        }
        return (double)sum / numCourses;
    }

    int getCSE2131() {
        return marks[0];   // first course is CSE2131
    }
};

int main() {
    int n, numCourses;
    cout << "Enter number of students: ";
    cin >> n;
    cout << "Enter number of theory courses: ";
    cin >> numCourses;

    Student students[100];   // assume max 100 students
    for (int i = 0; i < n; i++) {
        students[i].numCourses = numCourses;
        students[i].input();
    }

    // Find first highest and second highest average
    double firstMax = -1, secondMax = -1;
    for (int i = 0; i < n; i++) {
        double avg = students[i].average();
        if (avg > firstMax) {
            secondMax = firstMax;
            firstMax = avg;
        } else if (avg > secondMax && avg < firstMax) {
            secondMax = avg;
        }
    }

    // Collect students with second highest average
    int chosenIndex = -1;
    int bestCSE2131 = -1;
    for (int i = 0; i < n; i++) {
        if (students[i].average() == secondMax) {
            if (students[i].getCSE2131() > bestCSE2131) {
                bestCSE2131 = students[i].getCSE2131();
                chosenIndex = i;
            }
        }
    }

    cout << "\nRoll No: " << students[chosenIndex].roll;
    cout << ", Second Highest Average: " << students[chosenIndex].average() << endl;

    return 0;
}
