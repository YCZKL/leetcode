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
     ListNode *removeNthFromEnd(ListNode *head, int n) {
     if(head == NULL || head->next == NULL)  
        return NULL;  
     ListNode* first=head;
     ListNode* last=head;
     while(n>0)
     {
         first=first->next;
         n--;
     }
     if(first == NULL)  
        return head->next;  
      while(first->next)
      {
          first=first->next;
          last=last->next;
      }
      last->next=last->next->next;
      return head;
    }
};
