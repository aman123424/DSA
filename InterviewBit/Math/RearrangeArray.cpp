//Question Link => https://www.interviewbit.com/problems/rearrange-array/

#include<bits/stdc++.h>
using namespace std;

void arrange(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    //Using extra space
    // vector<int> ans;
    
    // for(int i = 0; i < A.size(); i++){
    //     ans.push_back(A[A[i]]);
    // }
    
    // A = ans;
    
    
    //Without using extra space
    
    int n = A.size();
    
    for(int i = 0; i < n; i++){
        A[i] += (A[A[i]]%n)*n;
    }
    
    for(int i = 0; i < n; i++){
        A[i] /= n;
    }
    
}