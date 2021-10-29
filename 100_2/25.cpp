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
//const long long dx[4]={1,0,-1,0};
//const long long dy[4]={0,1,0,-1};
const int dx[8] = {-1,0,1,-1,1,-1,0,1};
const int dy[8] = {-1,-1,-1,0,0,1,1,1};
const long long INF = 1e12;
const long long MOD = 1e9+7;

int h,w;


void dfs(int y,int x,vvint &s){
    if(s[y][x]==0) return ;
    s[y][x]=0;
    rep(i,8){
        int ny=y+dy[i];
        int nx=x+dx[i];
        if(ny<0||ny>=h||nx<0||nx>=w) continue;
        if(s[ny][nx]==0) continue;
        dfs(ny,nx,s);
    }
}
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    while(cin >> w >> h){
        if(h==0) return 0;
        vvint s(55,vint(55));
        int res=0;
        //s.resize(h);
        rep(i,h)rep(j,w) cin >> s[i][j];
        rep(i,h){
            rep(j,w){
                if(s[i][j]==0) continue;
                dfs(i,j,s);
                res++;
            }
        }
        cout<<res<<endl;
    }
    
}