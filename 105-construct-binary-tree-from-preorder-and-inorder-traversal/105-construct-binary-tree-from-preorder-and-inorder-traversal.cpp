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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {   
        int i = 0;
        
        TreeNode* root = pop(preorder, inorder, i, 0, inorder.size() - 1);
        
        return root;
    }
    
    TreeNode* pop(vector<int>& preorder, vector<int>& inorder, int &i, int first, int end){
        if(end < first || end < 0 || first >= inorder.size())
            return NULL;
        
        TreeNode* root = new TreeNode();
        root -> val = preorder[i++];
        
        // if(first == end)
            // return root;
        
        int mid;
        
        for(int j = first; j <= end; j++){
            if(inorder[j] == root -> val){
                mid = j;
                break;
            }
        }
        
        
        
        root -> left = pop(preorder, inorder, i, first, mid - 1);
        root -> right = pop(preorder, inorder, i, mid + 1, end);
        
        return root;
    }
};