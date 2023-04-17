//Question Link => https://www.codingninjas.com/codestudio/problems/special-sum-of-array_893340?leftPanelTab=1

#include <bits/stdc++.h> 
using namespace std;

int specialSum(vector<int>& arr, int n){
    // Write your code here.
    
    //base case
    if(arr.size() == 1){
        return arr[0];
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    vector<int> result;
    if(sum == 0){
        result.push_back(0);
    }else{
        while(sum != 0){
            int digit = sum%10;
            result.push_back(digit);
            sum /= 10;
        }
    }

    return specialSum(result, result.size());
}