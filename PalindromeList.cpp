class Palindrome {
public:
    bool isPalindrome(ListNode* pHead) {
        // write code here
    stack<int> sk;
    ListNode *fast = pHead;
    ListNode *slow =pHead;
    int flag = 0;
    while(fast !=NULL)
    {
        sk.push(slow->val);
        slow = slow->next;
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }else{
            flag = 1;
        }
    }
    if(flag == 1){
        sk.pop();
    }
 
    while(!sk.empty())
    {
        if(sk.top() == slow->val)
        {
            sk.pop();
            slow = slow->next;
        }
        else
            return false;
    }
    return true;
    }
};
