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

//! Approach 1
void sort1(Node* &head){
    int zero = 0;
    int one = 0;
    int two = 0;

    Node* temp = head;

    while(temp != NULL){
        if(temp->data == 0)
            zero++;
        else if(temp->data == 1)
            one++;
        else
            two++;
        temp = temp->next;
    }

    temp = head;
    while(zero--){
        temp->data = 0;
        temp = temp->next;
    }
    while(one--){
        temp->data = 1;
        temp = temp->next;
    }
    while(two--){
        temp->data = 2;
        temp = temp->next;
    }
}

//! Approach 2
Node* sort2(Node* &head){

    //todo Creating dummy nodes
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;

    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;

    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* current = head;
    while(current != NULL){

        //todo Taking out 0 wali node
        if(current->data == 0){
            Node* temp = current;
            current = current->next;
            temp->next = NULL;

            //todo append 0 wali node to zeroHead LL
            zeroTail->next = temp;
            zeroTail = temp;
        }

        else if(current->data == 1){
            Node* temp = current;
            current = current->next;
            temp->next = NULL;

            oneTail->next = temp;
            oneTail = temp;
        }

        else if(current->data == 2){
            Node* temp = current;
            current = current->next;
            temp->next = NULL;

            twoTail->next = temp;
            twoTail = temp;
        }
    }

    //todo Deleting dummy nodes from oneHead & twoHead
    Node* temp = oneHead;
    oneHead = oneHead->next;
    temp->next = NULL;
    delete temp;

    temp = twoHead;
    twoHead = twoHead->next;
    temp->next = NULL;
    delete temp;

    //todo Joining all the sub LL
    if(oneHead != NULL){
        zeroTail->next = oneHead;
        if(twoHead != NULL)
            oneTail->next = twoHead;
    }
    else{
        if(twoHead != NULL)
            zeroTail->next = twoHead;
    }

    //todo Removing dummy node from zeroHead
    temp = zeroHead;
    zeroHead = zeroHead->next;
    temp->next = NULL;
    delete temp;

    return zeroHead;

}

int main(){

    Node *first = new Node(2);
    Node *second = new Node(1);
    Node *third = new Node(0);
    Node *fourth = new Node(1);
    Node *fifth = new Node(0);
    Node *sixth = new Node(1);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    Node* head = first;
    print(head);

    // sort1(head);
    // print(head);

    head = sort2(head);
    print(head);

    return 0;
} 