class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       ListNode* prev=NULL,*cur=head,*next;
       while(cur){
           next=cur->next;
           cur->next=prev;
           prev=cur;
           cur=next;
       }
       return prev;
    }
};
