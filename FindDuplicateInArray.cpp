#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	
	//https://www.codingninjas.com/codestudio/problems/find-duplicate-in-array_8230816?challengeSlug=striver-sde-challenge
	
	vector<int> cnt(n);

	for(int i=0;i<n;i++) cnt[arr[i]]++;

	for(int i=0;i<n;i++){
		if(cnt[i]>1) return i;
	}
}
