#include<bits/stdc++.h> 
void help(int i,int target,vector<int>&arr,vector<int>&ds,vector<vector<int>>&ans)
    {
     int n=arr.size();
            if(target==0)
            {
                ans.push_back(ds);
                return;  
            }
          
        if(i>=n)
        {
            return;
        }
    for(int j=i;j<arr.size();j++)
    {
        if(j>i&&arr[j-1]==arr[j])
        {
            continue;
        }
    
         if(target>=arr[j])
        {
        ds.push_back(arr[j]);
        help(j+1,target-arr[j],arr,ds,ans);               
        ds.pop_back();
//          help(i+1,target,arr,ds,ans);
        }
    }
    }

vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
    sort(arr.begin(),arr.end());
     vector<int>ds;
     vector<vector<int>>ans;
     help(0,target,arr,ds,ans);
//     sort(ans.begin(),ans.end());
       return ans;
	// Write your code here.
}
