/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)
            return NULL;
        
        ListNode *temp = NULL, *node = head, *ans = NULL;
        bool flag = false;
        
        while(node){
            if(node -> next && node -> val == node -> next -> val)
            {
                node = node -> next;
                flag = true;
                continue;
            }
            
            if(flag){
                node = node -> next;
                flag = false;
                continue;
            }
            
            if(!ans)
            {
                ans = node;
                temp = node;
                
            }
            
            else
            {
                temp -> next = node;
                temp = temp -> next;
            }
            
            node = node -> next;
            
//             flag = node;
        }
        
        if(temp) temp -> next = NULL;
        
        return ans;
    }
};