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
    vector<double> ans;
    queue<TreeNode*> a;
    queue<TreeNode*> b;
    
    vector<double> averageOfLevels(TreeNode* root) {
        a.push(root);
        
        
        
        while(!a.empty() || !b.empty()){
            double sum = 0;
            int count = 0;
            
            if(b.empty()){
                while(!a.empty()){
                    if(a.front() == NULL){
                        a.pop();
                        continue;
                    }
                        
                    sum += a.front() -> val;
                    count++;
                    b.push(a.front() -> left);
                    b.push(a.front() -> right);
                    a.pop();
                }

                ans.push_back(sum / count);
            }

            else{
                while(!b.empty()){
                    if(!b.front()){
                        b.pop();
                        continue;
                    }
                    
                    sum += b.front() -> val;
                    count++;
                    a.push(b.front() -> left);
                    a.push(b.front() -> right);
                    b.pop();
                }

                ans.push_back(sum / count);
            }
        }   
        
        ans.pop_back();
        
        return ans;
    }
    
//     void pop(TreeNode* root){
//         double sum = 0;
//         int count = 0;
        
//         if(b.empty()){
//             while(!a.empty()){
//                 sum += a.front() -> val;
//                 count++;
//                 b.push(a.front() -> left);
//                 b.push(a.front() -> right);
//                 a.pop();
//             }
            
//             ans.push_back(sum / count);
//         }
        
//         else{
//             while(!b.empty()){
//                 sum += b.front() -> val;
//                 count++;
//                 a.push(b.front() -> left);
//                 a.push(b.front() -> right);
//                 b.pop();
//             }
            
//             ans.push_back(sum / count);
//         }
        
        
        
//         return;
//     }
};