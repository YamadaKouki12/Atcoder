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
#define PB(x) push_back(x)
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

    int n,q; cin >> n >> q;
    vector<vector<edge>> g(n);
    rep(i,q){
        int query; cin >> query;
        if(query==1){
            int a,b,c; cin >> a >> b >> c;
            a--; b--;
            edge e={b,c};
            g[a].PB(e);
            e={a,c};
            g[b].PB(e);
        }else{
            int s,go; cin >> s >> go; s--; go--;
            vint dist(n,INF);
            dist[s]=0;
            priority_queue<P,vp,greater<P>> pq;
            pq.push(MP(dist[s],s));
            while(!pq.empty()){
                P p=pq.top();
                pq.pop();
                int v=p.S;
                if(dist[v]<p.F) continue;
                for(auto nv:g[v]){
                    if(dist[nv.to]>dist[v]+nv.cost){
                        dist[nv.to]=dist[v]+nv.cost;
                        pq.push(MP(dist[nv.to],nv.to));
                    }
                }
            }
            if(dist[go]!=INF) cout<<dist[go]<<endl;
            else cout<<-1<<endl;
        }
    }
}