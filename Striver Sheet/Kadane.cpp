#include <bits/stdc++.h> 
typedef long long ll;
long long maxSubarraySum(int arr[], int n)
{
    ll maxi=arr[0],sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum<0)
        {
            sum=0;
        }
        maxi=max(sum,maxi);
    }
    return maxi;
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
}
