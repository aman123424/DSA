//Question Link => https://www.interviewbit.com/problems/is-rectangle/

#include<bits/stdc++.h>
using namespace std;

int solve(int A, int B, int C, int D) {
    vector<int> lengths;
    
    lengths.push_back(A);
    lengths.push_back(B);
    lengths.push_back(C);
    lengths.push_back(D);
    
    sort(lengths.begin(), lengths.end());
    
    if(lengths[0] == lengths[1] && lengths[2] == lengths[3]) return 1;
    
    return 0;
}
