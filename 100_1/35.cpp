#include <bits/stdc++.h>
using namespace std;


template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define ll long long
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define COUT(x) cout << x << endl;
#define PB(x) push_back(x)
int gcd(int a,int b){return b?gcd(b,a%b):a;}
const int dx[4]={1,0,-1,0};
const int dy[4]={0,1,0,-1};
const int INF = 1e9;
const int MOD = 1e9+7;

int main(){
    int n,W; cin >> n >> W;
    vector<int> v(n),w(n);
    rep(i,n) cin >> v[i] >> w[i];
    int dp[110][10010];
    rep(i,W+1) dp[0][i]=0;


    for(int i=0; i<n; i++){
        for(int j=0; j<=W; j++){
            if(j>=w[i]) dp[i+1][j]=max(dp[i][j-w[i]]+v[i],dp[i][j]);
            else chmax(dp[i+1][j],dp[i][j]);
        }
    }
    cout << dp[n][W] << endl;
}


















/*dp[n][w]:n個目の荷物までで重さw以下の場合の価値
int dp[110][10010];
int main(){
    int n,W; cin >> n >> W;
    vector<int> v(n),w(n);
    rep(i,n) cin >> v[i] >> w[i];

    for(int i=0; i<=W; i++) dp[0][i]=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<=W; j++){
            if(j>=w[i]) chmax(dp[i+1][j],dp[i][j-w[i]]+v[i]);
            chmax(dp[i+1][j],dp[i][j]);
        }
    }
    COUT(dp[n][W]);
}   
*/