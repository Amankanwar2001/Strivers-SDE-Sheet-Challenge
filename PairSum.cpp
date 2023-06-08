#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   
   //https://www.codingninjas.com/codestudio/problems/pair-sum_8230699?challengeSlug=striver-sde-challenge&leftPanelTab=1
   
   vector<vector<int>> ans;
   
   map<int,int> mp;
   int n=arr.size();
   for(int i=0;i<n;i++) mp[arr[i]]++;

   for(int i=0;i<n;i++){
      int ele1=arr[i];
      int ele2=s-arr[i];

      if(ele1==ele2){
         int x=mp[ele1];
         int pairs=(x*(x-1))/2;
         
         mp[ele1]=0;
         for(int j=0;j<pairs;j++)
           ans.push_back({ele1, ele2});
         
      }
      else{
         for(int j=0;j<mp[ele1];j++){
            for(int k=0;k<mp[ele2];k++){
              ans.push_back({min(ele1,ele2),max(ele1,ele2)});
            }
         }
         mp[ele1]=0;
         mp[ele2]=0;
      }
   }
   sort(begin(ans),end(ans));
   
   return ans;
}