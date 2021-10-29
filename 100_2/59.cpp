#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ld long double
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using P=pair<long long,long long>;
#define rep(i,n) for(long long i=0; i<(long long)n; i++)
#define FOR(i,a,b) for(long long i=a; i<b; i++)
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((long long)(x).size())
#define COUT(x) cout << x << endl
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define ld long double
#define vint vector<int>
#define vvint vector<vector<int>>
#define vstr vector<string>
#define vp vector<pair<int,int>>
#define SUM(x) accumulate(x.begin(),x.end(),0)
#define MAX(x) *max_element(x.begin(),x.end())
#define MIN(x) *min_element(x.begin(),x.end())
#define couty cout<<"Yes"<<endl
#define coutn cout<<"No"<<endl
#define coutY cout<<"YES"<<endl
#define coutN cout<<"NO"<<endl
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

    
    int n,k; cin >> n >> k;
    vint c(n),r(n);
    rep(i,n) cin >> c[i] >> r[i];
    vvint g(n);
    rep(i,k){
        int a,b; cin >> a >> b; a--; b--;
        g[a].PB(b);
        g[b].PB(a);
    }

    
    vector<vector<edge>> f(n);
    rep(v,n){
        vint dist(n,-1);
        dist[v]=0;
        queue<int> que;
        que.push(v);
        while(!que.empty()){
            int to=que.front(); que.pop();
            for(int nv:g[to]){
                if(dist[nv]!=-1) continue;
                if(dist[nv]>r[to]) continue;
                dist[nv]=dist[to]+1;
                que.push(nv);
            }
        }
        rep(nv,n){
            if(v==nv) continue;
            if(dist[nv]<=r[v]){
                f[v].PB(edge{nv,c[v]});
            }
        }
    }

    vint dist(n,INF);
    dist[0]=0;
    priority_queue<P,vp,greater<P>> pq;
    pq.push(MP(0,dist[0]));
    while(!pq.empty()){
        P p=pq.top();
        pq.pop();
        int v=p.S;
        if(dist[v]<p.F) continue;
        for(auto nv:f[v]){
            if(dist[nv.to]>dist[v]+nv.cost){
                dist[nv.to]=dist[v]+nv.cost;
                pq.push(MP(dist[nv.to],nv.to));
            }
        }
    }
    cout<<dist[n-1]<<endl;
    
}