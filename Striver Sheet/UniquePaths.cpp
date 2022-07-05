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
