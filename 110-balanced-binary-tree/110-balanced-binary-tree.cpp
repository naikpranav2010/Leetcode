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
    bool isBalanced(TreeNode* root) {
        if(root == NULL)
            return true;
        
//         cout<<height(root -> right)<<' ';
//         cout<<height(root)<<' ';
        
        if(abs(height(root -> left) - height(root -> right)) > 1)
            return false;
        
        return isBalanced(root -> left) && isBalanced(root -> right);
    }
    
    int height(TreeNode* head){
        if(head == NULL)
            return 0;
        
        // cout<<height(root -> left)<<' ';
        // cout<<height(root -> right)<<' ';
        
        return 1 + max(height(head -> left), height(head -> right));
    }
};