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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string str;
        
//         str += to_string(root -> val);
//         str += "->";
        
        pop(ans, str, root);
        
        return ans;
    }
    
    void pop(vector<string> &ans, string str, TreeNode *root){
        if(!root)
            return;
        
        if(!root -> left && !root -> right){
            str += to_string(root -> val);
            ans.push_back(str);
            return;
        }
        
        str += to_string(root -> val);
        str += "->";
        
        pop(ans, str, root -> left);
        pop(ans, str, root -> right);
        
        return;
    }
};