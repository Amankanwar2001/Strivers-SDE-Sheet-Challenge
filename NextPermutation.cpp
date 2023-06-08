#include <bits/stdc++.h> 

vector<int> nextPermutation(vector<int> &permutation, int n)
{
    // https://www.codingninjas.com/codestudio/problems/next-permutation_8230741?challengeSlug=striver-sde-challenge

    next_permutation(begin(permutation),end(permutation));
    return permutation;
}