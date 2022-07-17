/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> ans;
        
        post(ans, root);
        
        return ans;
    }
    
    void post(vector<int> &ans, Node* root){
        if(!root)
            return;
        
        // vector<Node*> temp = root -> children;
        
        for(int i = 0; i  < root -> children.size(); i++){
            post(ans, root -> children[i]);
        }
        
        ans.push_back(root -> val);
        
        return;
    }
};