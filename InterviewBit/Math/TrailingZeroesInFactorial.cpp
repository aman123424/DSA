//Question Link => https://www.interviewbit.com/problems/trailing-zeros-in-factorial/

#include<bits/stdc++.h>
using namespace std;

int trailingZeroes(int A) {
    int ans = 0;
    
    while(A/5 != 0){
        ans += A/5;
        A /= 5;
    }
    
    return ans;
}
