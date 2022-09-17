#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void getleft(TreeNode<int>*root,vector<int>&ans,int level)
{
    if(root==NULL)
    {
        return;
    }
    if(ans.size()==level)
    {
        ans.push_back(root->data);
    }
    getleft(root->left,ans,level+1);
    getleft(root->right,ans,level+1);
}
vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int>ans;
    getleft(root,ans,0);
    return ans;
    //    Write your code here
}
