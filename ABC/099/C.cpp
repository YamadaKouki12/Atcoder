#include <bits/stdc++.h>
using namespace std;
#define int long long
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using P=pair<long long,long long>;
#define rep(i,n) for(long long i=0; i<(long long)n; i++)
#define FOR(i,a,b) for(long long i=a; i<b; i++)
#define ll long long
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((long long)(x).size())
#define COUT(x) cout << x << endl;
#define PB(x) push_back(x)
#define MP make_pair
#define vint vector<int>
#define vvint vector<vector<int>>
#define vstr vector<string>
long long gcd(long long a,long long b){return b?gcd(b,a%b):a;}
const long long dx[4]={1,0,-1,0};
const long long dy[4]={0,1,0,-1};
const long long INF = 1e12;
const long long MOD = 1e9+7;

signed main(){
    int n; cin >> n;

    vint coin;
    coin.PB(1);
    int six=6, nine=9;
    while(six<=n) {coin.PB(six); six*=6;}
    while(nine<=n) {coin.PB(nine); nine*=9;}
    //rep(i,7) cout<<m[i]<<' ';
    vint dp(n+10,INF);
    dp[0]=0;
    //dp[1]=1;
    FOR(i,1,n+1){
        for(int c:coin){
            if(i-c>=0) chmin(dp[i],dp[i-c]+1);
        }
    }
    //FOR(i,1,n+1) cout<<dp[i]<<' ';
    cout<<dp[n]<<endl;
    
}