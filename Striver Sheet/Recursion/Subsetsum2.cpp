#include<bits/stdc++.h>
void help(int ind,vector<int>&arr,vector<int>&ds,vector<vector<int>>&ans)
{    int n=arr.size();
    
        ans.push_back(ds);
    
    
   
    for(int i=ind;i<n;i++)
    {
        if(i>ind&&arr[i]==arr[i-1])
        continue;
            ds.push_back(arr[i]);
            help(i+1,arr,ds,ans);
            ds.pop_back();
         
      }
    
}

vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    vector<vector<int>>ans;
    vector<int>ds;
    sort(arr.begin(),arr.end());
    help(0,arr,ds,ans);
    return ans;
    // Write your code here.
}
