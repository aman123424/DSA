//Question Link => https://www.codingninjas.com/codestudio/problems/reversing-queue_1170046?leftPanelTab=1

#include <bits/stdc++.h>
using namespace std;

void reverse(queue < int > & q) {
    // Write your code here.

    //Method I
    if(q.empty()){
        return;
    }

    int curr = q.front();
    q.pop();

    reverse(q);

    q.push(curr);


    //Method II

    // queue<int> ans;

    // vector<int> temp;
    // int n = q.size();

    // for(int i = 0; i < n; i++){
    //     int curr = q.front();
    //     q.pop();
    //     temp.push_back(curr);
    // }

    // int s = 0;
    // int e = n - 1;

    // while(s<=e){
    //     swap(temp[s++],temp[e--]);
    // }

    // for(int i = 0; i < n; i++){
    //     ans.push(temp[i]);
    // }

    // return ans;
}