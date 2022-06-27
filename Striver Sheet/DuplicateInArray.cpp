#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
    int ans;
    vector<int>v(n,0);
    for(int i=0;i<n;i++)
    {
        v[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]>1)
        {
            ans=i;
        }
    }
    return ans;
	// Write your code here.
}
