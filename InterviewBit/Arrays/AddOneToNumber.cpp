/*Given a non-negative number represented as an array of digits, add 1 to the number ( increment the number represented by the digits ).

The digits are stored such that the most significant digit is at the head of the list.

NOTE: Certain things are intentionally left unclear in this question which you should practice asking the interviewer. For example: 
for this problem, following are some good questions to ask :

Q : Can the input have 0's before the most significant digit. Or in other words, is 0 1 2 3 a valid input?
A : For the purpose of this question, YES
Q : Can the output have 0's before the most significant digit? Or in other words, is 0 1 2 4 a valid output?
A : For the purpose of this question, NO. Even if the input has zeroes before the most significant digit.*/

#include<iostream>
#include<vector>

using namespace std;

vector<int> plusOne(vector<int> &A) {
    // long long int sum = 0;
    
    // for(int i = 0; i < A.size(); i++){
    //     sum += A[i]*(10^i);
    // }
    
    // sum = sum + 1;
    
    // vector<int> ans;
    
    // while(sum != 0){
    //     int digit = sum%10;
    //     ans.push_back(digit);
    //     sum /= 10;
    // }
    
    // int s = 0, e = ans.size() - 1;
    
    // while(s <= e){
    //     swap(ans[s], ans[e]);
    //     s++;
    //     e--;
    // }
    
    // return ans;
    
    int carry = 1;
    
    for(int i = A.size() - 1; i > 0; i--){
        if(A[i] + carry == 10){
            A[i] = 0;
            carry = 1;
        }else{
            A[i] = A[i] + carry;
            carry = 0;
        }
    }
    
    if(A[0] + carry == 10){
        A[0] = 0;
        A.insert(A.begin(), 1);
    }else{
        A[0] = A[0] + carry;
        
        while(A[0] == 0){
            A.erase(A.begin());
        }
    }
    
    return A;
}
