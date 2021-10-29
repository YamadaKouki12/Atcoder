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
const double PI=3.1415926535897932;
const int dx[4]={1,0,-1,0};
const int dy[4]={0,1,0,-1};
const int INF = 1e9;
const ll MOD = 1e9+7;

int main(){
    ll n,k; cin >> n >> k;
    int sum=0,ans=0;
    for(ll i=k; i<=n+1; i++){
        ll min_sum=(i-1)*i/2;
        ll max_sum=(2*n-i+1)*i/2;
        sum=(max_sum-min_sum+1)%MOD;
        ans=(ans+sum)%MOD;
    }
    COUT(ans);
    

}