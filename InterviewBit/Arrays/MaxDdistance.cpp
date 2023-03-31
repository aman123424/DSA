//Question Link => https://www.interviewbit.com/problems/max-distance/

#include<bits/stdc++.h>
using namespace std;

int maximumGap(const vector<int> &A) {
    
    //Method I
    // int n = A.size(), maxDist = 0, minPos = INT_MAX;
    // vector<pair<int, int>> nums;
    // for(int i=0; i<n; i++)
    // {
    //     nums.emplace_back(make_pair(A[i], i));
    // }
    // sort(nums.begin(), nums.end());
    // minPos = nums[0].second;
    // for(int i=1; i<n; i++)
    // {
    //     if(nums[i].second > minPos)
    //     {
    //         maxDist = max(maxDist, (nums[i].second - minPos));
    //     }
    //     minPos = min(minPos, nums[i].second);
    // }
    // return maxDist;
    
    
    
    //Method II 
    
    int n = A.size();
    
    vector<pair<int,int>> V;
    
    vector<int> suff_max(n);
    
    for(int i = 0; i < n; i++){
        V.push_back({A[i], i});
    }
    
    sort(V.begin(), V.end());
    
    suff_max[n - 1] = V.back().second;
    
    for(int i = n - 2; i >= 0; i--){
        suff_max[i] = max(V[i].second, suff_max[i + 1]);
    }
    
    int ans = 0;
    
    for(int i = 0; i < n - 1; i++){
        
        int l = V[i].second;
        
        int r = suff_max[i + 1];
        
        ans = max(ans, r - l);
    }
    
    return ans;
}
