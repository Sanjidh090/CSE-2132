#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int new_data) {
        this->data = new_data;
        this->next = nullptr;
    }
};

Node* insertAtEnd(Node* head, int new_data) {
    Node* new_Node = new Node(new_data);
    if (head == nullptr) {
        return new_Node;
    }
    Node* last = head;
    while (last->next != nullptr) {
        last = last->next;
    }
    last->next = new_Node;
    return head;
}

void traverseList(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

Node* insertAtBeginning(Node* head, int new_data) {
    Node* new_Node = new Node(new_data);
    new_Node->next = head;
    return new_Node;
}

int main() {    
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head = insertAtBeginning(head, 5);
    insertAtEnd(head, 60);
    traverseList(head);
    return 0;
}
