//Question Link => https://www.codingninjas.com/codestudio/problems/immediate-smaller-element_1062597?leftPanelTab=1

#include <bits/stdc++.h> 
int* immediateSmaller(int* arr, int n) 
{
	// WRITE YOUR CODE HERE

	//Method I
	// int i = 0;

	// while(i < n - 1){
	// 	if(arr[i] > arr[i + 1]){
	// 		arr[i] = arr[i+1];
	// 	}else{
	// 		arr[i]=-1;
	// 	}

	// 	i++;
	// }

	// arr[n-1]=-1;

	// return arr;

	//Method II

	int* ans = new int[n];

	int i = 0;

	while(i < n - 1){
		if(arr[i] > arr[i + 1]){
			ans[i] = arr[i + 1];
		}else{
			ans[i] = -1;
		}

		i++;
	}

	ans[n - 1] = -1;

	return ans;

}