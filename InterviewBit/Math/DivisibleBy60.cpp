//Question Link => https://www.interviewbit.com/problems/divisible-by-60/

#include<bits/stdc++.h>
using namespace std;

int divisibleBy60(vector<int> &A) {

    if(A.size() == 1 && A[0] == 0){
        return 1;
    }
    
    int sum = 0;
    
    for(int i = 0; i < A.size(); i++){
        sum += A[i];
    }
    
    int zeroCount = 0;
    
    for(int i = 0; i < A.size(); i++){
        if(A[i] == 0){
            zeroCount++;
            
            if(zeroCount >= 2){
                break;
            }
        }
    }
    
    if(sum%3 == 0 && zeroCount == 2){
        return 1;
    }
    
    bool isEven = false;
    
    for(int i = 0; i < A.size(); i++){
        if(A[i]%2 == 0 && A[i] != 0){
            isEven = true;
            break;
        }
    }
    
    if(sum%3 == 0 && zeroCount >= 1 && isEven){
        return 1;
    }
    
    return 0;
        
    
}
