//! Lowest Common Ancestor of a Binary Tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL)
            return NULL;

        if(root->val == p->val)
            return p;

        if(root->val == q->val)
            return q;

        TreeNode* left_part = lowestCommonAncestor(root->left, p, q);
        TreeNode* right_part = lowestCommonAncestor(root->right, p, q);

        if(left_part == NULL && right_part == NULL)
            return NULL;
        else if(left_part != NULL && right_part == NULL)
            return left_part;
        else if(left_part == NULL && right_part != NULL)
            return right_part;
            return root;
        else
    }
    };