#include<bits/stdc++.h>
using namespace std;

struct Interval {
     int start;
     int end;
     Interval() : start(0), end(0) {}
     Interval(int s, int e) : start(s), end(e) {}
};

vector<Interval> merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    vector<Interval> ans;
    
    sort(A.begin(), A.end(), [](Interval i1, Interval i2){
        return i1.start<i2.start;
    });
    
    Interval temp;
    temp.start = A[0].start;
    temp.end = A[0].end;
    
    int i = 1;
    
    while(i < A.size()){
        if(temp.end >= A[i].start){
            temp.end = max(temp.end, A[i].end);
        }else{
            ans.push_back(temp);
            temp.start = A[i].start;
            temp.end = A[i].end;
        }
        i++;
    }
    
    ans.push_back(temp);
    
    return ans;
}
