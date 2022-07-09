#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    vector<int>ans0;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[i]+arr[j]==s)
            {
                ans0.push_back(arr[i]);
                ans0.push_back(arr[j]);
                ans.push_back(ans0);
                ans0.clear();
                
            }
            
        }
        
    }
    return ans;
   // Write your code here.
}
