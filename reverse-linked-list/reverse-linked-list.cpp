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
            return NULL;
        
        ListNode *node = head, *prev_node = NULL, *next_node = head -> next;
        
        while(next_node != NULL){
            node -> next = prev_node;
            prev_node = node;
            node = next_node;
            next_node = next_node -> next;
        }
        
        node -> next = prev_node;
        
        return node;
    }
};