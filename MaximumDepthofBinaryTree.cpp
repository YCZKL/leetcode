class Solution {
public:
    int maxDepth(TreeNode *root) 
    {
        if(NULL==root)
         return 0;
   int ldepth=maxDepth(root->left);
   int rdepth=maxDepth(root->right);
   return 1+(ldepth>rdepth?ldepth:rdepth);
    }
};
