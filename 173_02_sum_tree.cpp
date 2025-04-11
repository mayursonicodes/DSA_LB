//! Convert BT into sum tree
//todo root = root + left + right

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

    //! Recursive call for left node
    cout<<"Enter data for left part of "<<data<<" node"<<endl;
    root->left = buildTree();

    //! Recursive call for right node
    cout<<"Enter data for right part of "<<data<<" node"<<endl;
    root->right = buildTree();

    return root;
}

int convert_to_sumTree(TreeNode* root){
    // Base Case
    if(root == NULL)
        return 0;

    int left_part = convert_to_sumTree(root->left);
    int right_part = convert_to_sumTree(root->right);

    root->data = root->data + left_part + right_part;

    return root->data;
}

int main(){

    TreeNode* root = NULL;
    root = buildTree();

    convert_to_sumTree(root);
    cout<<root->data<<endl;

    return 0;
}