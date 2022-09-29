class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* node = head;
        while(node){
            node = node -> next;
            count++;
        }
        
        n %= count;
        
        if(n == 0)
            return head -> next;
        
        n = count - n - 1;
        
        node = head;
        
        for(int i = 0; i < n; i++){
            node = node -> next;
        }
        
        node -> next = node -> next -> next;
        
        return head;
    }
};