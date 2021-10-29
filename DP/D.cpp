#include <bits/stdc++.h>
using namespace std;

#define int long long
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define ll long long
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define COUT(x) cout << x << endl;
#define PB(x) push_back(x)
#define MP make_pair
int gcd(int a,int b){return b?gcd(b,a%b):a;}
const int dx[4]={1,0,-1,0};
const int dy[4]={0,1,0,-1};
const int INF = 1e9;
const int MOD = 1e9+7;

signed main(){
    int n,W; cin >> n >> W;
    vector<int> w(n+1),v(n+1);
    rep(i,n) cin >> w[i+1]>>v[i+1]; 
    //1-index
    //dp[i][j]:i番目までの品物で重さj以下の時の最大価値
    vector<vector<int>> dp(110,vector<int>(100010,0));
    for(int i=0; i<n; i++){
        rep(j,W+1){
            if(j-w[i+1]>=0) chmax(dp[i+1][j],dp[i][j-w[i+1]]+v[i+1]);
            chmax(dp[i+1][j],dp[i][j]);
        }
    }
    cout<<dp[n][W]<<endl;
}