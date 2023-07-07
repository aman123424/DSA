//https://www.codingninjas.com/studio/problems/majority-element_6783241?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=0

#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v) {
	// Write your code here

	// map<int, int> mpp;

	// for(int i = 0; i < v.size(); i++){
	// 	mpp[v[i]]++;
	// }

	// for(auto it: mpp){
	// 	if(it.second > (v.size() / 2)){
	// 		return it.first;
	// 	}
	// }

	// return -1;

	//Moore's Voting Algorithm

	int el, cnt = 0;

	for(int i = 0; i < v.size(); i++){
		if(cnt == 0){
			cnt = 1;
			el = v[i];
		}else if(el == v[i]){
			cnt++;
		}else{
			cnt--;
		}
	}

	return el;

	//Below step is done when it's not guranteed that the array contains the element

	// int cnt1 = 0;

	// for(int i = 0; i < v.size(); i++){
	// 	if(v[i] == el) cnt1++;
	// }

	// if(cnt1 > (v.size() / 2)) return el;

	// return -1;

}