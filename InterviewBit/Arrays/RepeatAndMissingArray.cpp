//Question Link => https://www.interviewbit.com/problems/repeat-and-missing-number-array/

#include<bits/stdc++.h>
using namespace std;

vector<int> repeatedNumber(const vector<int> &A) {
    int maxi = INT_MIN;
    int n = A.size();
    
    for(int i = 0; i < n; i++){
        if(A[i] > maxi){
            maxi = A[i];
        }
    }
    
    int arr[n + 1] = {0};
    
    int a,b;
    
    for(int i = 0; i < n; i++){
        arr[A[i]]++;
    }
    
    for(int i = 1; i < n + 1; i++){
        if(arr[i] == 0){
            b = i;
        }else if(arr[i] == 2){
            a = i;
        }
    }
    vector<int> ans;
    
    ans.push_back(a);
    ans.push_back(b);
    
    return ans;
}
