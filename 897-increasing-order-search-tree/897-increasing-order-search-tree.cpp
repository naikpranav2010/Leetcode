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
    TreeNode* increasingBST(TreeNode* root) {
        if(!root)
            return NULL;
        
//         increasingBST(root -> left);
//         // nodes.push(root);
//         root -> right = increasingBST(root -> right);
        
//         // return;
        
//         return root;
        queue<TreeNode*> nodes;
        TreeNode *head, *temp;
        
        populate(nodes, root);
        // while(!nodes.empty()){
        //     cout<<nodes.front() -> val;
        //      nodes.pop();
        //  }
        
        head = nodes.front();
        nodes.pop();
        // head -> left = NULL;
        temp = head;
        
        while(!nodes.empty()){
            temp -> right = nodes.front();
            nodes.pop();
            temp -> left = NULL;
            temp = temp -> right;
            // nodes.pop();
        }
        
        temp -> left = NULL;
        temp -> right = NULL;
        
        return head;
    }
    
    void populate(queue<TreeNode*> &nodes, TreeNode* root){
        if(!root)
            return;
        
        populate(nodes, root -> left);
        nodes.push(root);
        populate(nodes, root -> right);
        
        return;
    }
};