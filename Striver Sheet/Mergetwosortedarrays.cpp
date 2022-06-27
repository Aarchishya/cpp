#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    int arrsize1=arr1.size();
    int s=m+n;
    for(int i=m;i<s;i++)
    {
        arr1[i]=arr2[s-i-1];
    }
    sort(arr1.begin(),arr1.end());
    return arr1;
	// Write your code here.
}
