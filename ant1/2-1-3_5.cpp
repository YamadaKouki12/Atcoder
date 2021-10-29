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
#define yn(x) cout<<(x?"Yes":"No")<<endl
#define YN(x) cout<<(x?"YES":"NO")<<endl
long long gcd(long long a,long long b){return b?gcd(b,a%b):a;}
const long long dx[4]={1,0,-1,0};
const long long dy[4]={0,1,0,-1};
const long long INF = 1e12;
const long long MOD = 1e9+7;
//fixed<<setprecision(15);

int h,w;
int sy,sx,gy,gx;
vstr s;
vvint dist;

signed main(){
    cin >> h >> w;
    s.resize(h);
    rep(i,h) cin >> s[i];
    dist.resize(h); rep(i,h) dist[i].resize(w);
    rep(i,h)rep(j,w)dist[i][j]=INF;

    rep(i,h){
        rep(j,w){
            if(s[i][j]=='s'){
                sy=i; sx=j;
            }
            if(s[i][j]=='g'){
                gy=i; gx=j;
            }
        }
    }

    deque<P> deq;
    deq.push_front(P(sy,sx));
    dist[sy][sx]=0;
    while(!deq.empty()){
        int y=deq.front().first;
        int x=deq.front().second;
        deq.pop_front();
        rep(i,4){
            int ny=y+dy[i];
            int nx=x+dx[i];
            if(nx<0||nx>=w||ny<0||ny>=h) continue;
            bool wall=(s[ny][nx]=='#');
            if(dist[ny][nx]>dist[y][x]+wall){
                dist[ny][nx]=dist[y][x]+wall;
                if(wall) deq.push_back(P(ny,nx));
                else deq.push_front(P(ny,nx));
            }
        }
    }
    YN(dist[gy][gx]<=2);

}