#include<iostream>
#include<vector>
#include<string.h>
#include<queue>
#include<stack>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree(){

    int data;
    cout<<"Enter the data: "<<endl;
    cin>>data;

    //! Base condition
    if(data == -1)
        return NULL;

    Node* root = new Node(data);

    //! Recursive call for left node
    cout<<"Enter data for left part of "<<data<<" node"<<endl;
    root->left = buildTree();

    //! Recursive call for right node
    cout<<"Enter data for right part of "<<data<<" node"<<endl;
    root->right = buildTree();

    return root;
}

int main(){

    Node* root = NULL;
    root = buildTree();

    return 0;
}