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
    bool isValidBST(TreeNode* root) {
        vector<int> val;
        inorder(root, val);
        
        for(int i = 1; i < val.size(); i++){
            if(val[i] <= val[i - 1])
                return false;
        }
        
        return true;
    }
    
    void inorder(TreeNode* root, vector<int> &val){
        if(root == NULL)
            return;
        
        inorder(root -> left, val);
        val.push_back(root -> val);
        inorder(root -> right, val);
        
        return;
    }
};