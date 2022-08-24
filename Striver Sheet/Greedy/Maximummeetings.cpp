#include<bits/stdc++.h>
struct meetings
{
    int start;
    int end;
    int pos;
};
bool comp(struct meetings m1,meetings m2)
{
    if(m1.end<m2.end)return true;
    else if(m1.end>m2.end)return false;
    else if(m1.pos<m2.pos)return true;
    return false;
}
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    int n=start.size();
    vector<int>selected;
    struct meetings arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i].start=start[i];
        arr[i].end=end[i];
        arr[i].pos=i+1;
    }
    sort(arr,arr+n,comp);
    int limit=arr[0].end;
    selected.push_back(arr[0].pos);
    for(int i=1;i<n;i++)
    {
        if(arr[i].start>limit)
        {
            limit=arr[i].end;
            selected.push_back(arr[i].pos);
        }
    }
    return selected;
    
    
    // Write your code here.
}
