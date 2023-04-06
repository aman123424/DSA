//Question Link => https://www.interviewbit.com/problems/palindrome-integer/

#include<bits/stdc++.h>
using namespace std;

int isPalindrome(int A) {
    
    if(A < 0) return 0;
    
    vector<int> ans;
    
    while(A != 0){
        int digit = A%10;
        ans.push_back(digit);
        A = A/10;    
    }
    
    int s = 0;
    int e = ans.size() - 1;
    
    while(s <= e){
        if(ans[s] != ans[e]){
            return 0;
        }
        s++;
        e--;
    }
    
    return 1;
}
