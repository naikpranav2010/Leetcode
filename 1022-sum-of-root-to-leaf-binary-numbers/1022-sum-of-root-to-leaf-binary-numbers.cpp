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
    int sumRootToLeaf(TreeNode* root) {
        int sum = 0;
        
        createnum(root, 0, sum);
        
        return sum;
    }
    
    void createnum(TreeNode *root, int num, int &sum){
        if(!root){
            // sum += num;
            return;
        } 
        
        if(!(root -> left) && !(root -> right)){
            num = num *2 + root -> val;
            // sum += (num << 1 + root -> val);
            sum += num;
            // cout<<"yes";
            return;
        }
        cout<<num;
             
        
        num = num * 2 + root -> val;
        cout<<root -> val;
        createnum(root -> left, num, sum);
        createnum(root -> right, num, sum);
        
        return;
    }
};