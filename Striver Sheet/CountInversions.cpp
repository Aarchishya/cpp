#include <bits/stdc++.h> 
typedef long long ll;
long long merge(long long arr[],int left,int mid,int right,long long temp[])
{
    ll inv_count=0;
    int i = left;
    int j = mid;
    int k = left;
    while(i<=mid-1&&j<=right)
    {
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            inv_count = inv_count + (mid - i);
        }
    }
    while(i <= mid - 1)
        temp[k++] = arr[i++];

    while(j <= right)
        temp[k++] = arr[j++];

    for(i = left ; i <= right ; i++)
        arr[i] = temp[i];
    
    return inv_count;
    
}
long long solve(long long arr[],int left,int right,long long temp[])
{
    ll inv=0;
    if(left==right)
    {
        return 0;
    }
    int mid=(left+right)/2;
    inv+=solve(arr,left,mid,temp);
    inv+=solve(arr,mid+1,right,temp);
    inv+=merge(arr,left,mid+1,right,temp);
    return inv;
    
}
long long getInversions(long long *arr, int n){
    ll inv=0;
    ll temp[n];
    if(n==0)
    return 0;
    return solve(arr,0,n-1,temp);  
    // Write your code here.
}
