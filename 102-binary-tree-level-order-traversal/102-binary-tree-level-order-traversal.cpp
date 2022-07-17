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
    vector<vector<int>> levelOrder(TreeNode* root) {
        map<int, vector<int>> pop;
        vector<vector<int>> ans;
        
        populate(root, pop, 0);
        
        for(auto i : pop)
            ans.push_back(i.second);
        
        return ans;
    }
    
    void populate(TreeNode *root, map<int, vector<int>> &pop, int i){
        if(root == NULL)
            return;
        
        if(pop.find(i) == pop.end())
            pop[i] = {root -> val};
        
        else
            pop[i].push_back(root -> val);
        
        populate(root -> left, pop, i + 1);
        populate(root -> right, pop, i + 1);
        
        return;
    }
};