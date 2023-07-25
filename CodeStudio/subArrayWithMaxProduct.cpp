//https://www.codingninjas.com/studio/problems/subarray-with-maximum-product_6890008?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=1

#include<vector>
#include<bits/stdc++.h>
using namespace std;

int subarrayWithMaxProduct(vector<int> &arr){
	// Write your code here.

	int maxProd = INT_MIN;

	// if(arr.size() == 1) maxProd = arr[0];

	// for(int i = 0; i < arr.size() - 1; i++){
		
	// 	if(arr[i] == 0) continue;

	// 	int prod = arr[i];

	// 	for(int j = i + 1; j < arr.size(); j++){
	// 		if(arr[j] == 0) break;
	// 		prod *= arr[j];
	// 	}

	// 	maxProd = max(maxProd, prod);
	// }

	int pref = 1, suff = 1;

	for(int i = 0; i < arr.size(); i++){
		if(pref == 0) pref = 1;
		if(suff == 0) suff = 1;

		pref *= arr[i];
		suff *= arr[arr.size() - i - 1];

		maxProd = max(maxProd, max(suff, pref));
	}

	return maxProd;