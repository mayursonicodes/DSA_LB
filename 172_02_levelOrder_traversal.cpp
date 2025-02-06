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

void levelOrderTraversal_1(Node* root){
    queue<Node*> q;

    q.push(root);

    while(!q.empty()){

        //! Step 1
        Node* current = q.front();

        //! Step 2
        q.pop();

        //! Step 3
        cout<<current->data<<" ";

        //! Step 4
        if(current->left)
            q.push(current->left);

        if(current->right)
            q.push(current->right);
    }
}

void levelOrderTraversal_2(Node* root){
    queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        Node* current = q.front();
        q.pop();

        if(current == NULL){
            cout<<endl;
            if(!q.empty())
                q.push(NULL);
        }

        else{
            cout<<current->data<<" ";

            if(current->left)
                q.push(current->left);

            if(current->right)
                q.push(current->right);
        }
    }
}

int main(){

    Node* root = NULL;
    root = buildTree();

    cout<<endl;
    levelOrderTraversal_1(root);
    cout<<endl<<endl;
    levelOrderTraversal_2(root);

    return 0;
}