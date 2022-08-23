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

#2


#include<bits/stdc++.h>

int maximumActivities(vector<int> &start, vector<int> &finish) {
    vector<pair<int,int>> meetings ;
       for(int i=0 ; i<start.size() ; i++)
           meetings.push_back({finish[i],start[i]}) ;
           sort(meetings.begin(), meetings.end()) ;
           
           int act=1 ;
           int ending=meetings[0].first ;
           for(int i=1 ; i<start.size() ; i++){
               if(meetings[i].second>=ending){
                   act++ ;
                   ending=meetings[i].first ;
               }
           }
           
       return act ;
    // Write your code here.
}
