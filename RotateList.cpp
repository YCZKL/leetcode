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
    ListNode *rotateRight(ListNode *head, int k) {
       /*方法一： //和那个Swap Nodes in Pairs类似。要把握好几个边界条件。
        if(NULL==head||NULL==head->next)
          return head;
        int length=0;
        ListNode *first=head;
        while(first)
        {
            length++;
            first=first->next;
        }
        k=k%length;
        if(k==length||k==0)
         return head;
        first=head;
        ListNode *second=head;
        while(k>0)
        {
            first=first->next;
            k--;
        }
        while(first->next)
        {
            first=first->next;
            second=second->next;
        }
       ListNode *temp=second->next;
       first->next=head;
       second->next=NULL;
       head=temp;
       return head;
       */
       //方法二：相比于方法一减少了length-k次遍历。
       if(NULL==head||NULL==head->next)
          return head;
        int length=0;
        ListNode *first=head;
        ListNode *tail=head;
        while(first)
        {
            length++;
            tail=first;
            first=first->next;
        }
        k=k%length;
        if(k==length||k==0)
            return head; 
        first=head;
        for(int i=0;i<length-k-1;i++)
        {
          first=first->next;  
        }
        tail->next=head;
        head=first->next;
        first->next=NULL;
        return head;
    }
};
