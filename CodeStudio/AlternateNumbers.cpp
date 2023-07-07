//https://www.codingninjas.com/studio/problems/alternate-numbers_6783445?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=1

#include<bits/stdc++.h>
using namespace std;

vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.

    vector<int> ans(a.size(), 0);

    int pos = 0, neg = 1;

    for(int i = 0; i < a.size(); i++){
        if(a[i] < 0){
            ans[neg] = a[i];
            neg += 2; 
        }else{
            ans[pos] = a[i];
            pos += 2;
        }
    }

    return ans;

}