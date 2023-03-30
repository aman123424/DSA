//Question Link => https://www.interviewbit.com/problems/find-duplicate-in-array/

#include<bits/stdc++.h>
using namespace std;

int repeatedNumber(const vector<int> &A) {
    
    //Method I
    // vector<int>v;
    // int count =0;
    
    // for(int i =0 ; i < A.size();i++)
    // {
    //     v.push_back(A[i]);
    // }
    
    // sort(v.begin(),v.end());
    
    // for(int i = 0; i<v.size()-1;i++)
    // {
    //     if(v[i]==v[i+1]) return v[i];    
    // }
    
    // return (-1);
    
    
    //Method II
    
    int slow = A[0];
    int fast = A[0];
    
    do{
        slow = A[slow];
        fast = A[A[fast]];
    }while(slow!=fast);
    fast = A[0];
    
    while(slow != fast){
        slow = A[slow];
        fast = A[fast];
    }
    
    return slow<=0? -1 : slow;
    
}
