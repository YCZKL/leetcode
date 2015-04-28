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
    int getLength(ListNode *headA){
        int r=0;
        while(headA){
            headA=headA->next;
            r++;
        }
        return r;
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA=getLength(headA);
        int lenB=getLength(headB);
        if(lenA>=lenB){
            for(int i=lenA-lenB;i>0;i--) headA=headA->next;
        }
        else{
           for(int i=lenB-lenA;i>0;i--) headB=headB->next;
        }
        while(headA&&headB&&headA!=headB){
            headA=headA->next;
            headB=headB->next;
        }
        return (headA==headB)?headA:NULL;
    }
};
