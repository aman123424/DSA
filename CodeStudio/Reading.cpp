//https://www.codingninjas.com/studio/problems/reading_6845742?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=1

#include<bits/stdc++.h>
using namespace std;

string read(int n, vector<int> book, int target)
{
    // Write your code here.
    // for(int i = 0; i < n; i++){
    //     for(int j = i + 1; j < n; j++){
    //         if(book[i] + book[j] == target){
    //             return "YES";
    //         }
    //     }
    // }

    // return "NO";

    // map<int, int> mpp;
    // for(int i = 0; i < n; i++){
    //     int a = book[i];
    //     int more = target - a;
    //     if(mpp.find(more) != mpp.end()){
    //         return "YES";
    //     }
    //     mpp[a] = i;
    // }

    // return "NO";

    int left = 0, right = n - 1;

    sort(book.begin(), book.end());

    while(left < right){
        if(book[left] + book[right] == target) return "YES";
        if(book[left] + book[right] > target){
            right--;
        }else{
            left++;
        }
    }

    return "NO";
}
