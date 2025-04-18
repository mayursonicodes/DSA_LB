//! Kth Ancestor

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
    
    cout<<"Enter the left node for "<<data<<endl;
    root->left = buildTree();
    cout<<"Enter the right node for "<<data<<endl;
    root->right = buildTree();
    
    return root;
}

//! Kth Ancestor function
bool k_ancestor(TreeNode* root, int p, int &k){
    if(root == NULL)
    return false;
    
    if(root->data == p)
    return true;
    
    bool left_part = k_ancestor(root->left, p, k);
    bool right_part = k_ancestor(root->right, p, k);
    
    if(left_part || right_part)
    k--;
    if(k == 0){
        cout<<"Kth ancestor is "<<root->data;
        k = -1;
    }
    
    return left_part || right_part;
}

int main(){

    TreeNode* root = NULL;
    root = buildTree();

    int k = 1;
    k_ancestor(root, 4, k);

    return 0;
}