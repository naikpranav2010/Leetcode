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
    void populate(map<int, vector<int>> &omap, TreeNode* root, int i){
        if(!root)
            return;
        
        omap[i].push_back(root -> val);
        populate(omap, root -> left, i + 1);
        populate(omap, root -> right, i + 1);

    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        map<int, vector<int>> omap;
        vector<vector<int>> ans;
        
        populate(omap, root, 0);
        
        for(int i = 0; i < omap.size(); i++){
            ans.push_back(omap[i]);
        }
        
        return ans;
    }
};