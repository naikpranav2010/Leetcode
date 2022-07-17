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
    struct myfun{
        bool operator()( ListNode *l1,  ListNode *l2){
            return l1 -> val > l2 -> val;
        }
    };
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0)
            return NULL;
        
        priority_queue<ListNode*, vector<ListNode*>, myfun> heap;
        
        for(auto i : lists){
            ListNode *temp = i;
            
            while(temp != NULL)
            {
                heap.push(temp);
                temp = temp -> next;
            }
        }
        
        if(heap.empty())
            return NULL;
        
        ListNode *head = heap.top(), *temp = heap.top();
        heap.pop();
        
        while(!heap.empty())
        {
            temp -> next = heap.top();
            heap.pop();
            temp = temp -> next;
        }
        
        temp -> next = NULL;
        
        return head;
        
    }
    
//     struct Comp {
//     bool operator()(ListNode* l1,ListNode* l2)
//     {
//         return l1->val>l2->val;
//     }
//     };
//     ListNode* mergeKLists(vector<ListNode*>& lists) {
        
//         priority_queue<ListNode*,vector<ListNode*>,Comp> pq;
//         if(lists.size()==0) return NULL;
//         for(auto i:lists)
//         {
//             ListNode *temp=i;
//             while(temp!=NULL)
//             {
//                 pq.push(temp);
//                 temp=temp->next;
//             }
//         }
//         if(pq.empty()) return NULL;
//         ListNode*head =pq.top();
//         pq.pop();
//         ListNode *temp=head;
//         while(!pq.empty())
//         {
//             temp->next=pq.top();
//             pq.pop();
//             temp=temp->next;
//         }
//         temp->next=NULL;
//         return head;
//     }
};