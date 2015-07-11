class Solution {
private:
    vector<vector<int>> result;
public:
    void dfs(TreeNode* root,int sum,int curSum, vector<int> v){
        if(root==NULL)
            return;
        if(root->left==NULL&&root->right==NULL){
            if(curSum+root->val==sum){
                v.push_back(root->val);
                result.push_back(v);
            }
           return;
        }
       v.push_back(root->val);
       dfs(root->left,sum,curSum+root->val,v);
       dfs(root->right,sum,curSum+root->val,v);
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        result.clear();
        vector<int> a; 
        dfs(root, sum, 0, a);
        return result;
    }
};
