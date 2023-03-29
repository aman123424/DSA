//Question Link => https://www.interviewbit.com/problems/make-equal-elements-array/

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A, int B) {  
    int max = INT_MIN;
    int min = INT_MAX;
    
    for(int i = 0; i < A.size(); i++){
        if(A[i] > max){
            max = A[i];
        }
    }
    
    for(int i = 0; i < A.size(); i++){
        if(A[i] < min){
            min = A[i];
        }
    }
    
    int target = max - min;
    
    if(target == 0){return 1;}
    
    if(target != B && target != 2 * B){
        return 0;
    }
    
    if(target == B){
        for(int i = 0; i < A.size(); i++){
            if(A[i] != max && A[i] != min){
                return 0;
            }
        }
    }
    
    return 1;
}
