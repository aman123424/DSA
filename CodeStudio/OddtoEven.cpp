// Question Link => https://www.codingninjas.com/codestudio/problems/odd-to-even_1214553?leftPanelTab=1

#include <bits/stdc++.h>
using namespace std;

string oddToEven(string &num) 
{
	// Write your code here

	int evenIndex = -1;
	int lastIndex = num.size() - 1;
	for(int i = 0; i < num.size(); i++){
		if(num[i]%2 == 0){
			evenIndex = i;
			if(num[i] < num[lastIndex]){
				swap(num[i], num[lastIndex]);
				return num;
			}
		}
	}

	if(evenIndex != -1){
		swap(num[evenIndex], num[lastIndex]);
		return num;
	}

	return "-1";
}
