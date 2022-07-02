#include <bits/stdc++.h> 
typedef long long ll;
int findMajorityElement(int arr[], int n) {
    ll count=1,flag=0,maxcount=1,fl,ans;
    sort(arr,arr+n);
    fl=floor(n/2);
    if(n==1)
    {
        return arr[0];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
            if(count>maxcount)
            {
            maxcount=count;
                ans=arr[i];
            }
//             
        }
        else
        {
            count=1;
        }
    }
        
    if(maxcount<=fl)
    {
        return -1;
    }
   
    if(maxcount>fl)
    {
        return ans;
    }
    
	// Write your code here.
}
