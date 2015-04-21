/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
       vector<int> v;
  void preorder(TreeNode *root)  
       {  
        if (root == NULL)  
            return;  
        v.push_back(root->val);  
        preorder(root->left);  
        preorder(root->right);  
       }  
    vector<int> preorderTraversal(TreeNode *root) {
       
        preorder(root);
        return v;
        
    }
};
