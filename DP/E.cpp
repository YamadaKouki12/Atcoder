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

//dp[i][j]をi番目までの品物で重量j以下の最大価値とすると10^9でTLEになりそう
//なのでdp[i][j]をi-1番目までの品物で"価値"j以上の最小重量とする

const int v_max=100100;
signed main(){
    int n,W; cin >> n >> W;
    vector<int> w(n),v(n);
    rep(i,n) cin >> w[i] >> v[i];

    vector<vector<int>> dp(110,vector<int>(v_max,INF));
    dp[0][0]=0;

    rep(i,n){
        rep(j,v_max){
            if(j-v[i]>=0) chmin(dp[i+1][j],dp[i][j-v[i]]+w[i]);
            chmin(dp[i+1][j],dp[i][j]);
        }
    }
    int res=0;
    rep(i,v_max){
        if(dp[n][i]<=W) res=i;
    }
    cout<<res<<endl;
}