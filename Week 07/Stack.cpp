#include <iostream>
using namespace std;

class Stack {
private:
    int top;
    int* str;
    int sz;
    int cap;
    
public:
    Stack(int capacity) {
        cap = capacity;
        str = new int[cap];
        top = -1;
        sz = 0;
    }

    ~Stack() {
        delete[] str;  // Clean up the allocated memory
    }

    void push(int value) {
        if (sz == cap) {
            cout << "Stack Overflow" << endl;
        } else {
            top++;
            str[top] = value;
            sz++;
        }
    }

    int pop() {
        if (sz == 0) {
            cout << "Stack Underflow" << endl;
            return -1;
        } else {
            int res = str[top];
            top--;
            sz--;
            return res;
        }
    }

    int size() {
        return sz;
    }

    bool isempty() {
        return sz == 0;
    }

    void traverse() {
        if (sz == 0) {
            cout << "Stack is empty." << endl;
        } else {
            for (int i = 0; i <= top; i++) {
                cout << str[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s(5);  // Create a stack with a capacity of 5 elements

    s.push(30);  // Push 30 to the stack
    cout << "Popped element: " << s.pop() << endl;  // Pop an element
    cout << "Stack size: " << s.size() << endl;  // Check the size of the stack
    cout << "Is the stack empty? " << (s.isempty() ? "Yes" : "No") << endl;  // Check if the stack is empty

    s.push(20);  // Push 20 to the stack
    s.push(50);  // Push 50 to the stack
    s.pop();  // Pop an element (50 will be removed)

    s.traverse();  // Traverse and display the stack elements

    cout << "heheehhe" << endl;  // Output a string message

    cout << "Popped element: " << s.pop() << endl;  // Pop another element (20 will be removed)

    s.traverse();  // Traverse and display the stack elements after popping

    return 0;  // End the program
}
