//Question Link => https://www.interviewbit.com/problems/first-missing-integer/

#include<bits/stdc++.h>
using namespace std;

int firstMissingPositive(vector<int> &A) {    
    int maxi = INT_MIN;
    int n = A.size();
    
    for(int i = 0; i < n; i++){
        if(A[i] > maxi){
            maxi = A[i];
        }
    }
    
    
    int arr[maxi] = {0};
    
    for(int i = 0; i < n; i++){
        if(A[i] > 0){
            arr[A[i]]++;
        }
    }
    
    for(int i = 1; i < n + 1; i++){
        if(arr[i] == 0){
            return i;
        }
    }
    
    return maxi + 1;  
    
}


