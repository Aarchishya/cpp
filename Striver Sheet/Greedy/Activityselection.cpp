#include<bits/stdc++.h>
bool comp(pair<int,int>&a,pair<int,int>&b)
{
    return a.second<b.second;
}
int maximumActivities(vector<int> &start, vector<int> &finish) {
    vector<pair<int,int>>arr;
    int n=start.size();
    for(int i=0;i<n;i++)
    {
        arr.emplace_back(make_pair(start[i],finish[i]));
    }
    sort(arr.begin(),arr.end(),comp);
    int i=0;
    int count=1;
    for(int j=1;j<n;j++)
    {
        if(arr[j].first>=arr[i].second)
        {
            count++;
            j=i;
        }
            
    }
    return count;
    // Write your code here.
}
