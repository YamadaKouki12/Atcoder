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
    int n; cin >> n;
    vector<int> h(n+1);
    rep(i,n) cin >> h[i+1];
    vector<int> dp(100100,INF);
    dp[0]=0; dp[1]=0; dp[2]=abs(h[2]-h[1]);
    for(int i=1; i<n-1; i++){
        chmin(dp[i+2],dp[i+1]+abs(h[i+2]-h[i+1]));
        chmin(dp[i+2],dp[i]+abs(h[i+2]-h[i]));
    }
    //for(int i=1; i<=n; i++) cout<<dp[i]<<' ';
    cout<<dp[n]<<endl;

}