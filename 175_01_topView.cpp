//! Top View in Tree

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
    cout<<"Enter the data: ";
    cin>>data;

    if(data == -1)
        return NULL;

    TreeNode* root = new TreeNode(data);

    cout<<"Enter left node for "<<data<<" node: ";
    root->left = buildTree();
    cout<<"Enter right node for "<<data<<" node: ";
    root->right = buildTree();

    return root;
}

void top_view_tree(TreeNode* root){

    if(root == NULL)
        return;

    //! map for storing HD & node data
    map<int, int> topNode;

    //! store pair consisting of node & HD
    queue< pair<TreeNode*, int> > q;
    q.push(make_pair(root, 0));

    while(!q.empty()){

        pair<TreeNode* , int> temp = q.front();
        q.pop();

        TreeNode* frontNode = temp.first;
        int HD = temp.second;

        //! check if HD is already present in map or not
        if(topNode.find(HD) == topNode.end())
            topNode[HD] = frontNode->data;

        if(frontNode->left)
            q.push(make_pair(frontNode->left, HD-1));

        if(frontNode->right)
            q.push(make_pair(frontNode->right, HD+1));
    }

    for(auto i: topNode){
        cout<<i.first<<" -> "<<i.second<<endl;
    }
}

int main(){

    TreeNode* root = NULL;
    root = buildTree();

    top_view_tree(root);    

    return 0;
}