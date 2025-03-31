#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int val) {
        data = val;
        next = prev = NULL;
    }
};

class DoublyLL {
    Node* head;
    Node* tail;
public:
    DoublyLL() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    void push_back(int val){
        
    }

    void print() {
        Node* temp = head;  // Use temp instead of head
        while (temp != NULL) {  // Check temp instead of head
            cout << temp->data << " ";  // Add space for readability
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    DoublyLL dl;
    dl.push_front(3);
    dl.push_front(2);
    dl.push_front(1);
    dl.print();  // Missing semicolon fixed

    return 0;
}
