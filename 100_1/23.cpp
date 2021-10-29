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
    ll n,m; cin >> n >> m;
    vector<ll> p(n+1);
    p[0]=0;
    rep(i,n) cin >> p[i+1];
    vector<ll> ab;

    rep(i,n+1){
        rep(j,n+1){
            if(p[i]+p[j]>m) continue;
            ab.PB(p[i]+p[j]);
        }
    }
    sort(all(ab));

    ll ans=0;
    for(auto v:ab){
        ll cd=m-v;
        auto itr=upper_bound(all(ab),cd);
        if(itr==ab.begin()) chmax(ans,v);
        else ans=max(ans,v+*(itr-1));
    }
    COUT(ans);
}