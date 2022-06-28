#include <bits/stdc++.h> 
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    int x;
    pair<int,int>ans;
    for(int i=0;i<n;i++)
    {
        x=abs(arr[i])-1;
        if(arr[x]<0)
        {
            ans.second=x+1;
            
        }
        else{
            arr[x]*=-1;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            ans.first=i+1;
            break;
        }
    }
    return ans;
	// Write your code here 
	
}
