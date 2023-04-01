//Questin Link => https://www.codingninjas.com/codestudio/problems/minimum-and-maximum-of-two-integers-without-branching_1199197?leftPanelTab=1


#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 
pair < int , int > findMinMax(int a , int b) 
{
	// Write Your Code here

	pair<int,int> ans;
	
	//Method I
	// ans = make_pair(min(a,b), max(a,b));

	// Method II
	int min = b ^ (( a ^ b) & - ( a < b));
	int max = a ^ (( a ^ b) & - ( a < b));

	ans = make_pair(min, max);

	return ans;
}