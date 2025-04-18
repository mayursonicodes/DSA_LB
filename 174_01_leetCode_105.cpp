// class Solution {
// public:

//     int position_of_preorder_root_in_inorder(int preorder_root, vector<int>& inorder, int size){
//         for(int i=0; i<size; i++){
//             if(inorder[i] == preorder_root)
//                 return i;
//         }
//         return -1;
//     }

//     TreeNode* buildTree(vector<int> &preorder, vector<int>& inorder, int size, int &preorder_index, int inorder_start, int inorder_end){
//         if(preorder_index >= size || inorder_start > inorder_end)
//             return NULL;

//         int preorder_root = preorder[preorder_index];
//         preorder_index++;
//         TreeNode *root = new TreeNode(preorder_root);

//         int position = position_of_preorder_root_in_inorder(preorder_root, inorder, size);

//         root->left = buildTree(preorder, inorder, size, preorder_index, inorder_start, position-1);
//         root->right = buildTree(preorder, inorder, size, preorder_index, position+1, inorder_end);

//         return root;
//     }   

//     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//         int size = preorder.size();
//         int preorder_index = 0;

//         TreeNode *root = buildTree(preorder, inorder, size, preorder_index, 0, size-1);
//         return root;
//     }
// };


class Solution {
    public:
    
        void find_index(unordered_map<int, int> &mapping, vector<int> &inorder, int &size){
            for(int i=0; i<size; i++){
                mapping[inorder[i]] = i;
            }
        }
    
        TreeNode* buildTree(vector<int> &preorder, vector<int>& inorder, int &size, int &preorder_index, int inorder_start, int inorder_end, unordered_map<int, int> &mapping){
            if(preorder_index >= size || inorder_start > inorder_end)
                return NULL;
    
            int preorder_root = preorder[preorder_index];
            preorder_index++;
            TreeNode *root = new TreeNode(preorder_root);
    
            int position = mapping[preorder_root];
    
            root->left = buildTree(preorder, inorder, size, preorder_index, inorder_start, position-1, mapping);
            root->right = buildTree(preorder, inorder, size, preorder_index, position+1, inorder_end, mapping);
    
            return root;
        }   
    
        TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
            int size = preorder.size();
            int preorder_index = 0;
            int inorder_start = 0;
            int inorder_end = size-1;
    
            unordered_map<int, int> mapping;
            find_index(mapping, inorder, size);
    
            TreeNode *root = buildTree(preorder, inorder, size, preorder_index, inorder_start, inorder_end, mapping);
            return root;
        }
    };