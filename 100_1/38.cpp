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
    string x,y;
    cin >> x >> y;
    int n=x.size(); int m=y.size();
    int dp[n+1][m+1]={0};

    rep(i,n){
        rep(j,m){
            if(x[i]==y[j]) dp[i+1][j+1]=max(dp[i][j+1]+1,dp[i+1][j]+1);
            else dp[i+1][j+1]=dp[i][j];
        }
    }
    cout << dp[n][m];
}