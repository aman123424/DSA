// Question Link => https://www.interviewbit.com/problems/matrix-search/

#include<bits/stdc++.h>
using namespace std;

int searchMatrix(vector<vector<int> > &A, int B) {
    int rows = A.size();
    int cols = A[0].size();
    
    int s = 0;
    int e = rows*cols - 1;
    
    while(s<=e){
        int mid = s + (e - s)/2;
        
        int r = mid/cols;
        int c = mid%cols;
        
        if(A[r][c] == B){
            return 1;
        }else if(A[r][c] > B){
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }
    
    return 0;
}
