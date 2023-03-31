//Question Link => https://www.codingninjas.com/codestudio/problems/polynomials_3164694?leftPanelTab=1

#include<bits/stdc++.h>
using namespace std;

vector<int> multiply(vector<int> &a, vector<int> &b, int n){
    // Write your code here.

    vector<int> ans(n * 2 - 1);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            ans[i + j] += a[i]*b[j]; 
        }
    }

    return ans;
}