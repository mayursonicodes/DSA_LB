//! Inserting Node at head

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

void insertAtHead(Node* &head, int x){
    Node *newNode = new Node(x);
    newNode->next = head;
    head = newNode;
}

int main(){

    Node *head = new Node(1);
    cout<<"LL before insertion: ";
    print(head);

    insertAtHead(head, 40);
    insertAtHead(head, 50);
    insertAtHead(head, 60);
    insertAtHead(head, 70);

    cout<<"LL after insertion: ";
    print(head);

    return 0;
}