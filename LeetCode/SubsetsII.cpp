// https://leetcode.com/problems/subsets-ii/description/

#include <bits/stdc++.h>
using namespace std;

//Method I

// class Solution {

// private: 
//     void subSets(vector<int>& nums, int index, vector<int>& output, set<vector<int>>& subsets){
//         if(index == nums.size()){
//             subsets.insert(output);
//             return;
//         }

//         output.push_back(nums[index]);
//         subSets(nums, index + 1, output, subsets);
//         output.pop_back();

//         subSets(nums, index + 1, output, subsets);
//     }

// public:
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//         vector<vector<int>> ans;
//         set<vector<int>> subsets;
//         vector<int> output;

//         sort(nums.begin(), nums.end());

//         subSets(nums, 0, output, subsets);

//         for(auto it = subsets.begin(); it != subsets.end(); ++it){
//             ans.push_back(*it);
//         }

//         return ans;
//     }
// };

//Method II

class Solution {

private: 
    void subSets(vector<int>& nums, int index, vector<int>& output, vector<vector<int>>& ans){
        ans.push_back(output);
        for(int i = index; i < nums.size(); i++){
            if(i != index && nums[i] == nums[i - 1]) continue;
            output.push_back(nums[i]);
            subSets(nums, i + 1, output, ans);
            output.pop_back();
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;

        sort(nums.begin(), nums.end());

        subSets(nums, 0, output, ans);

        return ans;
    }
};