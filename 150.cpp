// head insert
// tail insert
// position insert
// length of LL

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node *prev;

        Node(){
            this->data = 0;
            this->next = NULL;
            this->prev = NULL;
        }

        Node(int x){
            this->data = x;
            this->next = NULL;
            this->prev = NULL;
        }
};

//! Print the LL
void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

//! find the length of LL
int findLength(Node *head){
    Node *temp = head;
    int count = 0;
    while(temp != NULL){
        temp = temp->next;
        count++;
    }
    return count;
}

//! Insert node at head
void insertAtHead(Node* &head, Node* &tail, int x){
    if(head == NULL){
        Node *newNode = new Node(x);
        head = newNode;
        tail = newNode;
        return;
    }

    Node *newNode = new Node(x);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

//! Insert node at tail
void insertAtTail(Node* &head, Node* &tail, int x){
    if(head == NULL){
        Node *newNode = new Node(x);
        head = newNode;
        tail = newNode;
        return;
    }

    Node *newNode = new Node(x);
    newNode->prev = tail;
    tail->next = newNode; 
    tail = newNode;
}

//! Insert node after the specific position
void insertAtPosition(Node* &head, Node* &tail, int position, int x){
    if(head == NULL){
        Node *newNode = new Node(x);
        head = newNode;
        tail = newNode;
    }

    if(position == 1){
        insertAtHead(head, tail, x);
        return;
    }

    int len = findLength(head);
    if(position > len){
        insertAtTail(head, tail, x);
        return;
    }

    Node *prevNode = head;
    int i = 1;
    while(i < position - 1){
        prevNode = prevNode->next;
        i++;
    }
    Node *currentNode = prevNode->next;

    Node *newNode = new Node(x);
    newNode->next = currentNode;
    newNode->prev = prevNode;
    prevNode->next = newNode;
    currentNode->prev = newNode;
}

int main(){

    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);

    insertAtTail(head, tail, 100);
    insertAtTail(head, tail, 200);
    insertAtTail(head, tail, 300);

    insertAtPosition(head, tail, 4, 999);

    print(head);

    return 0;
}