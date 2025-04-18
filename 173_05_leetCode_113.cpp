//! Path Sum II

//! Without reference pass
class Solution {
public:
    void solve(TreeNode* root, int targetSum, int currentSum, vector<int> path, vector<vector<int>> &ans){
        if(root == NULL)
            return;

        if(root->left == NULL && root->right == NULL){
            path.push_back(root->val);
            currentSum += root->val;
            
            if(currentSum == targetSum){
                ans.push_back(path);
                return;
            }
        }

        path.push_back(root->val);
        currentSum += root->val;

        solve(root->left, targetSum, currentSum, path, ans);
        solve(root->right, targetSum, currentSum, path, ans);
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        int currentSum = 0;
        vector<int> path;

        solve(root, targetSum, currentSum, path, ans);
        return ans;
    }
};

//! ======================================================================================================

//! With reference pass
class Solution {
    public:
        void solve(TreeNode* root, int targetSum, int &currentSum, vector<int> &path, vector<vector<int>> &ans){
            if(root == NULL)
                return;
    
            if(root->left == NULL && root->right == NULL){
                path.push_back(root->val);
                currentSum += root->val;
                
                if(currentSum == targetSum)
                    ans.push_back(path);
    
                path.pop_back();
                currentSum -= root->val;
                return;
            }
    
            path.push_back(root->val);
            currentSum += root->val;
    
            solve(root->left, targetSum, currentSum, path, ans);
            solve(root->right, targetSum, currentSum, path, ans);
    
            path.pop_back();
            currentSum -= root->val;
        }
    
        vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
            vector<vector<int>> ans;
            int currentSum = 0;
            vector<int> path;
    
            solve(root, targetSum, currentSum, path, ans);
            return ans;
        }
    };