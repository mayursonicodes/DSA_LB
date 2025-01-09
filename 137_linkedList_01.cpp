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

//! Delete node from LL
void deleteNode(Node* &head, Node* &tail, int position){
    if(head == NULL){
        cout<<"Linked List is empty";
        return;
    }

    if(head->next == NULL){
        Node *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }

    int len = findLength(head);
    if(position > len){
        cout<<"Enter valid position."<<endl;
    }

    if(position == 1){
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
        return; 
    }
    
    if(position == len){
        Node *temp = tail;
        tail = tail->prev;
        temp->prev = NULL;
        tail->next = NULL;
        delete temp;
        return;
    }

    //todo Delete from middle of LL
    int i = 1;
    Node *left = head;
    while(i < position-1){
        left = left->next;
        i++;
    }
    Node *current = left->next;
    Node *right = current->next;

    left->next = right;
    right->prev = left;
    current->next = NULL;
    current->prev = NULL;
    delete current;

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

    deleteNode(head, tail, 8);
    print(head);

    return 0;
}