/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        if(head==NULL) return NULL;
        RandomListNode *result=NULL;
        RandomListNode *pold=head,*pnew=result,*poldnext=NULL;
        //copy the old list without copying the random pointer
        do{
          poldnext=pold->next;  
          pnew=new RandomListNode(pold->label);
          pold->next=pnew;
          pnew->next=poldnext;
          if(result == NULL){
               result = pnew;
          }
          pold = poldnext;
        }while(pold);
        //set new list's random pointer
        pold = head;
        while(pold){
            if(pold->random){
                pold->next->random=pold->random->next;
            }
            pold=pold->next->next;
        }
      // recover the old and new lists 
      pold=head;
      pnew=result;
      while(pnew->next){
          pold->next = pnew->next;
          pold = pold->next;
          pnew->next=pold->next;
          pnew=pnew->next;
      }
      pold->next = NULL;
      pnew->next = NULL;
      
      return result;
    }
};
