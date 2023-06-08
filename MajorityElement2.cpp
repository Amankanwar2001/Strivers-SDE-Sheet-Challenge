#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // https://www.codingninjas.com/codestudio/problems/majority-element-ii_8230738?challengeSlug=striver-sde-challenge
    map<int,int> mp;
    
	for(int i=0;i<arr.size();i++) mp[arr[i]]++;

    vector<int> ans;
    for(auto val:mp) if(val.second>arr.size()/3) ans.push_back(val.first);

    return ans;

}