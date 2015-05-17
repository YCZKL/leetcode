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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        /*ListNode* result = new ListNode(0);  
        ListNode* ptr = result; 
        int flag=0;
        while(l1 != NULL || l2 != NULL){
          int val1=0;
          if(l1!=NULL){
              val1=l1->val;
              l1=l1->next;
          }
          
          int val2=0;
          if(l2!=NULL){
             val2=l2->val;
             l2=l2->next;
          }
          int temp=val1+val2+flag;
          ptr->next = new ListNode(temp % 10);  
          flag= temp / 10;  
          ptr = ptr->next;  
        }
        if(flag==1){
           ptr->next = new ListNode(1);  
        }
        
       return result->next; 
       */
    ListNode preHead(0), *p = &preHead;
    int flag = 0;
    while (l1 || l2 || flag) {
        int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + flag;
        flag = sum / 10;
        p->next = new ListNode(sum % 10);
        p = p->next;
        l1 = l1 ? l1->next : l1;
        l2 = l2 ? l2->next : l2;
    }
    return preHead.next;
    }
};
