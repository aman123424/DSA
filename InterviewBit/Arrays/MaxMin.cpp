/*Given an array A of size N. You need to find the sum of Maximum and Minimum element in the given array.

NOTE: You should make minimum number of comparisons.*/

#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> &A) {
    //method I
    // sort(A.begin(), A.end());
    // return (A[0] + A[A.size() - 1]);
    
    
    //method II
    int maxi = INT_MIN;
    int mini = INT_MAX;
    
    for(int i = 0; i < A.size(); i++){
        int current = A[i];
        
        if(current > maxi){
            maxi = current;
        }
        if(current < mini){
            mini = current;
        }
    }
    
    return (mini + maxi);
}
