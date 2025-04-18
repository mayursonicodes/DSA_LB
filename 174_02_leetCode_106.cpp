/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    public:
    
        int position_of_postorder_root_in_inorder(int postorder_root, vector<int>& inorder, int size){
            for(int i=0; i<size; i++){
                if(inorder[i] == postorder_root)
                    return i;
            }
            return -1;
        }
    
        TreeNode* buildTree(vector<int> &postorder, vector<int>& inorder, int size, int &postorder_index, int inorder_start, int inorder_end){
            if(postorder_index < 0 || inorder_start > inorder_end)
                return NULL;
    
            int postorder_root = postorder[postorder_index];
            postorder_index--;
            TreeNode *root = new TreeNode(postorder_root);
    
            int position = position_of_postorder_root_in_inorder(postorder_root, inorder, size);
    
            root->right = buildTree(postorder, inorder, size, postorder_index, position+1, inorder_end);
            root->left = buildTree(postorder, inorder, size, postorder_index, inorder_start, position-1);
    
            return root;
        }   
    
        TreeNode* buildTree(vector<int>& postorder, vector<int>& inorder) {
            int size = postorder.size();
            int postorder_index = size-1;
    
            TreeNode *root = buildTree(postorder, inorder, size, postorder_index, 0, size-1);
            return root;
        }
    };
    
    
    // class Solution {
    // public:
    
    //     void find_index(unordered_map<int, int> &mapping, vector<int> &inorder, int &size){
    //         for(int i=0; i<size; i++){
    //             mapping[inorder[i]] = i;
    //         }
    //     }
    
    //     TreeNode* buildTree(vector<int> &postorder, vector<int>& inorder, int &size, int &postorder_index, int inorder_start, int inorder_end, unordered_map<int, int> &mapping){
    //         if(postorder_index < 0 || inorder_start > inorder_end)
    //             return NULL;
    
    //         int postorder_root = postorder[postorder_index];
    //         postorder_index--;
    //         TreeNode *root = new TreeNode(postorder_root);
    
    //         int position = mapping[postorder_root];
    
    //         root->right = buildTree(postorder, inorder, size, postorder_index, position+1, inorder_end, mapping);
    //         root->left = buildTree(postorder, inorder, size, postorder_index, inorder_start, position-1 , mapping);
    
    //         return root;
    //     }   
    
    //     TreeNode* buildTree(vector<int>& postorder, vector<int>& inorder) {
    //         int size = postorder.size();
    //         int postorder_index = size-1;
    //         int inorder_start = 0;
    //         int inorder_end = size-1;
    
    //         unordered_map<int, int> mapping;
    //         find_index(mapping, inorder, size);
    
    //         TreeNode *root = buildTree(postorder, inorder, size, postorder_index, inorder_start, inorder_end, mapping);
    //         return root;
    //     }
    // };