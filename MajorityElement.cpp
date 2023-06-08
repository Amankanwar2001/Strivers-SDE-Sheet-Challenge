#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	//https://www.codingninjas.com/codestudio/problems/day-6-majority-element_8230731?challengeSlug=striver-sde-challenge

	map<int,int> mp;
	for(int i=0;i<n;i++) mp[arr[i]]++;

	for(auto val:mp) if(val.second>n/2) return val.first;

	return -1;
}