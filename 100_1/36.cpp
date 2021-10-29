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

//dp[w]:重さw以下の場合の最大価値
int dp[10010];

int main(){
    int n,W; cin >> n >> W;
    vector<int> v(n),w(n);
    rep(i,n) cin >> v[i] >> w[i];

    for(int i=0; i<=W; i++){
        for(int j=0; j<n; j++){
            if(i+w[j]<=W){
                dp[i+w[j]]=max(dp[i+w[j]],dp[i]+v[i]);
            }
        }
    }
    COUT(dp[W]);
}