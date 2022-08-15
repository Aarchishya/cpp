#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    long long int res=0;
    int left=0,right=n-1;
    long long int leftmax=0,rightmax=0;
    while(left<=right)
    {
        if(arr[left]<=arr[right])
        {
            if(arr[left]>=leftmax)
            {
                leftmax=arr[left];
            }
            else
            res+=leftmax-arr[left];
            left++;
        }
        else
        {
            if(arr[right]>=rightmax)
            {
                 rightmax=arr[right];
            }
            else
            res+=rightmax-arr[right];
            right--;
        }
    }
    return res;
    // Write your code here.
}
