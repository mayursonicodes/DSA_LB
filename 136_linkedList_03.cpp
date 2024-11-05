#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(){
            this->data = 0;
            this->next = NULL;
        }
        Node(int x){
            this->data = x;
            this->next = NULL;
        }
};

void print(Node *head){
    Node *temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head, Node* &tail, int x){
    Node *newNode = new Node(x);
    newNode->next = head;
    if(head == NULL){
        tail = newNode;
    }
    head = newNode;
}

void insertAtTail(Node* &head, Node* &tail, int x){
    Node *newNode = new Node(x);
    tail->next = newNode;
    if(tail == NULL){
        tail = newNode;
        head = newNode;
    }
    else{
        tail->next = newNode;
    }
    tail = newNode;
}

int main(){

    Node *head = NULL;
    Node *tail = NULL;
    cout<<"LL before insertion: ";
    print(head);

    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 60);
    insertAtHead(head, tail, 70);

    insertAtTail(head, tail, 100);
    insertAtTail(head, tail, 200);
    insertAtTail(head, tail, 300);

    cout<<"LL after insertion: ";
    print(head);

    return 0;
}