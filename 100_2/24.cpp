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
#define f first
#define s second
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

vvint g;
vector<bool> seen;
int t=1;
vint d,f;

void dfs(int s){
    if(seen[s]==true) return ;
    seen[s]=true;
    f[s]=t++;
    for(int nv:g[s]){
        //if(seen[nv]==0) dfs(nv);
        dfs(nv);
    }
    d[s]=t;
    t++;
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    int n; cin >> n;
    g.resize(n);
    seen.resize(n);
    d.resize(n);
    f.resize(n);
    rep(i,n){
        int u,k; cin >> u >> k;
        rep(j,k){
            int v; cin >> v;
            g[u-1].PB(v-1);
            //g[v-1].PB(u-1);
        }
    }
    rep(i,n){
        if(seen[i]==0) dfs(i);
    }
    rep(i,n){
        cout<<i+1<<' '<<f[i]<<' '<<d[i]<<endl;
    }


}