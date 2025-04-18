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
    cout<<"Enter the data: ";
    cin>>data;

    if(data == -1)
        return NULL;

    TreeNode* root = new TreeNode(data);

    root->left = buildTree();
    root->right = buildTree();

    return root;
}

void top_view_tree(TreeNode* root){

    

}

int main(){

    

    return 0;
}