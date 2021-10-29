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

int n,m,k;
vector<vector<int>> friends;
vector<vector<int>> block;
vector<int> dist;

int bfs(int s){
    int ret=0;
    rep(i,n) dist[i]=-1;
    dist[s]=0;
    queue<int> que;
    que.push(s);
    while(!que.empty()){
        int v=que.front();
        que.pop();
        for(int nv:friends[v]){
            if(dist[nv]!=-1) continue;
            dist[nv]=dist[v]+1;
            que.push(nv);

            if(dist[nv]>1){
                ret++;
                for(int bc:block[s]){
                    if(nv==bc) ret--;
                }
            }
        }
        
    }
    return ret;
}
signed main(){
    cin >> n >> m >> k;
    dist.resize(n);
    friends.resize(n);
    block.resize(n);

    rep(i,m){
        int a,b; cin >> a >> b;
        a--; b--;
        friends[a].push_back(b);
        friends[b].push_back(a);
    }

    rep(i,k){
        int a,b; cin >> a >> b;
        a--; b--;
        block[a].push_back(b);
        block[b].push_back(a);
    }
    rep(i,n){
        if(i==n-1) cout<<bfs(i)<<endl;
        else cout<<bfs(i)<<' ';
    }
}