#include <iostream>
using namespace std;

class queue {
private:
    int *st;  // Array to store elements
    int cap;  // Capacity of the queue
    int sz;   // Current size of the queue
    int top;  // Top pointer (repurposed as rear pointer for queue)

public:
    queue(int c) {
        cap = c;
        sz = 0;
        top = -1;
        st = new int[cap];
    }

    void enqueue(int x) {
        if (sz == cap) {
            cout << "queue overflow\n";
            return;
        }
        top = (top + 1) % cap;
        st[top] = x;
        sz++;
    }

    int dequeue() {
        if (sz == 0) {
            cout << "queue underflow\n";
            return -1; // Indicating error
        }
        int result = st[(cap - sz) % cap];
        sz--;
        return result;
    }

    int size() {
        return sz;
    }

    bool isEmpty() {
        return sz == 0;
    }

    void traverse() {
        for (int i = 0; i < sz; i++) {
            cout << st[(cap - sz + i) % cap] << " ";
        }
        cout << endl;
    }
};

int main() {
    queue q(6);
    q.enqueue(12);
    q.enqueue(5);
    q.enqueue(9);
    q.traverse();
    q.enqueue(102);
    q.dequeue();
    q.traverse();

    return 0;
}