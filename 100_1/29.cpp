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


int r,c,sx,sy,gx,gy;


int main(){
    cin >> r >> c >> sx >> sy >> gx >> gy;
    sx--;sy--;gx--;gy--;
    vector<string> field(r);
    vector<vector<int>> dist(r,vector<int>(c,-1));
    
    rep(i,r) cin >> field[i];

    dist[sy][sx]=0;
    queue<pair<int,int>> que;
    que.push(make_pair(sy,sx));

    while(!que.empty()){
        pair<int,int> current_pos=que.front();
        int x=current_pos.second;
        int y=current_pos.first;
        que.pop();

        rep(i,4){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx>=0 && nx<c && ny>=0 && ny<r && field[ny][nx]=='.'){
                if(dist[ny][nx]==-1){
                    que.push(make_pair(ny,nx));
                    dist[ny][nx]=dist[y][x]+1;
                }
            }

        }
    }

    cout << dist[gx][gy] << endl;
}