#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ld long double
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using P=pair<long long,long long>;
#define rep(i,n) for(long long i=0; i<(long long)n; i++)
#define FOR(i,a,b) for(long long i=a; i<b; i++)
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((long long)(x).size())
#define COUT(x) cout << x << endl
#define PB(x) push_back(x)
#define MP make_pair
#define f first
#define s second
#define ld long double
#define vint vector<int>
#define vvint vector<vector<int>>
#define vstr vector<string>
#define vp vector<pair<int,int>>
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

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    int r,c; cin >> r >> c;
    int sy,sx,gy,gx; cin >> sy>>sx>>gy>>gx;
    sx--; sy--; gx--; gy--;
    vstr g(r);
    rep(i,r) cin >> g[i];

    vvint dist(r,vint(c,-1));
    dist[sy][sx]=0;
    queue<P> que;
    que.push({sy,sx});
    while(!que.empty()){
        int y=que.front().f;
        int x=que.front().s;
        que.pop();
        rep(i,4){
            int ny=y+dy[i];
            int nx=x+dx[i];
            if(nx<0||nx>=c||ny<0||ny>=r) continue;
            if(g[ny][nx]=='#') continue;
            if(dist[ny][nx]!=-1) continue;
            dist[ny][nx]=dist[y][x]+1;
            que.push({ny,nx});
        }
    }
    cout<<dist[gy][gx]<<endl;
}