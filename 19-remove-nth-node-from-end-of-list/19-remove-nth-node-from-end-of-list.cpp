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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* node = head;
        int count = 0;
        
        while(node){
            node = node -> next;
            count++;
        }
        
        node = head;
        count -= n;
        
        if(!count)
            return head -> next;
        
        while(count > 1){
            node = node -> next;
            count--;
        }
        
        node -> next = node -> next -> next;
        
        return head;
    }
};