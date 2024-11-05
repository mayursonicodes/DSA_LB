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
        ~Node(){
            cout<<"Node deleted"<<endl;
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

//! find the length of LL
int findLength(Node *head){
    Node *temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
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
    tail->next = newNode;
    tail = newNode;
}

//! Insert node after the specific position
void insertAtPosition(Node* &head, Node* &tail, int data, int position){
    if(head == NULL){
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    if(position == 0){
        insertAtHead(head, tail, data);
        return;
    }

    int len = findLength(head);
    if(position >= len){
        insertAtTail(head, tail, data);
        return;
    }

    Node *previous = head;
    int i = 1;

    while(i < position){
        previous = previous->next;
        i++;
    }
    Node *current = previous->next;

    Node *newNode = new Node(data);
    newNode->next = current;
    previous->next = newNode;
}

//! Delete node from LL
void deleteNode(Node* &head, Node* &tail, int position){
    if(head == NULL){
        cout<<"Cannot delete, LL is empty";
        return;
    }

    if(position == 1){
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    int len = findLength(head);
    if(position == len){
        int i = 1;
        Node *previous = head;
        while(i < position-1){
            previous = previous->next;
            i++;
        }
        previous->next = NULL;
        Node *temp = tail;
        tail = previous;
        delete temp;
        return;
    }

    int i = 1;
    Node *previous = head;
    while(i < position-1){
        previous = previous->next;
        i++;
    }
    Node *current = previous->next;
    previous->next = current->next;
    current->next = NULL;
    delete current;
}

int main(){

    Node *head = NULL;
    Node *tail = NULL;

    cout<<"LL before insertion: ";
    print(head);

    insertAtHead(head, tail, 1);
    insertAtHead(head, tail, 2);
    insertAtHead(head, tail, 3);
    insertAtHead(head, tail, 4);

    insertAtTail(head, tail, 100);
    insertAtTail(head, tail, 200);
    insertAtTail(head, tail, 300);

    //! Insert 999 after 2nd node
    insertAtPosition(head, tail, 999, 12);

    cout<<"LL after insertion: ";
    print(head);

    deleteNode(head, tail, 2);
    cout<<"LL after deletion: ";
    print(head);  

    return 0;
}