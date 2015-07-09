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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
      //dummy节点的方法
        ListNode *dummy=new ListNode(0);
        ListNode *tail=dummy;
        while(l1&&l2){
            if(l1->val<l2->val) {
                tail->next=l1;
                l1=l1->next;
            }else{
               tail->next=l2;
               l2=l2->next;              
            } 
            tail=tail->next;//后移一个位置用来保存下一个节点
        }
        tail->next=l1?l1:l2;
        return dummy->next;
        
        
        /*//递归的方法
        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;
        
        ListNode *ret = NULL;
        
        if (l1->val < l2->val)
        {
            ret = l1;
            ret->next = mergeTwoLists(l1->next, l2);
        }
        else
        {
            ret = l2;
            ret->next = mergeTwoLists(l1, l2->next);
        }
        
        return ret;
        */
       
    }
};
