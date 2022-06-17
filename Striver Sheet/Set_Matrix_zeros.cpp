#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	int m=matrix.size();// no of the rows.
    int n=matrix[0].size();//no of the coloumns.
    int x=1,y=1;
    for(int j=0;j<n;j++)//checking for marker row no 1
    {
        if(matrix[0][j]==0)
        {
            x=0;
        }
    }
    for(int i=0;i<m;i++)//checking for marker coloumn no 1
    {
        if(matrix[i][0]==0)
        {
            y=0;
        }
    }
    for(int i=1;i<m;i++)//checking for the zeroes in n-1*n-1                               matrix and marking the markers 0 for                              the positions
    {
        for(int j=1;j<n;j++)
        {
            if(matrix[i][j]==0)
            {
                matrix[0][j]=0;
                matrix[i][0]=0;
            }
        }
    }
    for(int j=1;j<n;j++)//setting the whole marked coloumn 0
    {
        if(matrix[0][j]==0)
        {
            for(int i=1;i<m;i++)
            {
                matrix[i][j]=0;
            }
        }
    }
    for(int i=1;i<m;i++)//setting the whole marked row 0
    {
        if(matrix[i][0]==0)
        {
            for(int j=1;j<n;j++)
            {
                matrix[i][j]=0;
            }
        }
    }
    if(x==0)// for original zeros in the first row 
    {
        for(int i=0;i<n;i++)
        {
            matrix[0][i]=0;
        }
    }
    if(y==0)//for original zeros in the first coloumn
    {
        for(int i=0;i<m;i++)
        {
            matrix[i][0]=0;
        }
    }
}
