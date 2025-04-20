class Solution {
    public:
    
    bool is_balanced = true;

    int height(TreeNode* root){
        if(root == NULL)
            return 0;

        int left_height = height(root->left);
        int right_height = height(root->right);

        if(abs(left_height - right_height) > 1)
            is_balanced = false;

        return max(left_height, right_height) + 1;
    }

    bool isBalanced(TreeNode* root) {
        height(root);
        return is_balanced;
    }
};