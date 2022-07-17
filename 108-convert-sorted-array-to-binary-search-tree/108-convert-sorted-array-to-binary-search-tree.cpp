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
        TreeNode* head;
        
        head = populate(nums, 0, nums.size() - 1);
        
        return head;
    }
    
    TreeNode* populate(vector<int>& nums, int i, int j){
        if(i > j) return NULL;
        
        // TreeNode* temp = new TreeNode*(nums[mid]);
        
        int mid = i + (j - i) / 2;
        // cout<<mid;
        TreeNode* temp = new TreeNode(nums[mid]);


        // temp -> val = nums[mid];
        
        temp -> left = populate(nums, i, mid - 1);
        temp -> right = populate(nums, mid + 1, j);
        
        return temp;
    }
};