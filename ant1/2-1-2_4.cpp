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
vvint s;

void dfs(int y,int x){
    s[y][x]=0;
    for(int i=-1; i<=1; i++){
        for(int j=-1; j<=1; j++){
            int ny=y+i; int nx=x+j;
            if(ny<0||ny>=h||nx<0||nx>=w||s[ny][nx]==0) continue;
            dfs(ny,nx);
        }
    }
    return ;
}

signed main(){
    cin >> h >> w;
    s.resize(h); rep(i,h) s[i].resize(w);
    rep(i,h)rep(j,w) cin >> s[i][j];
    int res=0;
    rep(i,h){
        rep(j,w){
            if(s[i][j]==1){
                dfs(i,j);
                res++;
            }
        }
    }
    COUT(res);

}