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

//! Reversing the LL
Node* reverse(Node* &head){
    Node* prev = NULL;
    Node* current = head;
    Node* forward = current->next;

    while(current != NULL){
        forward = current->next;
        current->next = prev;
        prev = current;
        current = forward;
    }
    return prev;
}

//! Checking LL is Palindrome or not
bool isPalindrome(Node* &head){
    if(head == NULL){
        cout<<"LL is empty"<<endl;
        return true;
    }

    if(head->next == NULL){
        return true;
    }

    //! Finding middle of LL
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
    }

    //! Reversing LL after middle/slow
    Node* reverseKaHead = reverse(slow->next);
    slow->next = reverseKaHead;

    //! Start comparing the LL
    Node* temp1 = head;
    Node* temp2 = reverseKaHead;
    while(temp2 != NULL){
        if(temp1->data != temp2->data)
            return false;
        else{
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    
    return true;
}

int main(){

    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(20);
    Node *fifth = new Node(10);
    Node *sixth = new Node(10);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;
    // sixth->next = NULL;

    Node *head = first;
    print(head);

    cout<<"Is LL is Palindrome: "<<isPalindrome(head)<<endl;
    // print(head);

    return 0;
}