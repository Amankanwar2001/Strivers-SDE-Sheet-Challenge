#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  // https://www.codingninjas.com/codestudio/problems/longest-subarray-zero-sum_8230747?challengeSlug=striver-sde-challenge
    int ans=0;
    int sum=0;

    map<int,int> mp;
    mp[0]=-1;
    for(int i=0;i<arr.size();i++){
      sum+=arr[i];
      if(mp.count(sum)) ans=max(ans,i-mp[sum]);
      else mp[sum]=i;
    }

    return ans;
}