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

//! Checking loop is present or not
bool checkLoop(Node* &head){
    if(head == NULL){
        return false;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }

        if(slow == fast){
            return true;
        }
    }

    return false;
}

//! Finding starting point of loop
Node* findPostionLoop(Node* &head){
    if(head == NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }

        if(fast == slow){
            slow = head;
            break;
        }
    }

    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}

//! Removing loop from LL
Node* removeLoop(Node* &head){
    if(head == NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }

        if(fast == slow){
            slow = head;
            break;
        }
    }

    Node* prev = fast;
    while(slow != fast){
        prev = fast;
        slow = slow->next;
        fast = fast->next;
    }
    prev->next = NULL;

    return slow;
}

int main(){

    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);
    Node *seventh = new Node(70);
    Node *eighth = new Node(80);
    Node *ninth = new Node(90);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;
    eighth->next = ninth;
    ninth->next = fifth;

    Node *head = first;
    // print(head);

    cout<<"Loop is present or not: "<<checkLoop(head)<<endl;
    cout<<"Position of starting loop: "<<findPostionLoop(head)->data<<endl;
    cout<<"Removing loop from LL:"<<endl;
    removeLoop(head);
    cout<<"Loop is present or not: "<<checkLoop(head)<<endl;
    print(head);

    return 0;
}