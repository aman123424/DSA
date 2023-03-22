/*Given an integer array nums, return the number of subarrays filled with 0.
A subarray is a contiguous non-empty sequence of elements within an array.*/

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long int ans = 0, zeros = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                zeros++;
            }else{
                ans += zeros*(zeros + 1)/2;
                zeros = 0;
            }
        }

        ans += zeros*(zeros+1)/2;

        return ans;

    }
};