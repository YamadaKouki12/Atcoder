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
#define SUM(x) accumulate(x.begin(),x.end(),0)
#define MAX(x) max_element(x.begin(),x.end())
#define MIN(x) min_element(x.begin(),x.end())
#define couty cout<<'Y'<<'e'<<'s'<<endl
#define coutn cout<<'N'<<'o'<<endl
#define coutY cout<<'Y'<<'E'<<'S'<<endl
#define coutN cout<<'N'<<'O'<<endl
long long gcd(long long a,long long b){return b?gcd(b,a%b):a;}
const long long dx[4]={1,0,-1,0};
const long long dy[4]={0,1,0,-1};
const long long INF = 1e12;
const long long MOD = 1e9+7;
//fixed<<setprecision(15);

int r,c;
int sy,sx,gy,gx;
vstr s;
vvint dist;

void bfs(int sy, int sx){
    
    dist[sy][sx]=0;
    queue<P> que;
    que.push(MP(sy,sx));
    while(!que.empty()){
        P p=que.front();
        que.pop();
        int y=p.first;
        int x=p.second;
        if(p.first==gy && p.second==gx) break;
        rep(i,4){
            int ny=y+dy[i];
            int nx=x+dx[i];
            if(dist[ny][nx]!=-1) continue;
            if(ny<0||ny>=r||nx<0||nx>=c||s[ny][nx]=='#') continue;
            dist[ny][nx]=dist[y][x]+1;
            que.push(MP(ny,nx));
        }
    }
}
signed main(){
    cin >> r>>c;
    cin >> sy >> sx >> gy >> gx;
    sy--; sx--; gx--; gy--;
    s.resize(r);
    rep(i,r) cin >> s[i];
    dist.resize(r); rep(i,r) dist[i].resize(c);
    rep(i,r)rep(j,c)dist[i][j]=-1;
    //rep(i,r) cin >> s[i];
    bfs(sy,sx);
    cout<<dist[gy][gx]<<endl;
    
}