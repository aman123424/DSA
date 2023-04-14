// Question Link => https://www.interviewbit.com/problems/allocate-books/

#include<bits/stdc++.h>
using namespace std;

bool isPossible(int mid, vector<int> &A, int n, int B){
    int stuCount = 1;
    int pageCount = 0;
    
    for(int i = 0; i < n; i++){
        if(pageCount + A[i] <= mid){
            pageCount += A[i];
        }else{
            stuCount++;
            if(stuCount > B){
                return false;
            }
            pageCount = A[i];
        }
    }
    
    return true;
}

int books(vector<int> &A, int B) {
    int maxi = 0;
    int sum = 0;
    int n = A.size();
    
    for(int i = 0; i < n; i++){
        sum += A[i];
        if(maxi < A[i]){
            maxi = A[i];
        }
    }
    
    if(n == B){
        return maxi;
    }
    else if(n < B){
        return -1;
    }
    
    int s = maxi;
    int e = sum;
    int ans = -1;
    
    while(s<=e){
        int mid = s + (e - s)/2;
        
        if(isPossible(mid, A, n, B)){
            ans = mid;
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }
    
    return ans;
    
}