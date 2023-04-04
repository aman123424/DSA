//Question Link => https://www.interviewbit.com/problems/binary-representation/

#include<bits/stdc++.h>
using namespace std;

string findDigitsInBinary(int A) {
    
    //Method I
    
    if(A == 0){
        return "0";
    }
    int n = A;
    string ans;
    
    while(n != 0){
        if(n&1){
            ans = "1" + ans;
        }else{
            ans = "0" + ans;
        }
        n = n>>1;
    }
    
    return ans;
}
