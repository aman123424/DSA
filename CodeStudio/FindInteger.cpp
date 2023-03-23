/*You are given two integers, 'N'  and 'K'. Assume numbers from 1 to 'N' are arranged such that all odd numbers (in ascending order) are present first and then come to all even numbers (also in ascending order).
You need to find the integer at position 'K' (numbering of positions starts from 1). */

#include<iostream>
#include<vector>

using namespace std;

int findInteger(int n, int k) 
{
    // Write your code here

    int ans;
    int odds;

    if(n%2 == 0){
        odds = n/2;
    }else{
        odds = n/2+1;
    }

    if(k <= odds){
        ans = 2 * k - 1;
    }else{
        ans = 2 * (k - odds);
    }

    return ans;
}
