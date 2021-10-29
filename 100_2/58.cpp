#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ld long double
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using P=pair<long long,long long>;
#define rep(i,n) for(long long i=0; i<(long long)n; i++)
#define req(i,n) for(long long i=n-1; i>=0; i--)
#define range(i,a,b) for(long long i=a; i<b; i++)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((long long)(x).size())
#define COUT(x) cout << x << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define onBoard(y,x) (y>=0 && y<h && x>=0 && x<w)
#define vint vector<int>
#define pri_que priority_queue
#define vvint vector<vector<int>>
#define vstr vector<string>
#define vp vector<pair<int,int>>
#define vb vector<bool>
#define vvb vector<vector<bool>>
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
const long long dx[8]={1,0,-1,0,1,-1,-1,1};
const long long dy[8]={0,1,0,-1,1,1,-1,-1};
const long long INF = 1e12;
const long long MOD = 1e9+7;

struct edge{int to,cost;};

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    int n,m,k,s; cin >> n >> m >> k >> s;
    int p,q; cin >> p  >> q;
    vint c(k);
    map<int,bool> zombie;
    rep(i,k) {cin >> c[i]; c[i]--; zombie[c[i]]=true;}
    vector<vector<edge>> g(n);
    rep(i,m){
        int a,b; cin >> a >> b;
        a--; b--;
        g[a].pb(edge{b,0});
        g[b].pb(edge{a,0});
    }
    vint dist(n,INF);
    map<int,bool> dange;
    rep(i,k){
        rep(i,n) dist[i]=INF;
        queue<int> que;
        que.push(c[i]);
        dist[c[i]]=0;
        while(!que.empty()){
            int v=que.front(); que.pop();
            if(dist[v]>s) break;
            for(auto nv:g[v]){
                if(dist[nv.to]!=INF) continue;
                dist[nv.to]=dist[v]+1;
                que.push(nv.to);
            }
        }
        rep(i,n){
            if(dist[i]<=s) dange[i]=true;
        }
    }
    //rep(i,n) if(dange[i]) cout<<i<<endl;
    rep(v,n){
        for(auto &nv:g[v]){
            if(zombie[v] || zombie[nv.to]) nv.cost=INF;
            else nv.cost=(dange[nv.to]?q:p);
        }
    }

    rep(i,n) dist[i]=INF;
    dist[0]=0;
    pri_que<P,vp,greater<P>> pq;
    pq.push(mp(0,0));
    while(!pq.empty()){
        P p=pq.top(); pq.pop();
        int v=p.S;
        if(dist[v]<p.F) continue;
        for(auto nv:g[v]){
            if(dist[nv.to]>dist[v]+nv.cost){
                dist[nv.to]=dist[v]+nv.cost;
                pq.push(mp(dist[nv.to],nv.to));
            }
        }
    }
    cout<<dist[n-1]-(dange[n-1]?q:p)<<endl;
}