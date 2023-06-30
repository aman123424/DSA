// https://www.codingninjas.com/studio/problems/house-robber_6211018

#include <bits/stdc++.h>
using namespace std;


int maxMoney(vector<int>& a, int index, vector<int>& dp) {
    if(index == 0) return a[index];
    if(index < 0) return 0;
    if(dp[index] != -1) return dp[index];
    int rob = a[index] + maxMoney(a, index - 2, dp);

    int noRob = maxMoney(a, index - 1, dp);

    return dp[index] = max(rob, noRob);
}

int houseRobber(vector<int>&a) {
    // Write your code here.

    vector<int> dp(a.size(), -1);

    int ans = maxMoney(a, a.size() - 1, dp);
    
    return ans;
}
