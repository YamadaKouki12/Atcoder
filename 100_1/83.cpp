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
    int n,m; cin>> n>> m;
    vector<ll> p(m);
    rep(i,m){
        cin >> p[i];
        p[i]--;
    }
    vector<ll> table(n);
    rep(i,m-1){
        table[min(p[i],p[i+1])]++;
        table[max(p[i],p[i+1])]--;
    }
    rep(i,n-1){
        table[i+1]+=table[i];
    }
    ll ans=0;
    rep(i,n-1){
        ll a,b,c; cin >> a >> b >> c;
        ll count=table[i];
        ans+=min(a*count,b*count+c);
    }
    COUT(ans);
}