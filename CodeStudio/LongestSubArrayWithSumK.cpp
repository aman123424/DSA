//https://www.codingninjas.com/studio/problems/longest-subarray-with-sum-k_6682399?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=1

#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here

    // int ans = 0;

    // for(int i = 0; i < a.size(); i++){
    //     int count = 0;
    //     int sum = 0;

    //     for (int j = i; j < a.size(); j++){
    //         sum += a[j];
    //         count++;

    //         // cout<<"before k loop: "<<count<<"Iteration no: "<<i<<endl;
    //         if(sum == k){
    //             for(int k = j + 1; k < a.size(); k++){
    //                 if(a[k] == 0){
    //                     count++;
    //                     // cout<<"In the k loop: "<<count<<endl;
    //                 }else{
    //                     break;
    //                 }
    //             }
    //             ans = max(count, ans);
    //             count = 0;
    //             break;
    //         }
    //     }
    // }

    // return ans;

    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for(int i = 0; i < a.size(); i++){
        sum += a[i];
        if(sum == k){
            maxLen = max(maxLen, i + 1);
        }
        long long rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if(preSumMap.find(sum) == preSumMap.end()){
            preSumMap[sum] = i;
        }
    }

    return maxLen;

}