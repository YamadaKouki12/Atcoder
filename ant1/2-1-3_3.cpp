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

int h,w;
vstr s;
int dist[51][51];

void bfs(){
    dist[0][0]=0;
    queue<P> que;
    que.push(P(0,0));
    while(!que.empty()){
        int y=que.front().first;
        int x=que.front().second;
        que.pop();
        rep(i,4){
            int ny=y+dy[i];
            int nx=x+dx[i];
            if(ny<0||ny>=h||nx<0||nx>=w||s[ny][nx]=='#'||dist[ny][nx]!=-1) continue;
            dist[ny][nx]=dist[y][x]+1;
            que.push(P(ny,nx));
        }
    }
}

signed main(){
    cin >> h >> w;
    s.resize(h);
    rep(i,h)rep(j,w)dist[i][j]=-1;
    rep(i,h) cin >> s[i];
    int white=0,black=0;
    rep(i,h){rep(j,w){if(s[i][j]=='.') white++; else black++;}}
    bfs();
    if(dist[h-1][w-1]==-1) cout<<-1<<endl;
    else cout<<white-dist[h-1][w-1]-1<<endl;
}