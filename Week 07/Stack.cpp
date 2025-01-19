#include <iostream>
using namespace std;
class Stack
{
    private:
        int *str;
        int cap;
        int sz;
        int top;
    public:
        Stack(int c){
            cap = c;
            sz = 0;
            top = -1;
            str = new int[cap];
        }
        void push(int x)
        {
            if(sz == cap)
            {
                cout << "Stack Overflow" ; return;
            }
            else
            {
                top++;
                if(top == cap)
                {
                    top = 0;
                }
                str[top] = x;
                sz++;
            }
        }
        int pop()
        {
            if(sz == 0)
            {
                cout << "Stack Underflow" ; return -1;
            }
            else
            {
                int res = str[top];
                top--;
                if(top == -1)
                {
                    top = cap - 1;
                }
                sz--;
                return res;
            }
        }
        int size()
        {
            return sz;
        }
        bool isempty()
        {
            if(sz==0)
                return true;
            else
                return false;
        }
        void traverse()
        {
            for(int i = 0; i < sz; i++)
                cout << str[i] << " ";

        }
        
};

int main()
{
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    // cout << s.pop() << endl;
    // cout << s.size() << endl;
    // cout << s.isempty() << endl;
    s.push(20);
    s.push(50);
    s.push(60);
    for(int i = 0;i <= 5;i++){
        cout << endl;
        s.pop();
        
        // s.push(4);
    }
    
    return 0;
}
