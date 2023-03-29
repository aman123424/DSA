//Question Link => https://www.codingninjas.com/codestudio/problems/mailing-problem_2245715?leftPanelTab=1

#include<bits/stdc++.h>
using namespace std;

int calculateTime(string keyboard, char s,int &currIndex){
    int time;
    int index;

    for(int i = 0; i < keyboard.size(); i++){
        if(keyboard[i] == s){
            index = i;
            break;
        }
    }

    time = abs(currIndex - index);

    currIndex = index;
    
    return time;
}

int timeTakenToMail(string keyboard, string s) {
    //    Write your code here
    int sum = 0;
    int currIndex = 0;

    for(int i = 0; i < s.size(); i++){
        sum += calculateTime(keyboard,s[i], currIndex);
    }

    return sum;
}