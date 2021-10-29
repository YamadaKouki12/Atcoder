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
    int d,n; cin >> d >> n;
    vector<int> t(d);
    rep(i,d) cin >> t[i];
    vector<int> a(n),b(n),c(n);
    rep(i,n) cin >> a[i] >> b[i] >> c[i];
    vector<vector<int>> dp(210,vector<int>(110,-1));;
    
    for(int i=0; i<n; i++) dp[1][i]=0;

    for(int i=1; i<d; i++){
        //j:昨日の服のインデックス
        for(int j=0; j<n; j++){
            if(dp[i][j]<0) continue;
            //k:今日の服のインデックス
            for(int k=0; k<n; k++){
                if(b[k]>=t[i] && t[i]>=a[k]){
                    dp[i+1][k]=max(dp[i][j]+abs(c[j]-c[k]),dp[i+1][k]);
                }
            }
        }
    }
    rep(i,n) cout << dp[d][i] << endl;;
    auto max=max_element(all(dp.at(d)));
    cout << *max << endl;
}