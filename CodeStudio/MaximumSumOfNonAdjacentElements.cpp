// https://www.codingninjas.com/studio/problems/maximum-sum-of-non-adjacent-elements_843261

#include <bits/stdc++.h> 
using namespace std;


int f(vector<int>& nums, int index, vector<int>& dp){
    if(index == 0) return nums[index];
    if(index < 0) return 0;
    if(dp[index] != -1) return dp[index];

    int pick = nums[index] + f(nums, index - 2, dp);
    int notPick = f(nums, index - 1, dp);

    return dp[index] = max(pick, notPick);
}
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.

    int n = nums.size();

    vector<int> dp(n,-1);

    int ans = f(nums, n - 1, dp);

    return ans;
}