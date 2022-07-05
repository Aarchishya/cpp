#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    int n=arr.size();
    int fl=n/3;
    int num1=INT_MIN,num2=INT_MIN,count1=0,count2=0;
    for(int i=0;i<n;i++)
    {
        if(num1==arr[i])
        {
            count1++;
        }
        else if(num2==arr[i])
        {
            count2++;
        }
        else if(count1==0)
        {
            num1=arr[i];
            count1=1;
        }
        else if(count2==0)
        {
            num2=arr[i];
            count2=1;
        }
        else
        {
            count1--;
            count2--;
        }
    }
    vector<int>ans;
   count1=0;count2=0;
    for(int i=0;i<arr.size();i++)
    {
        if(num1==arr[i])
        {
            count1++;
        }
        if(num2==arr[i])
        {
            count2++;
        }
        
    }
    if(count1>fl)
        {
            ans.push_back(num1);
        }
    if(count2>fl)
        {
            ans.push_back(num2);
        }
    
    return ans;
    // Write your code here.

}
