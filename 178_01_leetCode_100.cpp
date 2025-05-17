//! Same Tree

class Solution {
    public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL)
            return true;

        if(p != NULL && q != NULL){
            return (p->val == q->val) && isSameTree(q->left, p->left) && isSameTree(q->right, p->right);
        }

        return false;
    }
};