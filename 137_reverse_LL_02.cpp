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

        ~Node(){
            cout<<"Node deleted"<<endl;
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

//! Reverse LL using Recursion
Node *reverse(Node* &prev, Node* &current){
    //todo Base Case
    if(current == NULL){
        return prev;
    }

    Node *forward = current->next;
    current->next = prev;
    return reverse(current, forward);
}

//! Reverse LL using Loop
Node *reverseUsingLoop(Node* head){
    Node *prev = NULL;
    Node *current = head;

    while(current != NULL){
        Node *temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }

    return prev;
}

int main(){

    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);

    insertAtTail(head, tail, 100);
    insertAtTail(head, tail, 200);
    insertAtTail(head, tail, 300);

    cout<<"LL before reverse: ";
    print(head);

    Node *prev = NULL;
    Node *current = head;

    head = reverse(prev, current);

    cout<<"LL after reverse using recursion: ";
    print(head);

    head = reverseUsingLoop(head);

    cout<<"LL after reverse using loop: ";
    print(head);

    return 0;
}