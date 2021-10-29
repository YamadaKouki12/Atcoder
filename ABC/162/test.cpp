#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<(int)n; i++)
#define ll long long
#define all(x) (x).begin(), (x).end()
const int mod = 1000000009;

//dp[a][b]:a番目までの整数を選んで和をbにできるか？
bool dp[110][10010];

int main(){
    int n; cin >> n;
    int a[n]; rep(i,n) cin >> a[i];
    int A; cin >> A;

    rep(i,110){
        rep(j,10010){
            dp[i][j]=0;
        }
    }

    dp[0][0]=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<=A; j++){
            if(j>=a[i]) dp[i+1][j]=min(dp[i][j-a[i]]+1,dp[i][j])
            else dp[i+1][j]=dp[i][j]%mod;
        }
    }

    




}