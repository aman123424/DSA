//Question Link => https://www.interviewbit.com/problems/perfect-peak-of-array/

#include<bits/stdc++.h>
using namespace std;

int perfectPeak(vector<int> &A) {
    
    int maxi = A[0];
    int n = A.size();
    int arr[n];
    
    arr[n-1] = A[n - 1];
    
    for(int i = n - 2; i >= 0; i--){
        arr[i] = min(A[i], arr[i + 1]);
    }
    
    for(int i = 1; i < n; i++){
        if(A[i] > maxi && arr[i+1] > A[i]){
            return 1;
        }
        if(A[i] > maxi){maxi = A[i];}
    }
    
    return 0;
}
