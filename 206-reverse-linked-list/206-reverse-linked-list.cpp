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
    ListNode* reverseList(ListNode* head) {
        if(!head)
            return head;
        
        ListNode *prev = NULL, *curr = head, *front = head -> next;
        
        return reverse(prev, curr, front);
    }
    
    ListNode* reverse(ListNode* prev, ListNode* curr, ListNode* front){
        curr -> next = prev;
        
        if(!front)
            return curr;
            
        ListNode* temp = front -> next;
        front -> next = curr;
        
        return reverse(curr, front, temp);
    }
};