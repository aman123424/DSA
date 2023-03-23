/*Find the contiguous subarray within an array, A of length N which has the largest sum.*/

#include<iostream>
#include<vector>

using namespace std;

// void subArrays(const vector<int> &A, int s, int e, int &ans){
    
//     if(e > A.size()){
//         return;
//     }
    
//     if(s >= e){
//         subArrays(A, 0, e + 1, ans);
//     }else{
//         int sum = 0;
//         for(int i = s; i < e; i++){
//             sum += A[i];
//         }
        
//         ans = max(ans, sum);
        
//         subArrays(A, s + 1, e, ans);
//     }
// }

int maxSubArray(const vector<int> &A) {
    
    int currSum = 0; 
    int maxSum = INT_MIN;
    
    for(int i = 0; i < A.size(); i++){
        currSum += A[i];
        
        maxSum = max(maxSum, currSum);
        
        if(currSum < 0){
            currSum = 0;
        }
    }
    
    return maxSum;
    
    
    // int s = 0;
    // int e = 1;
    // int ans = INT_MIN;
    
    // subArrays(A, s, e, ans);
    
    // return ans;
    
}
