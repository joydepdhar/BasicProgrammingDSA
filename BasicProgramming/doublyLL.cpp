#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data=val;
        next=prev=NULL;
    }
};

class DoublyLL{
    Node* head;
    Node* tail;
    public:
    DoublyLL(){
        head=tail=NULL;
    }
};

int main(){
    

}