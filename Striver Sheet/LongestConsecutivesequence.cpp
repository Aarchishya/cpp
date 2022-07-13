#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    sort(arr.begin(),arr.end());
    int start=arr[0];
    int count=1;
    int maxcount=1;
    if(n==1)
    {
        return 1;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            continue;
        }
        if(arr[i]+1==arr[i+1])
        {
            count++;
            if(count>maxcount)
            {
                maxcount=count;
            }
        }
        else
        count=1;
    }
    return maxcount;
    
    // Write your code here.
}
