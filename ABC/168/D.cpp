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
#define COUT(x) cout << x << endl;
#define PB(x) push_back(x)
#define MP make_pair
#define vint vector<int>
#define vvint vector<vector<int>>
#define vstr vector<string>
long long gcd(long long a,long long b){return b?gcd(b,a%b):a;}
const long long dx[4]={1,0,-1,0};
const long long dy[4]={0,1,0,-1};
const long long INF = 1e9;
const long long MOD = 1e9+7;

int n,m;
vvint g;
vint dist;
vint ans;
void dfs(int s=0){
    queue<int> que;
    dist[s]=0;
    que.push(s);
    while(!que.empty()){
        int v=que.front();
        que.pop();
        for(int nv:g[v]){
            if(dist[nv]!=-1) continue;
            
            dist[nv]=dist[v]+1;
            ans[nv]=v;
            que.push(nv);
        }
    }
}
signed main(){
    cin >> n >> m;
    g.resize(n);
    dist.resize(n);
    ans.resize(n);
    rep(i,n) dist[i]=-1;

    rep(i,m){
        int a,b; cin >> a>>b; a--; b--;
        g[a].PB(b);
        g[b].PB(a);
    }
    dfs();
    cout<<"Yes"<<endl;
    FOR(i,1,n) cout<<ans[i]+1<<endl;
    

}