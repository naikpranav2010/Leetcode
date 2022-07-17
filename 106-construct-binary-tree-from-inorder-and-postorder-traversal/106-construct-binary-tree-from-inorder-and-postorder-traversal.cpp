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
        
        return pop(inorder, postorder, i, 0, postorder.size() - 1);
    }
    
    TreeNode* pop(vector<int>& inorder, vector<int>& postorder, int &i, int first, int last){
        if(last < first)
            return NULL;
        
        TreeNode* root = new TreeNode(postorder[i--]);
        
        int mid;
        
        for(int j = first; j <= last; j++){
            if(inorder[j] == root -> val){
                mid = j;
                break;
            }
        }
        
        root -> right = pop(inorder, postorder, i, mid + 1, last);
        root -> left = pop(inorder, postorder, i, first, mid - 1);
        
        return root;
    }
};