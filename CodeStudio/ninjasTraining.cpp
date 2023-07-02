// https://www.codingninjas.com/studio/problems/ninja-s-training_3621003?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1

#include "bits/stdc++.h"
using namespace std;

int ninja(int day, int last, vector<vector<int>>& points, vector<vector<int>>& dp){
    if(day == 0){
        int maxi = 0;
        for(int task = 0; task < 3; task++){
            if(task != last){
                maxi = max(maxi ,points[day][task]);
            }
        }
        return maxi;
    }

    if(dp[day][last] != -1) return dp[day][last];

    int maxi = 0;

    for(int task = 0; task < 3; task++){
        if(task != last){
            int pointsEarned = points[day][task] + ninja(day - 1, task, points, dp);
            maxi = max(maxi, pointsEarned);
        }
    }

    return dp[day][last] = maxi;
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    vector<vector<int>> dp(n, vector<int>(4, -1));

    dp[0][0] = max(points[0][1], points[0][2]);
    dp[0][1] = max(points[0][0], points[0][2]);
    dp[0][2] = max(points[0][0], points[0][1]);
    dp[0][3] = max(points[0][1], max(points[0][2], points[0][0]));

    for(int day = 1; day < n; day++){
        for(int last = 0; last < 4; last++){
            dp[day][last] = 0;

            for(int task = 0; task < 3; task++){
               if(task != last){
                    int point = points[day][task] + dp[day - 1][task];
                    dp[day][last] = max(dp[day][last], point);
               }
            }
        }
    }

    return dp[n - 1][3];
}