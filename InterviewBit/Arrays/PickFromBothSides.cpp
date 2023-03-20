/*Given an integer array A of size N.
You have to pick exactly B elements from either left or right end of the array A to get the maximum sum.
Find and return this maximum possible sum.
NOTE: Suppose B = 4 and array A contains 10 elements then
You can pick the first four elements or can pick the last four elements or can pick 1 from the front and 3 from the back etc. you need to return the maximum possible sum of elements you can pick.*/


//SOLUTION

#include <iostream>
#include <vector>

using namespace std;


int solve(vector<int> &A, int B) {

    
    int left = 0, right = 0, ans = INT_MIN, n = A.size();
    
    for(int i = 0; i < B; i++){
        left += A[i];
    }
    ans = max(ans, left);
    
    for(int i = 0; i < B; i++){
        right += A[n - i -1];
    }
    ans = max(ans, right);
    
    for(int i = 0; i < B; i++){
        left -= A[B - i - 1];
        left += A[n - i - 1];
        ans = max(ans, left);
    }
    
    return ans;

}