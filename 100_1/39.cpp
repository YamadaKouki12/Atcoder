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
    ll n; cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    vector<vector<ll>> dp(110,vector<ll>(30,0));
    dp[0][a[0]]=1;

    for(ll i=0; i<n-1; i++){
        for(ll j=0; j<=20; j++){
            if(j+a[i+1]<=20 && j+a[i]>=0) dp[i+1][j]+=dp[i][j+a[i+1]];
            if(j-a[i+1]>=0 && j-a[i]<=20) dp[i+1][j]+=dp[i][j-a[i+1]];
        }
    }
    COUT(dp[n-2][a[n-1]]);
}