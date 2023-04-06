//Question Link => https://www.interviewbit.com/problems/reverse-integer/

#include<bits/stdc++.h>
using namespace std;

int reverse(int A) {
    int reverse = 0;
    int temp = abs(A);
    
    while(temp != 0){
        int digit = temp%10;
        
        if(reverse > INT_MAX/10){
            return 0;
        }
        
        reverse = reverse*10 + digit;
        
        temp = temp/10;
    }
    
    if(A > 0){
        return reverse;
    }else{
        return (-1)*reverse;
    }
}
