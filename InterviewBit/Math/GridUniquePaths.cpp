//Question Link => https://www.interviewbit.com/problems/grid-unique-paths/

#include<bits/stdc++.h>
using namespace std;

void countPaths(int A, int B, int x, int y, int &ans, vector<vector<int>> visited){
    //base case
    if(x == A - 1 || y == B - 1){
        ans++;
        return;
    }
    
    visited[x][y] = 1;
    
    //down
    if(visited[x + 1][y] == 0 && x + 1 < A){
        countPaths(A,B,x + 1,y,ans,visited);
    }
    
    //right
    if(visited[x][y + 1] == 0 && y + 1 < B){
        countPaths(A,B,x,y + 1,ans,visited);
    }
    
    visited[x][y] = 0;
}

int uniquePaths(int A, int B) {
    // int ans = 0;
    // int srcX = 0;
    // int srcY = 0;
    
    // vector<vector<int>> visited(A, vector<int> (B,0));
    
    // countPaths(A, B, srcX, srcY, ans, visited);
    
    // return ans;
    
    //Correct Method is down here
    
    if(A<B) swap(A,B);
    
    vector<int> vec(A,1);
    
    for(int i = 1; i < B; i++){
        for(int j = 1; j < A; j++){
            vec[j] += vec[j - 1];
        }
    }
    return vec[A-1];
    
    //Recursive Approach
    
    // if(A == 1 || B == 1){
    //     return 1;
    // }
    
    // return uniquePaths(A - 1, B) + uniquePaths( A , B - 1);
    
    
}
