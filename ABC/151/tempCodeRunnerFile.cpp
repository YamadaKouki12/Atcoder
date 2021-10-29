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

using P=pair<int,int>;
int h,w;
vector<string> maze;
int dist[25][25];

void bfs(int y, int x){
    rep(i,h)rep(j,w)dist[i][j]=-1;
    queue<P> que;
    dist[y][x]=0;
    que.push(P(y,x));
    while(!que.empty()){
        int y=que.front().first;
        int x=que.front().second;
        que.pop();
        rep(i,4){
            int ny=y+dy[i];
            int nx=x+dx[i];
            if(ny>=0&&ny<h&&nx>=0&&nx<w&&maze[ny][nx]=='.'&&dist[ny][nx]==-1){
                que.push(P(ny,nx));
                dist[ny][nx]=dist[y][x]+1;
            }
        }

    }
}

signed main(){
    cin >> h >> w;
    maze.resize(h);
    rep(i,h) cin >> maze[i];
    //rep(i,h)rep(j,w)dist[i][j]=0;
    int res=0;
    rep(i,h){
        rep(j,w){
            bfs(i,j);
            rep(k,h){
                rep(l,w){
                    chmax(res,dist[k][l]);
                }
            }
        }
    }
    cout<<res<<endl;
}