//Question Link => https://www.interviewbit.com/problems/find-permutation/

#include<bits/stdc++.h>
using namespace std;

vector<int> findPerm(const string A, int B) {
    int gre = B, sma = 1;
    
    vector<int> v;
    
    if(A[0] == 'D'){
        v.push_back(gre);
        gre--;
    }else{
        v.push_back(sma);
        sma++;
    }
    
    for(int i = 1; i < B - 1; i++){
        if(A[i] == 'D'){
            v.push_back(gre);
            gre--;
        }else{
            v.push_back(sma);
            sma++;
        }
    }
    
    v.push_back(gre);
    
    return v;
}
