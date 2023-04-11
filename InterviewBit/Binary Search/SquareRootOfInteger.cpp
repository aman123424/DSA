//Question Link => https://www.interviewbit.com/problems/square-root-of-integer/

#include<bits/stdc++.h>
using namespace std;

int sqrt(int A) {
    
    int modulo = INT_MAX;
    if(A == 1) return 1;
    
    long int s = 0;
    long int e = A/2;
    
    long int mid = s + (e - s)/2;
    
    while(s<=e){
        
        if((mid*mid) == A || ((mid*mid)<A && ((mid+1)*(mid+1)) > A)){
            return mid;
        }else if((mid*mid) > A){
            e = mid - 1;
        }else{
            s = mid + 1;
        }
        
        mid = s + (e - s)/2;
    }
    
    return mid;
    
}
