//! Very Very Important

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

//! Reversing the K group of LL
Node *reverseKNodes(Node* &head, int k){
    if(head == NULL){
        cout<<"LL is empty";
        return NULL;
    }

    int len = findLength(head);
    // cout<<len<<endl;
    if(k > len){
        cout<<"Invalid value of K"<<endl;
        return head;
    }

    //todo Reversing K nodes in LL
    Node *prev = NULL;
    Node *current = head;
    Node *forward = current->next;
    int count = 0;

    while(count < k){
        forward = current->next;
        current->next = prev;
        prev = current;
        current = forward;
        count++;
    }

    if(forward != NULL){
        head->next = reverseKNodes(forward,k);
    }

    return prev;
}

int main(){

    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    Node *head = first;
    print(head);

    int k=4;
    head = reverseKNodes(head, k);
    print(head);

    return 0;
}