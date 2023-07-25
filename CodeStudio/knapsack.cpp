//https://www.codingninjas.com/studio/problems/0-1-knapsack_920542?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1

#include <bits/stdc++.h> 

using namespace std;

int f(vector<int> weight, vector<int> value, int ind, int maxWeight, vector<vector<int>>& dp){

	if(ind == 0){
		if(maxWeight >= weight[0]) return value[0];
		else return 0;
	}

	if(dp[ind][maxWeight] != -1) return dp[ind][maxWeight];

	int notPick = 0 + f(weight, value, ind - 1, maxWeight, dp);

	int pick = -1e8;
	if(maxWeight >= weight[ind]) pick = value[ind] +  f(weight, value, ind - 1, maxWeight - weight[ind], dp);

	return dp[ind][maxWeight] =max(pick, notPick);
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here

	vector<int> prev(maxWeight + 1, 0);

	for(int W = weight[0]; W <= maxWeight; W++) prev[W] = value[0];

	for(int ind = 1; ind < n; ind++){
		for(int W = maxWeight; W >= 0; W--){
			
			int notPick = 0 + prev[W];

			int pick = -1e8;
			if(W >= weight[ind]) pick = value[ind] +  prev[W - weight[ind]];

			prev[W] = max(pick, notPick);
		}
	}
	return prev[maxWeight];
}