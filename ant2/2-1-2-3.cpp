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
#define vint vector<int>
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
const long long dx[4]={1,0,-1,0};
const long long dy[4]={0,1,0,-1};
const long long INF = 1e12;
const long long MOD = 1e9+7;

int n,m;
vvint g;
vint dist;
bool can=true;

void dfs(int v,int before=-1){
    dist[v]=0;
    for(auto nv:g[v]){
        if(nv==before) continue;
        if(dist[nv]!=-1){
            can=false;
            return ;
        }else{
            dist[nv]=dist[v]+1;
            dfs(nv,v);
        }
    }
}
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    cin >> n>> m;
    g.resize(n); dist.resize(n);
    rep(i,n) dist[i]=-1;
    rep(i,m){
        int a,b; cin >> a >> b;
        a--; b--;
        g[a].PB(b);
        g[b].PB(a);
    }

    int res=0;
    rep(i,n){
        if(dist[i]==-1){
            can=true;
            dfs(i);
            if(can) res++;
        }
    }
    cout<<res<<endl;
}