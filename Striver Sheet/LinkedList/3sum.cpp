#include <bits/stdc++.h> 
vector<vector<int>>twosum(int arr[],int si,int ei,int target)
{
      int left=si, right=ei, sum=0;
    vector<vector<int>>res;
    while(left<right)
    {
        if(left!=si&&arr[left]==arr[left-1])
        {
            left++;
            continue;
        }
        int sum=arr[left]+arr[right];
        if(sum==target)
        {
            vector<int>subres;
            subres.push_back(arr[left]);
            subres.push_back(arr[right]);
            res.push_back(subres);
            left++;
            right--;
        }
        else if(sum>target)
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    return res;
}
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	vector<vector<int>>ans;
    int target,val1;
    if(n<3)
    {
        return ans;
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<=n-3;i++)
    {
        if(i!=0&&arr[i]==arr[i-1])
        {
            continue;
        }
        val1=arr[i];
        target=K-val1;
        vector<vector<int>>ans=twosum(arr,i+1,n-1,target); 
    }
    for(vector<int>ne:ans)
    {
        ne.push_back(val1);
        ans.push_back(ne);
    }
    return ans;
    // Write your code here.
}
