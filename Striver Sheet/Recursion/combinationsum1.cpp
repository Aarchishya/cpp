void help(int ind,int s,vector<int>arr,int n,int k,vector<int>&subset,vector<vector<int>>&ans)
{
    if(ind>=n)
    {
        if(s==k)
        {
            ans.push_back(subset);
        }
        return;
    }
    s+=arr[ind];
    subset.push_back(arr[ind]);
    help(ind+1,s,arr,n,k,subset,ans);
    s-=arr[ind];
    subset.pop_back();
    help(ind+1,s,arr,n,k,subset,ans);
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    vector<int>subset;
    vector<vector<int>>ans;
    int s=0,ind=0;
    help(0,s,arr,n,k,subset,ans);
    return ans;
    // Write your code here.
}
