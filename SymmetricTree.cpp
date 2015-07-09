class Solution {
public:
    bool check(TreeNode*p,TreeNode* q){
        if(p==NULL&&q==NULL)
            return true;
        if(p==NULL&&q!=NULL)
            return false;
        if(p!=NULL&&q==NULL)
            return false;
        if(p!=NULL&&q!=NULL){
            if(p->val==q->val)
                return check(p->left,q->right)&&check(p->right,q->left);
            else
                return false;
        }
            
    }
    bool isSymmetric(TreeNode* root) {
       if(root==NULL)
        return true;
      else
        return check(root->left,root->right);
    }
};
