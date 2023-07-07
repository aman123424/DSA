//https://www.codingninjas.com/studio/problems/maximum-subarray-sum_630526?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=1

#include <bits/stdc++.h> 
using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */

    //Kadane's Algorithm

    long long sum = 0, maxi = LONG_MIN;

    for(int i = 0; i < n; i++){
        sum += arr[i];

        if(sum > maxi){
            maxi = sum;
        }

        if(sum < 0){
            sum = 0;
        }
    }

    if(maxi > 0) return maxi;
    return 0;
}