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
    bool hasCycle(ListNode *head) {
        ListNode *slow = head;
        
        if(!slow)
            return false;
        
        ListNode *fast = head -> next;
        
        // if(!slow || !fast)
        //     return false;
        
        while(slow != fast){
            if(fast == NULL)
                return false;
            
            slow = slow -> next;
            
            if(fast -> next != NULL) 
                fast = fast -> next -> next;
            else
                return false;
        }
        
        return true;
    }
};