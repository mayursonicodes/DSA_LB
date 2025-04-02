//! Diameter of Binary Tree

class Solution {
public:

    int height(TreeNode* root){
        if(root == NULL)
            return 0;
        
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        return max(leftHeight, rightHeight) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL)
            return 0;
        
        int opt1 = diameterOfBinaryTree(root->left);
        int opt2 = diameterOfBinaryTree(root->right);
        int opt3 = height(root->left) + height(root->right);

        return max(opt1, max(opt2, opt3));
    }

    // ! APPROACH 2 IS LEFT
};