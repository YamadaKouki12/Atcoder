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
#define MP make_pair
int gcd(int a,int b){return b?gcd(b,a%b):a;}
const int dx[4]={1,0,-1,0};
const int dy[4]={0,1,0,-1};
const int INF = 1e9;
const int MOD = 1e9+7;

struct edge{
    int to;
    int cost;
};

int n,m,k;
using P=pair<int,int>;
vector<bool> used;
//vector<edge> g[10010];
vector<vector<edge>> g;

int prim(){
    priority_queue<P,vector<P>,greater<P>> que;
    used.resize(n);
    rep(i,n) used[i]=false;
    que.push(make_pair(0,0));
    int ret=0;
    while(!que.empty()){
        int cost=que.top().first; int v=que.top().second;
        que.pop();
        if(used[v]) continue;
        used[v]=true;
        ret+=cost;
        for(int i=0; i<g[v].size(); i++){
            que.push(make_pair(g[v][i].cost,g[v][i].to));
        }
    }
    return ret;



}

int main(){
    cin >> n >> m >> k;
    g.resize(n);
    rep(i,m){
        int a,b,c; cin >> a >> b >> c;
        g[a].push_back(edge{b,c});
        g[b].push_back(edge{a,c});
    }
    cout<<prim()<<endl;


}