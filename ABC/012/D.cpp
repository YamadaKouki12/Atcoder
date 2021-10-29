#include <bits/stdc++.h>
using namespace std;

#define int long long
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

vector<vector<edge>> g;
vector<int> dist;
using P=pair<int,int>;
int n,m;

int dijkstra(int s){
    priority_queue<P,vector<P>,greater<P>> que;
    rep(i,n) dist[i]=INF;
    dist[s]=0;
    que.push(make_pair(0,s));
    while(!que.empty()){
        int cost=que.top().first;
        int v=que.top().second;
        que.pop();
        if(dist[v]<cost) continue;
        for(edge nv:g[v]){
            if(dist[nv.to]>dist[v]+nv.cost){
                dist[nv.to]=dist[v]+nv.cost;
                que.push(make_pair(dist[nv.to],nv.to));
            }
        }
    }
    auto itr=max_element(all(dist));
    return *itr;
    
}
signed main(){
    cin >> n >> m;
    g.resize(n); dist.resize(n);
    rep(i,m){
        int a,b,c; cin >> a >> b >>c;
        a--; b--;
        g[a].push_back(edge{b,c});
        g[b].push_back(edge{a,c});
    }
    int res=INF;
    rep(i,n){
        chmin(res,dijkstra(i));
    }
    cout<<res<<endl;
}

/*
signed main(){
    int n,m; cin >> n >> m;
    vector<vector<int>> dist(n,vector<int>(n,INF));
    rep(i,n) dist[i][i]=0;
    rep(i,m){
        int a,b,c; cin >> a >> b >> c;
        a--; b--;
        chmin(dist[a][b],c);
        chmin(dist[b][a],c);
    }
    rep(k,n){
        rep(i,n){
            rep(j,n){
                //if(i==j) continue;
                chmin(dist[i][j],dist[i][k]+dist[k][j]);
            }
        }
    }
    int res=INF;
    rep(i,n){
        int temp=0;
        rep(j,n){
            if(i==j) continue;
            chmax(temp,dist[i][j]);
        }
        chmin(res,temp);
    }
    cout<<res<<endl;
}
*/
/*
struct edge{
    int to;
    int cost;
};

int n,m;
vector<vector<edge>> g;
vector<int> dist;

int bfs(int s){
    queue<edge> que;
    rep(i,n) dist[i]=-1;
    dist[s]=0;
    que.push(edge{s,0});
    while(!que.empty()){
        int v=que.front().to;
        int cost=que.front().cost;
        for(edge nv:g[v]){
            if(dist[nv.to]!=-1) continue;
            dist[nv.to]=dist[v]+cost;
            que.push(edge{nv.to,nv.cost});
        }
    }
    auto itr=max_element(all(dist));
    return *itr;
}

signed main(){
    cin >> n >> m;
    g.resize(n);
    dist.resize(n);

    rep(i,m){
        int a,b,c; cin >> a >> b >> c;
        a--; b--;
        g[a].push_back(edge{b,c});
        g[b].push_back(edge{a,c});
    }
    int res=INF;

    rep(i,n){
        chmin(res,bfs(i));
    }
    cout<<res<<endl;


}
*/