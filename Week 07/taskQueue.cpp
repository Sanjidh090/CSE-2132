#include <iostream>
using namespace std;

class Queue {
private:
    int sz = 5;        
    int arr[5];            
    int front;             
    int rear;             

public:
    Queue() {
        front = -1;    
        rear = -1;         
    }

    void enqueue(int value) {
        if (rear == sz - 1) { 
            cout << "Queue Overflow" << endl;
            return;
        }
        if (front == -1) {      
            front = 0;           // Set front to 0 to mark the start of the queue 
        }
        rear++;             
        arr[rear] = value;    
    }

    int dequeue() {
        if (front == -1) {       // Check if the queue is empty
            cout << "Queue Underflow" << endl;
            return -1;    
        }
        int data = arr[front];   
        if (front == rear) {    
            front = rear = -1;   // Reset the queue to empty
        } else {
            front++;             // Move front to the next element
        }
        return data;             // Return the dequeued value
    }

    void traverse() {
        if (front == -1) {      
            cout << "Queue is empty" << endl;
            return;
        }
        for (int i = front; i <= rear; i++) {  // Loop from front to rear
            cout << arr[i] << " ";            // Print each element
        }
        cout << endl;
    }
};

int main() {
    Queue q;                     // Create a Queue object
    q.enqueue(10);               // Add 10 to the queue
    q.enqueue(20);               // Add 20 to the queue
    q.enqueue(30);               // Add 30 to the queue
    q.traverse();                // Display all elements in the queue
    return 0;                    // End of the program
}
