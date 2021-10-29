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
#define COUT(x) cout << x << endl
#define PB(x) push_back(x)
#define MP make_pair
#define vint vector<int>
#define vvint vector<vector<int>>
#define vstr vector<string>
#define vp vector<pair<int,int>>
#define vb vector<bool>
#define SUM(x) accumulate(x.begin(),x.end(),0)
#define MAX(x) *max_element(x.begin(),x.end())
#define MIN(x) *min_element(x.begin(),x.end())
#define couty cout<<'Y'<<'e'<<'s'<<endl
#define coutn cout<<'N'<<'o'<<endl
#define coutY cout<<'Y'<<'E'<<'S'<<endl
#define coutN cout<<'N'<<'O'<<endl
#define yn(x) cout<<(x?"Yes":"No")<<endl
#define YN(x) cout<<(x?"YES":"NO")<<endl
long long gcd(long long a,long long b){return b?gcd(b,a%b):a;}
long long lcm(long long a, long long b){return a*b/gcd(a,b);}
const long long dx[4]={1,0,-1,0};
const long long dy[4]={0,1,0,-1};
const long long INF = 1e12;
const long long MOD = 1e9+7;

struct edge{int to,cost;};

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    int n; cin >> n;
    vector<vector<edge>> g(n);
    vint dist(n,INF);
    rep(i,n){
        int v; cin >> v;
        int k; cin >> k;
        rep(j,k){
            int to,cost; cin >> to >> cost;
            edge e={to,cost};
            g[v].PB(e);
            e={v,cost};
            g[to].PB(e);
        }
    }
    priority_queue<P,vector<P>,greater<P>> pq;
    dist[0]=0;
    pq.push({0,0});
    while(!pq.empty()){
        P p=pq.top();
        pq.pop();
        int v=p.second;
        if(dist[v]<p.first) continue;
        for(auto nv:g[v]){
            if(dist[nv.to]>dist[v]+nv.cost){
                dist[nv.to]=dist[v]+nv.cost;
                pq.push({dist[nv.to],nv.to});
            }
        }
    }
    rep(i,n){
        cout<<i<<' '<<dist[i]<<endl;
    }

}