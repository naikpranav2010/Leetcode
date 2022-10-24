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
    vector<int> rightSideView(TreeNode* root) {
        if(!root)
            return {};
        
        queue<TreeNode*> q1, q2;
        vector<int> ans;
        
        q1.push(root);
        
        while(!q1.empty() || !q2.empty()){
            if(q2.empty()){
                while(!q1.empty()){
                    TreeNode* temp = q1.front();
                    if(q1.size() == 1) ans.push_back(temp -> val);
                    q1.pop();
                    if(temp -> left != NULL) q2.push(temp -> left);
                    if(temp -> right != NULL) q2.push(temp -> right);
                    
                } 
            }
            
            if(q1.empty()){
                while(!q2.empty()){
                    TreeNode* temp = q2.front();
                    if(q2.size() == 1) ans.push_back(temp -> val);
                    q2.pop();
                    if(temp -> left != NULL) q1.push(temp -> left);
                    if(temp -> right != NULL) q1.push(temp -> right);
                }
            }
        }
        
        return ans;
    }
};