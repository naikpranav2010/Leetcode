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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int i = postorder.size() - 1;
        
        TreeNode* root = pop(postorder, inorder, i, 0, inorder.size() - 1);
        
        return root;
    }
    
    TreeNode* pop(vector<int>& postorder, vector<int>& inorder, int &i, int first, int end){
        if(end < first || end < 0 || first >= inorder.size())
            return NULL;
        
        TreeNode* root = new TreeNode();
        root -> val = postorder[i--];
        
        // if(first == end)
            // return root;
        
        int mid;
        
        for(int j = first; j <= end; j++){
            if(inorder[j] == root -> val){
                mid = j;
                break;
            }
        }
        
        
        root -> right = pop(postorder, inorder, i, mid + 1, end);
        root -> left = pop(postorder, inorder, i, first, mid - 1);
        // root -> right = pop(postorder, inorder, i, mid + 1, end);
        
        return root;
    }
};