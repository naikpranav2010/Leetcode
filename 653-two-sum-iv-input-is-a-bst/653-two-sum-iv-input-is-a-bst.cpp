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
    bool findTarget(TreeNode* root, int k) {
//         if(!root)
//             return false;
        
//         if(find(root -> left, k - root -> val) || find(root -> right, k - root -> val))
//             return true;
        
//         return findTarget(root -> left, k) || findTarget(root -> right, k);
        
        return findT(root, k, root);
    }
    
    bool findT(TreeNode* curr, int k, TreeNode* root){
        if(!curr)
            return false;
        
        if(find(root, k - curr -> val) && k != (curr -> val) * 2)
            return true;
        
        return findT(curr -> left, k, root) || findT(curr -> right, k, root);
    }
    
    bool find(TreeNode* root, int k){
        if(!root)
            return false;
        
        if(root -> val == k)
            return true;
        
        if(root -> val < k)
            return find(root -> right, k);
        
        if(root -> val > k)
            return find(root -> left, k);
        
        return false;
    }
};