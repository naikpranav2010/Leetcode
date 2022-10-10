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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return toBST(nums, 0, nums.size() - 1);
    }
    
    TreeNode* toBST(vector<int>& nums, int i, int j){
        if(j < i || i < 0 || j >= nums.size())
            return NULL;
        
        
        // if(i == j){
        //     node -> val = nums[i];
        //     return node;
        // }
        
        int mid = i + ((j - i) / 2);
        
        TreeNode *node = new TreeNode(nums[mid]);
        
        // node -> val = nums[mid];
        node -> left = toBST(nums, i, mid - 1);
        node -> right = toBST(nums, mid + 1, j);
        
        return node;
    }
};