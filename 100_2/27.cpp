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
#define F first
#define S second
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

int res=0;
int r,c; 
vvint g;

void dfs(int y, int x, int p=1){
    rep(i,4){
        int ny=y+dy[i];
        int nx=x+dx[i];
        if(nx<0||nx>=c||ny<0||ny>=r) continue;
        if(g[ny][nx]==0) continue;
        g[ny][nx]=0;
        dfs(ny,nx,p+1);
        g[ny][nx]=1;
    }
    chmax(res,p);

}
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    cin >> c >> r;
    g.resize(r,vint(c));
    rep(i,r)rep(j,c)cin >> g[i][j];

    rep(i,r){
        rep(j,c){
            if(g[i][j]==0) continue;
            g[i][j]=0;
            dfs(i,j);
            g[i][j]=1;
        }
    }
    cout<<res<<endl;
}