void help(int ind,int sum,vector<int>&ans,vector<int>&num)
{
    int n=num.size();
    if(ind==n)
    {
        ans.push_back(sum);
        return;
    }
//     sum=sum=num[ind];
    help(ind+1,sum+num[ind],ans,num);
    help(ind+1,sum,ans,num);
    
}
vector<int> subsetSum(vector<int> &num)
{
    vector<int>ans;
    int sum=0;
    help(0,sum,ans,num);
    sort(ans.begin(),ans.end());
    return ans;
    // Write your code here.
}
