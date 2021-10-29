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

int main(){
    int n,m; cin >> n >> m;
    vector<int> d(n),c(m);
    rep(i,n) cin >> d[i];
    rep(i,m) cin >> c[i];
    vector<vector<int>> dp(1010,vector<int>(1010,INF));

    dp[0][0]=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            //移動する時
            dp[i+1][j+1]=min(dp[i][j]+c[i]*d[j],dp[i+1][j+1]);
            //移動しない(その場にとどまる)とき
            dp[i+1][j]=min(dp[i+1][j],dp[i][j]);
        }
    }

    /*
    rep(i,n+1) cout << dp[m][i]<<endl;
    auto itr=min_element(dp[m].begin(),dp[m].end());
    COUT(*itr);
    */
   
   int ans=INF;
   for(int j=1; j<=m; j++){
       chmin(ans,dp[j][n]);
   }
   COUT(ans);

    //COUT(dp[1][1]);
    //COUT(dp[m][n]);
}
