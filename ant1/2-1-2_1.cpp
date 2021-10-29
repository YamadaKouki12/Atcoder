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
vstr field;
int sx,sy,gx,gy;
vector<vector<bool>> reach;

void dfs(int y,int x){
    //if(reach[y][x]==true) return ;
    reach[y][x]=true;
    int nx,ny;
    rep(i,4){
        ny=y+dy[i];
        nx=x+dx[i];
        if(nx<0||nx>=w||ny<0||ny>=h||field[ny][nx]=='#') continue;
        if(reach[ny][nx]==true) continue;
        dfs(ny,nx);
}
    }
    

signed main(){
    cin >> h >> w;
    field.resize(h);
    reach.resize(h);
    rep(i,h) reach[i].resize(w);
    rep(i,h)rep(j,w)reach[i][j]=false;
    rep(i,h) cin >> field[i];
    rep(i,h){
        rep(j,w){
            if(field[i][j]=='s'){sy=i; sx=j;}
            if(field[i][j]=='g'){gy=i; gx=j;}
        }
    }
    dfs(sy,sx);
    if(reach[gy][gx]==true) couty;
    else coutn;
}