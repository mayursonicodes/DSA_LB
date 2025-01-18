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

//! Printing Linked List
void print(Node *head){
    Node *temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

//! Removing duplicates from Sorted LL
void removeDuplicate(Node* &head){
    Node* current = head;

    while(current != NULL){
        if((current->next != NULL) && (current->data == current->next->data)){
            Node* temp = current->next;
            current->next = current->next->next;
            temp->next = NULL;
            delete temp;
        }
        else{
            current = current->next;
        }
    }
}

int main(){

    Node *first = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(2);
    Node *fourth = new Node(2);
    Node *fifth = new Node(3);
    Node *sixth = new Node(3);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    Node* head = first;
    print(head);

    removeDuplicate(head);
    print(head);

    return 0;
}