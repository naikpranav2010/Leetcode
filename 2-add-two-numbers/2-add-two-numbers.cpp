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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *node1 = l1, *node2 = l2, *ans = l1;
        int carry = 0, sum = 0;
        
        while(node1 || node2){
            if(node1)
                sum += node1 -> val;
            if(node2)
                sum += node2 -> val;
            
            sum += carry;
            // cout << sum<< endl;
                
            carry = sum / 10;
            
            if(node1)
                node1 -> val = sum % 10;
            
            if(node2)
                node2 -> val = sum % 10;
            
            if(!node1 && node2)
                ans = l2;
            
            sum = 0;
            if(node1) node1 = node1 -> next;
            if(node2) node2 = node2 -> next;
        }
        
        if(carry)
        {
            ListNode *node = new ListNode(carry);
        
            if(ans == l1)
            {
                while(l1 -> next)
                    l1 = l1 -> next;
                l1 -> next = node;
            }

            if(ans == l2)
            {
                while(l2 -> next)
                    l2 = l2 -> next;
                l2 -> next = node;
            }
        }
        
        return ans; 
    }
    
    
    
};