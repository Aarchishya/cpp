class Solution {
public:
    void preordertraversalhelp(TreeNode* root,vector<int>&ans)
    {
        if(root==NULL)
        {
           return;
        }
        ans.push_back(root->val);
        preordertraversalhelp(root->left,ans);
        preordertraversalhelp(root->right,ans);
       
    }
    vector<int> preorderTraversal(TreeNode* root) 
    {
        vector<int>ans;
        preordertraversalhelp(root,ans);
        return ans; 
    }
   
};
