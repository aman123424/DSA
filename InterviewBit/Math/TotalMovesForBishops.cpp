//Question Link => https://www.interviewbit.com/problems/total-moves-for-bishop/

#include<bits/stdc++.h>
using namespace std;

//If you want to count for knights
// void countKnightMoves(int A, int B, int &count){
//     //top-right
//     if(B+2 <= 7  && A+1 <= 7) count++;
    
//     //top-left
//     if(B+2 <= 7 && A-1 >= 0) count++;
    
//     //down-right
//     if(B-2 >= 0 && A+1 <= 7) count++;
    
//     //down-left
//     if(B-2 >= 0 && A-1 >= 0) count++;
    
//     //right-up
//     if(B-1 >= 0 && A+2 <= 7) count++;
    
//     //right-down
//     if(B-1 >= 0 && A+2 <= 7) count++;
    
//     //left-down
//     if(B-1 >= 0 && A-2 <= 7) count++;
    
//     //down-right
//     if(B+1 <= 7 && A-2 >= 0) count++;
// }

int solve(int A, int B) {
    
    return min(B-1,A-1) + min(8-B,A-1) + min(8-B,8-A) + min(B-1,8-A);
}
