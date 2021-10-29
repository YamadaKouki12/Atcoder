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
using P=pair<int,int>;
vector<vector<edge>> g;
vector<int> dist;

void dijkstra(int s){
    priority_queue<P, vector<P>, greater<P> > que;
    fill(all(dist),INF);
    dist[s]=0;
    que.push(make_pair(0,s));
    while(!que.empty()){
        P p=que.top();
        que.pop();
        int v=p.second;
        if(dist[v]<p.first) continue;
        for(edge nv:g[v]){
            if(dist[nv.to]>dist[v]+nv.cost){
                dist[nv.to]=dist[v]+nv.cost;
                que.push(P(dist[nv.to],nv.to));
            }
        }

    }
}

int main(){
   int v,e,r; cin >> v >> e >> r;
   g.resize(v);
   dist.resize(v);
   rep(i,e){
       int a,b,c;
       cin >> a >> b >> c;
       edge e={b,c};
       g[a].push_back(e);
   }
   dijkstra(0);
   rep(i,v) cout << dist[i] << endl;


}

