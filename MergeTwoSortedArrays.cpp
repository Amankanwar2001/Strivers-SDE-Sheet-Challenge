#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// https://www.codingninjas.com/codestudio/problems/merge-two-sorted-arrays_8230835?challengeSlug=striver-sde-challenge

	vector<int> temp;

	int i=0,j=0;
	
	while(i<m and j<n){
		if(arr1[i]<arr2[j]){
			temp.push_back(arr1[i]);
			i++;
		}
		else{
			temp.push_back(arr2[j]);
			j++;
		}
	}
	while(i<m){
		temp.push_back(arr1[i]); 
		i++;
	}
	while(j<n){
		temp.push_back(arr2[j]);
		j++;
	}

	return temp;
}