//Question Link => https://www.interviewbit.com/problems/search-for-a-range/discussion/

#include<bits/stdc++.h>
using namespace std;

vector<int> searchRange(const vector<int> &A, int B) {
    
    int s = 0;
    int e = A.size() - 1;
    vector<int> ans(2,-1);
    
    int mid = s + (e - s)/2;
    
    while(s<=e){
        if(A[mid] == B){
            ans[0] = mid;
            e = mid - 1;
        }else if(A[mid] > B){
            e = mid - 1;
        }else{
            s = mid + 1;
        }
        
        mid = s + (e - s)/2;
    }
    
    s = 0;
    e = A.size() - 1;
    mid = s + (e - s)/2;
    
    while(s<=e){
        if(A[mid] == B){
            ans[1] = mid;
            s = mid + 1;
        }else if(A[mid] > B){
            e = mid - 1;
        }else{
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    
    return ans;
}
