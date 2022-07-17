/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;
        bool flag = true;
        
        // cout<< "in" << endl;
        while(fast)
        {
            // if(!(slow -> next))
            //     break;
            
            // cout<< "in" << endl;
            
            if(!(fast -> next) || !(fast -> next -> next))
            {
                // cout<< "in" << endl;
                flag = false;
                break;
            }
            
            
            
            // cout<< "in" << endl;
            
            slow = slow -> next;
            fast = fast -> next -> next;
            
            if(slow == fast)
                break;
        }
        
        if(!flag)
            return NULL;
        
        slow = head;
        
        while(slow != fast)
        {
            fast = fast -> next;
            slow = slow -> next;
        }
        
        return slow;
    }  
};