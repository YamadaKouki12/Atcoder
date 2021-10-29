#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int K;
  int i, j, l, m;
  int ans = 0;
  
  cin >> K;
 
  for(i=0; i < K; i++){
    for(j=0; j < K; j++){
      for(l=0; l < K; l++){
        ans += gcd(gcd(i+1, j+1), l+1);
      }
    }
  }
 
  cout << ans;
 
}