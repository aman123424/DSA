//https://www.codingninjas.com/studio/problems/superior-elements_6783446?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=1

#include<bits/stdc++.h>
using namespace std;
vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int> ans;

    int maxi = INT_MIN;

    for(int i = a.size() - 1; i >= 0; i--){
        if(maxi < a[i]){
            maxi = a[i];
            ans.push_back(a[i]);
        }
    }

    return ans;
}