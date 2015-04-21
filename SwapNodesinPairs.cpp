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
    ListNode *swapPairs(ListNode *head) {
        if(NULL==head||NULL==head->next)
         return head;
        ListNode *prev=head;  
        ListNode *p1=head;  
        ListNode *p2;
        do{  
            p2=p1->next;  
            p1->next=p2->next;  
            p2->next=p1;  
            if(prev!=head)  
                prev->next=p2;  
            else  
                head=p2;  
            prev=p1;  
            p1=p1->next;  
        }while(p1!=NULL && p1->next!=NULL); 
        return head;  
        
    }
};
