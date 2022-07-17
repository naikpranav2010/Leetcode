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
    int findTilt(TreeNode* root) {
        if(!root)
            return 0;
        
        int left = sum(root -> left);
        int right = sum(root -> right);
        
        return abs(left - right) + findTilt(root -> left) + findTilt(root -> right);
    }
    
    int sum(TreeNode* root){
        if(!root)
            return 0;
        
        return root -> val + sum(root -> left) + sum(root -> right);
    }
};