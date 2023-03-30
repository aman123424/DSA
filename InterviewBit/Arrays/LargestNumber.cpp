//Question Link => https://www.interviewbit.com/problems/largest-number/

#include<bits/stdc++.h>
using namespace std;

string largestNumber(const vector<int> &A) {
    vector<string> v;
    
    for(int i = 0; i < A.size(); i++){
        v.push_back(to_string(A[i]));
    }
    
    sort(v.begin(), v.end(), [&](string a, string b){
        return a + b > b + a;
    });
    
    string ans;
    
    for(int i = 0; i < v.size(); i++){
        ans += v[i];
    }
    
    if(v[0] == "0"){
        return "0";
    }
    
    return ans;
}
