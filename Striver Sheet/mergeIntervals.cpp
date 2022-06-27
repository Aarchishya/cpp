#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>>&intervals)
{
    vector<vector<int>>ans;
    vector<vector<int>>pehle;
    int n=intervals.size();
    int m=intervals[0].size();
    int y;
    if(n==0)
    {
        return ans;
    }
    sort(intervals.begin(),intervals.end());
    for(int i=0;i<n;i++)
    {
        if(ans.size()==0)
        {
            ans.push_back(intervals[i]);
        }
       else
       {
           vector<int>&v=ans.back();//gives the last element of the vector
           y=v[1];//to get the end of the interval
           if(intervals[i][0]<=y)
           {
               v[1]=max(y,intervals[i][1]);
           }
           else
           {
               ans.push_back(intervals[i]);
           }
           
       }
        
    }
    return ans;
    // Write your code here.
}
