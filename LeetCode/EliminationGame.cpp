/*You have a list arr of all integers in the range [1, n] sorted in a strictly increasing order. Apply the following algorithm on arr:

Starting from left to right, remove the first number and every other number afterward until you reach the end of the list.
Repeat the previous step again, but this time from right to left, remove the rightmost number and every other number from the remaining numbers.
Keep repeating the steps again, alternating left to right and right to left, until a single number remains.
Given the integer n, return the last number that remains in arr.*/

class Solution {

//method I
// private: 
//     int remainingInt(vector<int> arr, bool left_to_right){
        
//         if(arr.size() == 1){
//             return arr[0];
//         }

//         if(left_to_right){
//             int i = 0;

//             while( i < arr.size()){
//                 arr.erase(arr.begin() + i);
//                 i += 1;                 
//             }

//             return remainingInt(arr, false);
//         }else{
//             int i = 0;

//             while(i < arr.size()){
//                 arr.erase(arr.end()-1 - i);
//                 i += 1;
//             }

//             return remainingInt(arr, true);
//         }

//     }
public:
    int lastRemaining(int n) {

        //method I => gives TLE at big cases
        // int ans;
        // bool left_to_right = true;
        // vector<int> arr;

        // for(int i = 1; i <= n; i++){
        //     arr.push_back(i);
        // }

        // ans = remainingInt(arr, left_to_right);

        // return ans;


        //method II
        if(n == 1){
            return 1;
        }else{
            return 2*(n/2 + 1 - lastRemaining(n/2));
        }
    }
};