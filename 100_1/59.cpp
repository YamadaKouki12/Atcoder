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

vector<vector<int>> g;
vector<int> dist;

int main(){
    int n,k; cin >> n >> k;
    vector<int> c(n),r(n);
    rep(i,n) cin >> c[i] >> r[i];
    g.resize(n); dist.resize(n);
    rep(i,k){
        int a,b; cin >> a >> b;
        a--; b--;
        g[a].PB(b);
        g[b].PB(a);
    }
    rep(i,n) dist[i]=INF;
    dijkstra(0);
    cout << dist[n-1] << endl;
}