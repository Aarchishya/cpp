#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    int flag=0;
    for(int i=0;i<m;i++)
    {
       if(target>=mat[i][0]&&target<=mat[i][n-1])
       {
           for(int j=0;j<n;j++)
           {
               if(target==mat[i][j])
               {
                   flag=1;
               }
           }
       }
    }
    if(flag==0)
    {
        return false;
    }
    else
        return true;
    // Write your code here.
}
