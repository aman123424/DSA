//Question Link => https://www.interviewbit.com/problems/maximum-consecutive-gap/

#include<bits/stdc++.h>
using namespace std;

int maximumGap(const vector<int> &A) {
    if(A.size() < 2){
        return 0;
    }
    
    vector<int> V;
    
    for(int i = 0; i < A.size(); i++){
        V.push_back(A[i]);
    }
    
    
    sort(V.begin(), V.end());
    
    int maxDiff = 0;
    
    for(int i = 1; i < A.size(); i++){
        if(maxDiff < V[i] - V[i - 1]){
            maxDiff = V[i] - V[i - 1]; 
        }
    }
    
    return maxDiff;
}
