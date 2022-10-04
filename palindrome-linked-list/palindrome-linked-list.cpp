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
    bool compare(ListNode* list1, ListNode* list2){
        if(!list1 && !list2)
            return true;
        
        if(!list1 || !list2)
            return false;
        
        if(list1 -> val != list2 -> val)
            return false;
        
        else
            return compare(list1 -> next, list2 -> next);
    }
    
    ListNode* reverse(ListNode* head) {
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
    
    bool isPalindrome(ListNode* head) {
        int len = 0;
        ListNode* node = head;
        
        while(node != NULL){
            node = node -> next;
            len++;
        }
        
        if(len == 0 || len == 1)
            return true;
        
        node = head;
        
        for(int i = 1; i < len / 2; i++){
            node = node -> next;
        }
        
        ListNode* list2 = node -> next;
        node -> next = NULL;
        node = reverse(head);
        
        if(len % 2)
            return compare(node, list2 -> next);
        
        else
            return compare(node, list2);

        
        return true;
    }
};