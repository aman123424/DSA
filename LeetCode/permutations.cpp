// https://leetcode.com/problems/permutations/

#include <bits/stdc++.h>
using namespace std;

class Solution {

private: 
    void permutations(vector<int>& nums, vector<int>& output, vector<int>& mark, vector<vector<int>>& ans){
        if(output.size() == nums.size()){
            ans.push_back(output);
            return;
        }

        for(int i = 0; i < nums.size(); i++){
            if(mark[i] != 1){
                output.push_back(nums[i]);
                mark[i] = 1;
                permutations(nums, output, mark, ans);
                mark[i] = 0;
                output.pop_back();   
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
           vector<vector<int>> ans;
           vector<int> output;
           vector<int> mark(nums.size(), 0);

           permutations(nums, output, mark, ans);

           return ans;
    }
};