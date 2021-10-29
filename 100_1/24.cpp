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

vector<vector<int> > g;
vector<int> d,f,seen;
int t=1;

void dfs(int v){
    seen[v]=true;
    d[v]=t;
    t++;

    for(auto nv:g[v]){
        if(seen[nv]==true) continue;
        dfs(nv);
    }
    f[v]=t;
    t++;
    
    
}

int main(){
    int n,k; cin >> n;
    g.resize(n); d.resize(n); f.resize(n),seen.resize(n);

    rep(i,n){
        int a,k; cin >> a >> k;
        if(k==0) continue;
        int pass[k]; rep(j,k){cin >> pass[j]; pass[j]--;}
        rep(j,k){
        g[i].PB(pass[j]);
        }
    }

    /*
    cout << "graph is the following" << endl;
    rep(i,g.size()){
        cout << i << "={";
        rep(j,g[i].size()){
            cout << g[i][j] << ' ';
        }
        cout << "}" << endl;
    }
    */
    
   rep(i,n) seen[i]=false;
   dfs(0);
   
   rep(i,n){
       cout << i+1 << ' ' << d[i] << ' ' << f[i] << endl;
   }
}