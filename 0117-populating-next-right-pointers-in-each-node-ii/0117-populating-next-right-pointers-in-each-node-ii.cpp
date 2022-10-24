/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root)
            return NULL;
        
        queue<Node*> q1, q2;
        
        q1.push(root);
        
        while(!q1.empty() || !q2.empty()){
            if(q2.empty()){
                while(!q1.empty()){
                    Node* temp = q1.front();
                    q1.pop();
                    if(temp -> left != NULL) q2.push(temp -> left);
                    if(temp -> right != NULL) q2.push(temp -> right);
                    if(!q1.empty()) temp -> next = q1.front();
                    else temp -> next = NULL;
                } 
            }
            
            if(q1.empty()){
                while(!q2.empty()){
                    Node* temp = q2.front();
                    q2.pop();
                    if(temp -> left != NULL) q1.push(temp -> left);
                    if(temp -> right != NULL) q1.push(temp -> right);
                    if(!q2.empty()) temp -> next = q2.front();
                    else temp -> next = NULL;
                }
            }
        }
        
        return root;
    }
};