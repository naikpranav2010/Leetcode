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
    bool compare(TreeNode* tree1, TreeNode* tree2){
        if(!tree1 && !tree2)
            return true;
        
        if(!tree1 || !tree2)
            return false;
        
        if(tree1 -> val != tree2 -> val)
            return false;
        
        return compare(tree1 -> left, tree2 -> left) && compare(tree1 -> right, tree2 -> right);
    }
    
    void findnode(TreeNode* root, TreeNode* node, vector<TreeNode*> &nodes){
        if(!root || !node)
            return;
        
        if(root -> val == node -> val)
            nodes.push_back(root);
        
        findnode(root -> left, node, nodes);
        findnode(root -> right, node, nodes);
        
        return;
    }
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        vector<TreeNode*> nodes;
        findnode(root, subRoot, nodes);
        
        for(int i = 0; i < nodes.size(); i++){
            if(compare(nodes[i], subRoot))
                return true;
        }
        
        return false;
    }
};