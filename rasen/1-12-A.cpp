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
    int v,e; cin >> v >> e;
    vector<vector<edge>> g(v);
    vector<bool> used(v,false);
    rep(i,e){
        int a,b,cost; cin >> a >> b >> cost;
        //a--; b--;
        edge e={b,cost};
        g[a].push_back(e);
        e={a,cost};
        g[b].PB(e);
    }
    priority_queue<P,vector<P>,greater<P>> pq;
    pq.push({0,0});
    int res=0;
    while(!pq.empty()){
        int cost=pq.top().first;
        int v=pq.top().second;
        pq.pop();
        if(used[v]!=false) continue;
        used[v]=true;
        res+=cost;
        for(auto nv:g[v]){
            //cout<<nv.to<<endl;
            pq.push({nv.cost,nv.to});
        }
        //cout<<endl;
        
    }
    cout<<res<<endl;
}
/*
struct unionFind
{
  // par[i]：データiが属する木の親の番号。i == par[i]のとき、データiは木の根ノードである
  vector<int> par;
  // sizes[i]：根ノードiの木に含まれるデータの数。iが根ノードでない場合は無意味な値となる
  vector<int> sizes;

  unionFind(int n) : par(n), sizes(n, 1) {
    // 最初は全てのデータiがグループiに存在するものとして初期化
    rep(i,n) par[i] = i;
  }

  // データxが属する木の根を得る
  int find(int x) {
    if (x == par[x]) return x;
    return par[x] = find(par[x]);  // 根を張り替えながら再帰的に根ノードを探す
  }

  // 2つのデータx, yが属する木をマージする
  void unite(int x, int y) {
    // データの根ノードを得る
    x = find(x);
    y = find(y);

    // 既に同じ木に属しているならマージしない
    if (x == y) return;

    // xの木がyの木より大きくなるようにする
    if (sizes[x] < sizes[y]) swap(x, y);

    // xがyの親になるように連結する
    par[y] = x;
    sizes[x] += sizes[y];
    // sizes[y] = 0;  // sizes[y]は無意味な値となるので0を入れておいてもよい
  }

  // 2つのデータx, yが属する木が同じならtrueを返す
  bool same(int x, int y) {
    return find(x) == find(y);
  }

  // データxが含まれる木の大きさを返す
  int size(int x) {
    return sizes[find(x)];
  }
};

struct node{
    int cost,from,to;
    bool operator<(const struct node &arg) const{
        return cost<arg.cost;
    };
};

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    int n,v; cin >> n >> v;
    vvint g(n);
    unionFind uf(n);
    vector<node> es(v);
    rep(i,v){
        cin >> es[i].from >> es[i].to >> es[i].cost;
    }
    sort(all(es));
    int res=0;
    rep(i,v){
        if(uf.same(es[i].from,es[i].to)) continue;
        uf.unite(es[i].from,es[i].to);
        res+=es[i].cost;
    }
    cout<<res<<endl;
}
*/