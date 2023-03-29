//Question Link => https://www.codingninjas.com/codestudio/problems/three-pointer_1081487?leftPanelTab=1

#include <bits/stdc++.h> 
using namespace std;

int threePointer(vector<int>& X, vector<int>& Y, vector<int>& Z)
{   
    // Write your code here.

    //Method I => Using bruteforce but it gives TLE at large cases
    // vector<int> allMax;

    // for(int i = 0; i < X.size(); i++){
    //     int currX = X[i];

    //     for(int j = 0; j < Y.size(); j++){
    //         int currY = Y[j];
    //         int diffXY = abs(currX - currY);

    //         for(int k = 0; k < Z.size(); k++){
    //             int currZ = Z[k];
    //             int maxi = max(abs(currX - currZ), abs(currZ - currY));

    //             if(maxi < diffXY){
    //                 maxi = diffXY;
    //             }

    //             allMax.push_back(maxi);
    //         }
    //     }
    // }

    // sort(allMax.begin(), allMax.end());

    // return allMax[0];

    //Method II => Using another approach

    int ans = INT_MAX;

    int i = 0, j = 0, k = 0;

    while(i < X.size() && j < Y.size() && k < Z.size()){
        int minVal = X[i];
        if(Y[j] < minVal){minVal = Y[j];}        
        if(Z[k] < minVal){minVal = Z[k];}

        int maxVal = X[i];
        if(Y[j] > maxVal){maxVal = Y[j];}        
        if(Z[k] > maxVal){maxVal = Z[k];}

        ans = min(ans, abs(minVal - maxVal));

        if(minVal == X[i]){ 
            i++;
        }else if(minVal == Y[j]){
            j++;
        }else{
            k++;
        }
    }

    return ans;
}