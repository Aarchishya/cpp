#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    map<int,int>m;
    int xo=0;
    int cnt=0;
    for(auto it:arr)
    {
        xo=xo^it;
        if(xo==x)
        {
            cnt++;
        }
        if(m.find(xo^x)!=m.end())
        {
            cnt+=m[xo^x];
        }
        m[xo]+=1;
    }
    return cnt;
    //    Write your code here.
}
