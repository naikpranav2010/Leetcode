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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        stack<TreeNode*> sleft, sright;
        sleft.push(root);
        vector<vector<int>> ans;
        
        if(!root)
            return ans;
        
        while(!sleft.empty() || !sright.empty()){
            if(!sleft.empty()){
                vector<int> temp;
                while(!sleft.empty()){
                    TreeNode* node = sleft.top();
                    sleft.pop();
                    temp.push_back(node -> val);
                    if(node -> left)
                        sright.push(node -> left);
                    if(node -> right)
                        sright.push(node -> right);
                }
                ans.push_back(temp);
            }
            
            else{
                vector<int> temp;
                while(!sright.empty()){
                    TreeNode* node = sright.top();
                    sright.pop();
                    temp.push_back(node -> val);
                    if(node -> right)
                        sleft.push(node -> right);
                    if(node -> left)
                        sleft.push(node -> left);
                }
                ans.push_back(temp);
            }
        }
        
        return ans;
    }
};