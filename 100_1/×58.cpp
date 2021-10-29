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

struct edge{
    int to;
    int cost;
};

vector<vector<edge>> g;
int n,m,k,s;
int p,q;

int main() {
    cin >> n >> m >> k >> s;
    cin >> p >> q;
    g.resize(n);

    vector<int> c(k);
    rep(i,k) cin >> c[i];

    rep(i,m){
        int a,b; cin >> a >> b;
        a--; b--;
        //ゴールならコストは0
        if(a==(n-1) || b==(n-1)){
            g[a].push_back(edge{b,0});
            g[b].push_back(edge{a,0});
        }else{
        //一旦コストをpで初期化
        g[a].push_back(edge{b,p});
        g[b].push_back(edge{a,p});
        }
    }

    //危険な街のコストをqにする
    
    
}