//Question Link => https://www.codingninjas.com/codestudio/problems/coupons_2262396

#include<bits/stdc++.h>
using namespace std;

int pickCoupons(int n, vector<int> &coupons)
{
    // Write your code here
    int ans = INT_MAX;
    vector<int> temp;

    int i = 0;
    while(i < coupons.size() - 1){
        int j = i + 1;

        while(j < coupons.size()){
            if(coupons[i] == coupons[j]){
                temp.push_back(j - i + 1);
            }
            j++;
        }

        i++;
    }

    if(temp.size() == 0){
        return -1;
    }

    for(int i = 0; i < temp.size(); i++){
        ans = min(ans, temp[i]);
    }

    return ans;

}