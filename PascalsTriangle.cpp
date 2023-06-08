#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // https://www.codingninjas.com/codestudio/problems/pascal-s-triangle_8230805?challengeSlug=striver-sde-challenge

    vector<vector<long long int>> a(n);

    for(int i=1;i<=n;i++){

      if(i==1){
        a[i-1].push_back(1);
        continue;
      }

      a[i-1].push_back(1);
      for(int j=1;j<i-1;j++){
        a[i-1].push_back(a[i-2][j]+a[i-2][j-1]);
      }
      a[i-1].push_back(1);
      
    }

    return a;
}
