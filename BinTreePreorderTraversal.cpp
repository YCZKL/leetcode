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
    void preorder(TreeNode* root,vector<int> &v){
        if (root == NULL)  
            return ;  
        v.push_back(root->val);  
        preorder(root->left,v);  
        preorder(root->right,v); 
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        preorder(root,v);
        return v;
        
    }
};
