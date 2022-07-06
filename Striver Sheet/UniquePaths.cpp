#include <bits/stdc++.h> 
int countPath(int row,int col,int m,int n)
{
//     int row=0,col=0;
    if(row>=m||col>=n)
    {
        return 0;
    }
    if(row==m-1&&col==n-1)
    {
        return 1;
    }
    else
    {
        return countPath(row+1,col,m,n)+countPath(row,col+1,m,n);
    }
}
int uniquePaths(int m, int n) {
    int row=0,col=0,ans;
    ans=countPath(row,col,m,n);
    return ans;
	// Write your code here.
}



#2


#include <bits/stdc++.h> 
int countPath(int row,int col,int m,int n,vector<vector<int>>&dp)
{
//     int row=0,col=0;
    if(row>=m||col>=n) return 0;
    if(row==m-1&&col==n-1) return 1;
    if(dp[row][col]!=-1) return dp[row][col];
    else return dp[row][col]=countPath(row+1,col,m,n,dp)+countPath(row,col+1,m,n,dp);
}
int uniquePaths(int m, int n) {
    int row=0,col=0,ans;
    vector<vector<int>>dp(m,vector<int>(n,-1));
    ans=countPath(row,col,m,n,dp);
    return ans;
	// Write your code here.
}



#3



#include <bits/stdc++.h> 

int uniquePaths(int m, int n) {
    int N=n+m-2;
    int r=m-1;
    double res=1;
    for(int i=1;i<=r;i++)
    {
        res=res*(N-r+i)/i;
    }
    return (int)res;
	// Write your code here.
}
