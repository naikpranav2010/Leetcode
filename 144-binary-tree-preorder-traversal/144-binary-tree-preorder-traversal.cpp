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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        
        populate(ans, root);
        
        return ans;
    }
    
    void populate(vector<int> &ans, TreeNode* root){
        if(!root)
            return;
        
        ans.push_back(root -> val);
        populate(ans, root -> left);
        populate(ans, root -> right);
        
        return;
    }
};