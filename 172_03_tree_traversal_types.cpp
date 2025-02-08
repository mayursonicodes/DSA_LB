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

    if(data == -1)
        return NULL;

    Node* root = new Node(data);

    cout<<"Enter data for left part of "<<data<<" node "<<endl;
    root->left = buildTree();

    cout<<"Enter data for right part of "<<data<<" node "<<endl;
    root->right = buildTree();

    return root;
}

void preOrderTraversal(Node* root){
    //! Base Case
    if(root == NULL)
        return;

    //! NLR
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node* root){
    //! Base Case
    if(root == NULL)
        return;

    //! LNR
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node* root){
    //! Base Case
    if(root == NULL)
        return;

    //! LRN
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

int main(){

    Node* root = NULL;
    root = buildTree();
    cout<<endl;

    preOrderTraversal(root);
    cout<<endl;

    inOrderTraversal(root);
    cout<<endl;
    
    postOrderTraversal(root);
    cout<<endl;

    return 0;
}