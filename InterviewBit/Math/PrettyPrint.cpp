//Question Link => https://www.interviewbit.com/problems/prettyprint/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> prettyPrint(int A) {
    vector<vector<int>> ans(2*A - 1, vector<int>(2*A - 1, 0));
    
    int count = 0;
    int total = (2*A - 1)*(2*A - 1);
    
    int startRow = 0;
    int startCol = 2*A - 2;
    int endRow = 2*A - 2;
    int endCol = 0;
    
    while(count < total){
        for(int i = endCol; i <= startCol; i++){
            ans[startRow][i] = A - startRow;
            count++;
        }
        startRow++;
        
        for(int i = startRow; i <= endRow; i++){
            ans[i][startCol] = A - endCol;
            count++;
        }
        startCol--;
        
        for(int i = startCol; i >= endCol; i--){
            ans[endRow][i] = A - endCol;
            count++;
        }
        endRow--;
        
        for(int i = endRow; i >= startRow; i--){
            ans[i][endCol] = A - endCol;
            count++;
        }
        endCol++;
    }
    
    return ans;
}

