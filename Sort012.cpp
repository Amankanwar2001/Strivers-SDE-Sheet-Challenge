#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   // https://www.codingninjas.com/codestudio/problems/sort-0-1-2_8230695?challengeSlug=striver-sde-challenge

   vector<int> cnt(3);
   for(int i=0;i<n;i++){
      cnt[*(arr+i)]++;
   }

   int x=0;
   for(int i=0;i<n;i++){
      while(cnt[x]==0) x++;
      
      if(x==0) *(arr+i)=0;
      else if(x==1) *(arr+i)=1;
      else *(arr+i)=2;

      cnt[x]--;
   }
}