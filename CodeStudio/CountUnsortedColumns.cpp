/*You are given an array 'STRINGS' having 'N' number of strings. The strings are assumed to be arranged such that there is one string in one line.
You need to return the number of columns that are not sorted lexicographically.*/

#include <bits/stdc++.h>
using namespace std;

int countColumns(vector<string> &strings)
{
    // Write your code here
    int count = 0;

    int N = strings[0].size();

    for(int i = 0; i < N; i++){
        for(int j = 1; j < strings.size(); j++){
            if(strings[j][i] < strings[j - 1][i]){
                count++;
                break;
            }
        }
    }

    return count;
}
