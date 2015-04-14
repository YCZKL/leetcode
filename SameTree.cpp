class Solution {
public:
    bool isSameTree(TreeNode *p, TreeNode *q) {
        /* if(NULL==p&&NULL==q)
             return true;
        while(p&&q)
        {
             if(p->val!=q->val)
               return false;
             isSameTree(p->left,q->left);
             isSameTree(p->right,q->right);
        }
        return true;
        */
        if (p == NULL && q == NULL)  
            return true;  
        else if (p == NULL || q == NULL)  //树可能不一样长
            return false;  
        return p->val == q->val && isSameTree(p->left, q->left)  
            && isSameTree(p->right, q->right); 
    }
};
