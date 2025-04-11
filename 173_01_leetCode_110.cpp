class Solution {
    public:
    
    int height(TreeNode *root){
        if(root == NULL)
            return 0;

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        return max(leftHeight, rightHeight) + 1;
    }

    bool isBalanced(TreeNode* root){
        if(root == NULL)
            return true;

        //! find height of the left and right part of root
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        int difference = abs(leftHeight - rightHeight);

        bool ans1 = (difference <= 1);

        //! Recursive Call
        bool leftBalance = isBalanced(root->left);
        bool rightBalance = isBalanced(root->right);

        if(ans1 && leftBalance && rightBalance)
            return true;
        else
            return false;
    }
};