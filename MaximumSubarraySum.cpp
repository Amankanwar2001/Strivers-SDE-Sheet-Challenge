#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    //https://www.codingninjas.com/codestudio/problems/maximum-subarray-sum_8230694?challengeSlug=striver-sde-challenge

    long long ans=0,sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<0) sum=0;
        ans=max(ans,sum);
    }

    return ans;
}