//! Left View in Tree

#include<iostream>
#include<vector>
#include<map>
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

void left_view_tree(TreeNode* root, int level, vector<int> &ans){

    if(root == NULL)
        return;

    if(ans.size() == level)
        ans.push_back(root->data);

    //! Left
    left_view_tree(root->left, level+1, ans);
    //! Right
    left_view_tree(root->right, level+1, ans);
}

int main(){

    TreeNode* root = NULL;
    root = buildTree();

    vector<int> ans;
    int level = 0;
    left_view_tree(root, level, ans);
    
    for(auto i: ans){
        cout<<i<<" ";
    }

    return 0;
}