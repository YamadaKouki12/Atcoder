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
    ll mod=100000;
    ll n,m; cin >> n>> m;
    //0-indexでn-1からnまでの距離
    vector<ll> d(n,0);
    vector<ll> a(m);
    for(int i=1; i<n; i++) cin >> d[i];
    rep(i,m) cin >> a[i];
    //0-indexで宿場町nまでの累積距離
    vector<ll> s(n+1,0);
    rep(i,n-1) s[i+1]=s[i]+d[i+1];

    ll res=0;
    ll v=0;
    rep(i,m){
        res+=abs(s[v+a[i]]-s[v])%mod;
        res%=mod;
        v+=a[i];
    }
    if(res<0) res+=mod;
    COUT(res);
    



}