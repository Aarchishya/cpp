#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    vector<int>ans0;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[i]+arr[j]==s)
            {
                ans0.push_back(arr[i]);
                ans0.push_back(arr[j]);
                ans.push_back(ans0);
                ans0.clear();
                
            }
            
        }
        
    }
    return ans;
   // Write your code here.
}


#2


/*

    Time Complexity: O(N^2)
    Space COmplexity: O(N)

    Where 'N' is the size of the array.
    
*/

#include <map>

vector<vector<int>> pairSum(vector<int> &arr, int s){
    int n = arr.size();

    // Map to store frequency of elements.
    map<int, int> hash;

    // This will store the result.
    vector<vector<int>> ans;

    for (int ele : arr)
    {
        int count = hash[s - ele];

        vector<int> pair(2);
        pair[0] = ele;
        pair[1] = s - ele;

        while (count--)
        {
            ans.push_back(pair);
        }

        hash[ele] += 1;
    }

    // This will store the final result.
    vector<vector<int>> res(ans.size(), vector<int>(2, 0));

    // Sorting the 'ans' arrays element.
    for (int i = 0; i < ans.size(); i++)
    {
        int a = ans[i][0], b = ans[i][1];
        res[i][0] = min(a, b);
        res[i][1] = max(a, b);
    }

    // Finally sorting each pair in 'res'.
    sort(res.begin(), res.end());
    return res;
}
