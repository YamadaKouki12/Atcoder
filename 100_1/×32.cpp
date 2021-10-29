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

int main(){
    int w,h; cin >> w >> h;
    int h,w; cin >> h >> w;
    string maze[h];
    vector<vector<int>> dist(h,vector<int>(w,-1));

    rep(i,h){cin >> maze[i];}

    int sx=0,sy=0,gx=w-1,gy=h-1;

    queue<pair<int,int>> que;
    que.push(make_pair(sy,sx));
    dist[sy][sx]=0;
    while(que.empty()){
        pair<int,int> p=que.front();
        que.pop();
        int x=p.second, y=p.first;
        rep(i,4){
            int nx=x+dx[i]; int ny=y+dy[i];
            if(nx>=0 && nx<w && ny>=0 & ny<w && maze[ny][nx]=='.'){
                if(dist[ny][nx]==-1){
                    que.push(make_pair(ny,nx));
                    dist[ny][nx]=dist[y][x]+1;
                }
            }
        }
    }
    int road=0;
    rep(i,h){rep(j,w){if(maze[i][j]=='.') road++;}}
    cout << road-dist[h-1][w-1] << endl;
}