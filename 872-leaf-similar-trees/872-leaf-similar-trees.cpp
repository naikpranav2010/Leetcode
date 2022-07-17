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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> r1, r2;
        
        populate(r1, root1);
        populate(r2, root2);
        
        // for(int i = 0; i < r1.size(); i++)
        //     cout << r1[i]<<' ';
        // cout<<endl;
        // for(int i = 0; i < r2.size(); i++)
        //     cout << r2[i]<<' ';
        
        if(r1.size() != r2.size())
            return false;
        
        for(int i =  0; i < r1.size(); i++){
            if(r1[i] != r2[i])
                return false;
        }
        
        return true;
    }
    
    void populate(vector<int> &r, TreeNode* root){
        if(!root)
            return;
        
        if(!root -> left && !root -> right){
            r.push_back(root -> val);
            return;
        }
        
        populate(r, root -> left);
        populate(r, root -> right);
        
        return;
    }
};