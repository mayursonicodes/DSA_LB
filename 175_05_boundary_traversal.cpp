//! Boundary Traversal

#include<iostream>
#include<vector>
#include<string.h>
#include<queue>
#include<stack>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

TreeNode* buildTree(){
    int data;
    cout<<"Enter the data: "<<endl;
    cin>>data;

    if(data == -1)
        return NULL;

    TreeNode* root = new TreeNode(data);

    cout<<"Enter left node for "<<data<<" node: "<<endl;
    root->left = buildTree();
    cout<<"Enter right node for "<<data<<" node: "<<endl;
    root->right = buildTree();

    return root;
}

//! Left Traversal
void left_traversal(TreeNode* root){
    if(root == NULL)
        return;

    if(root->left == NULL && root->right == NULL)
        return;

    cout<<root->data<<" ";

    //! VERY IMPORTANT TO UNDERSTAND & REMEMBER
    if(root->left)
        left_traversal(root->left);
    else
        left_traversal(root->right);
}

//! root Traversal
void root_traversal(TreeNode* root){
    if(root == NULL)
        return;

    if(root->left == NULL && root->right == NULL){
        cout<<root->data<<" ";
        return;
    }

    root_traversal(root->left);
    root_traversal(root->right);
}

//! right Traversal
void right_traversal(TreeNode* root){
    if(root == NULL)
        return;

    if(root->left == NULL && root->right == NULL)
        return;

    //! VERY IMPORTANT TO UNDERSTAND & REMEMBER
    if(root->right)
        right_traversal(root->right);
    else
        right_traversal(root->left);

    cout<<root->data<<" ";
}

//! Boundary Traversal
void boundary_traversal(TreeNode* root){

    if(root->left == NULL && root->right == NULL){
        cout<<root->data;
        return;
    }

    cout<<root->data<<" ";

    left_traversal(root->left);
    root_traversal(root);
    right_traversal(root->right);
}

int main(){

    TreeNode* root = NULL;
    root = buildTree();

    boundary_traversal(root);

    return 0;
}