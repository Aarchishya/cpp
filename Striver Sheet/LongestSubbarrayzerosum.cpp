#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {
    int maxlenght=0;
    int sum=0;
    for(int i=0;i<arr.size();i++)
    {
        sum=arr[i];
        
        for(int j=i+1;j<arr.size();j++)
        {
           
            sum=sum+arr[j];
            if(sum==0&&maxlenght<=j-i+1)
            {
                maxlenght=j-i+1;
            }
        }
    }
    if(maxlenght==0)
    {
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0)
            {
                maxlenght=1;
            }
        }
    }
    return maxlenght;

  // Write your code here

}
