#include <bits/stdc++.h> 
typedef long long ll;
int modularExponentiation(int x, int n, int m) {
    ll ans,ans1;
    ans=pow(x,n);
    ans1=ans%m;
    return ans1;
	// Write your code here.
}
