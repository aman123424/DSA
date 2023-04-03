//Question Link => https://www.interviewbit.com/problems/prime-numbers/

#include<bits/stdc++.h>
using namespace std;

vector<int> sieve(int A) {
    
    vector<int> ans(A,1);
    
    for(int i = 2; i <= A/2; i++){
        int j = 2;
        while(i*j < A){
            ans[i*j] = 0;
            j++;
        }
    }
    
    vector<int> primes;
    
    for(int i = 2; i < A; i++){
        if(ans[i] == 1){
            primes.push_back(i);
        }
    }
    
    return primes;
    
}