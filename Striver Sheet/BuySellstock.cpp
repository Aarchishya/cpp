#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
   
    int min_so_far=prices[0],maxprofit=0,profit;
    for(int i=0;i<prices.size();i++)
    {
        if(prices[i]<min_so_far)
        {
            min_so_far=prices[i];    
        }
        profit=prices[i]-min_so_far;
        maxprofit=max(profit,maxprofit);
    }
    return maxprofit;
    // Write your code here.
}
