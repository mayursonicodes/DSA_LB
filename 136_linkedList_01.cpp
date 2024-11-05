/*
! Linear Data Structure
! Non continous memory location
! No wastage of memory like array, vector
*/

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(){
            this->data = NULL;
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
}

int main(){

    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    print(first);

    return 0;
}