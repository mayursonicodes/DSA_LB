//! Diameter of Binary Tree
class Solution {
    public:
    
    int diameter = 0;

    int height(TreeNode* root){
        if(root == NULL)
            return 0;
        
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        int current_diameter = leftHeight + rightHeight;
        diameter = max(current_diameter, diameter);

        return max(leftHeight, rightHeight) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return diameter;
    }
};