class Solution {
public:
    int depth(TreeNode* root){
        if(root==NULL)
            return 0;
        int left=1,right=1;
        left +=depth(root->left);
        right +=depth(root->right);
        
        return left>right?left:right;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
       
       int left=depth(root->left);
       int right=depth(root->right);
       
       
       return abs(left-right)<=1&&isBalanced(root->left)&&isBalanced(root->right);
    }
};
