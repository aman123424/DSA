//https://www.codingninjas.com/studio/problems/frog-jump_3621012?leftPanelTab=1

#include <bits/stdc++.h>
using namespace std;

int f(int ind, vector<int>& heights, vector<int>& dp){
    if(ind == 0){
        return 0;
    }

    if(dp[ind] != -1) return dp[ind];

    int left = INT_MAX;
    int right = INT_MAX;

    left = f(ind - 1, heights, dp) + abs(heights[ind] - heights[ind - 1]);    

    if(ind >= 2){
        right = f(ind - 2, heights, dp) + abs(heights[ind] - heights[ind - 2]);
    }

    return dp[ind] = min(left, right);
}

int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    int curr = 0;
    int prev = 0;
    int prev2 = 0;

    for(int i = 1; i < n; i++){

        int left = prev + abs(heights[i] - heights[i - 1]);
        int right = INT_MAX;
        if(i > 1){
            right = prev2 + abs(heights[i] - heights[i - 2]);
        }



        curr = min(left, right);
        prev2 = prev;
        prev = curr;
    }

    return prev;
}