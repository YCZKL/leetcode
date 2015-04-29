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
    ListNode* partition(ListNode* head, int x) {
      ListNode *h1=new ListNode(0);
      ListNode *h2=new ListNode(0);
       ListNode *t1=h1,*t2=h2;
        while(head){
            if(head->val<x)
                t1=t1->next=head;
            else 
               t2=t2->next=head;
        head=head->next;
        }
         t2->next=NULL;
         t1->next=h2->next;
       return h1->next; 
    }
};
