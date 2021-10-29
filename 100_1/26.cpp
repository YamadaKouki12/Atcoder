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

vector<vector<ll>> g;
ll n,q;
vector<ll> score;

void dfs(ll v, ll p){
    for(ll nv:g[v]){
        if(nv==p) continue;
        score[nv]+=score[v];
        dfs(nv,v);
        
    }
}

int main(){
    cin >> n >> q;
    g.resize(n);
    score.resize(n);

    rep(i,n-1){
        ll a,b; cin >> a >> b;
        g[a-1].PB(b-1);
        g[b-1].PB(a-1);
    }
    rep(i,q){
        int p,x;
        cin >> p >> x;
        score[p-1]+=x;
    }
    dfs(0,-1);
    rep(i,n) cout << score[i] << ' ';
    cout << endl;

}