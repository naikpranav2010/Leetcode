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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        map<int, vector<int>> levels;
        vector<vector<int>> ans;
        
        pop(root, levels, 0);
        
        for(auto i : levels){
            ans.push_back(i.second);
        }
        
        reverse(ans.begin(), ans.end());
            
        return ans;
    }
    
    void pop(TreeNode* root, map<int, vector<int>> &levels, int i){
        if(root == NULL)
            return;
        
        levels[i].push_back(root -> val);
        
        pop(root -> left, levels, i + 1);
        pop(root -> right, levels, i + 1);

        return;
    }
};