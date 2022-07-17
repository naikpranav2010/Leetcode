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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = 0, lenB = 0, count;
        ListNode *nodeA = headA, *nodeB = headB;
        
        while(nodeA)
        {
            lenA++;
            nodeA = nodeA -> next;
        }
        
        while(nodeB)
        {
            lenB++;
            nodeB = nodeB -> next;
        }
        
        count = abs(lenA - lenB);
        
        if(lenA > lenB){
            nodeA = headA;
            nodeB = headB;
        }
        
        else{
            nodeA = headB;
            nodeB = headA;
        }
        
        while(count){
            nodeA = nodeA -> next;
            count--;
        }
        
        while(nodeA != nodeB){
            nodeA = nodeA -> next;
            nodeB = nodeB -> next;
        }
        
        return nodeA;
    }
};