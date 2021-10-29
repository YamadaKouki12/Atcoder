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
#define MP make_pair
int gcd(int a,int b){return b?gcd(b,a%b):a;}
const int dx[4]={1,0,-1,0};
const int dy[4]={0,1,0,-1};
const int INF = 1e9;
const int MOD = 1e9+7;

vector<vector<int>> dp(110,vector<int>(110,-1));
vector<pair<int,int>> m;
int n;

int solve(int l, int r){
    if(dp[l][r]>=0) return dp[l][r];
    if(l==(r-1)) return 0;

    int ret=INF;
    for(int i=l+1; i<r; i++){
        chmin(ret,solve(l,i)+solve(i,r)+m[l].first*m[l].second*m[r-1].second);
    }
    return dp[l][r]=ret;

}

int main(){
    cin >> n;
    m.resize(n);
    rep(i,n){
       cin >> m[i].first >> m[i].second;
    }
    COUT(dp[0][n]);
}