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
    int n,m; cin >> n >> m;
    vector<int> c(m);
    rep(i,m) cin >> c[i];

    int dp[50010];
    rep(i,n+1) dp[i]=INF;
    dp[0]=0;

    for(int i=1; i<=n; i++){
        for(int j=0; j<m; j++){
            if(i-c[j]>=0) dp[i]=min(dp[i-c[j]]+1,dp[i]);
        }
    }
    COUT(dp[n]);


}