//Question Link => https://www.interviewbit.com/problems/addition-without-summation/

#include<bits/stdc++.h>
using namespace std;

int addNumbers(int A, int B) {
    if(A == 0) return B;
    if(B == 0) return A;
    
    return (addNumbers(A^B, 2*(A&B)));
    
    //Remember this as a lesson
}