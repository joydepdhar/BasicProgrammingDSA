#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int val){
            data=val;
            next=NULL;
        }
};
class List{
    Node* head;
    Node* tail;
    public:
        List(){
            head=tail=NULL;
        }
        void push_front(int val){
            Node* newNode=new Node(val);
            // Node NewNode(val);
            if(head==NULL){
                head=tail=newNode;
            }else{
                newNode->next=head;
                head=newNode;
            }
        }
        void printLinkedList(){
            Node*temp=head;
            while(temp != NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }
        void push_back(int val){
            Node* newNode = new Node(val);
            if(head==NULL){
                head=tail=newNode;
            }else{
                tail->next=newNode;
                tail=newNode;
            }
        }
        void pop_front(){
            if(head==NULL){
                cout<<"LL is empty";
                return ;
            }
            Node* temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp; 
        }
        void pop_back(){
            if(head==NULL){
                return;
            }
            Node* temp=head;
            while(temp->next != tail){
                temp=temp->next;
            }
            temp->next=NULL;
            delete tail;
            tail=temp;
        }
        void intertAnyPos(int data, int pos){
            if(pos<0){
                cout<<"Invalid Pos\n";
                return;
            }
            if(pos==0){
                push_front(data);
            }
            Node* temp=head;
            for(int i=0;i<pos-1;i++){
                if(temp==NULL){
                    // push_back(data);
                    cout<<"Invalid Position";
                }
                temp=temp->next;
            }
            Node* newNode=new Node(data);
            newNode->next=temp->next;
            temp->next=newNode;
        }

    int search(int key){
        Node* temp=head;
        int idx=1;
        while(temp!=NULL){
            if(temp->data==key){
                return idx;
            }
            temp=temp->next;
            idx++;
        }
        return -1;
    }
};
int main(){
    List li;
    // li.push_front(1);
    // li.push_front(2);
    // li.push_front(43);
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);
    li.push_back(5);
    li.intertAnyPos(6,3);
    // li.intertAnyPos(7,6);
    // li.intertAnyPos(7,9);
    li.printLinkedList();
    cout<<li.search(3);
    // cout<<"Before Pop Front: ";
    // li.printLinkedList();
    // li.pop_front();
    // cout<<endl;
    // cout<<"After pop front function use: ";
    // li.printLinkedList();
    // li.pop_back();
    // li.printLinkedList();

    return 0;
}