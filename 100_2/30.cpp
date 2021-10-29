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

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    int h,w,count;
    cin >> h >> w >> count;
    int res=0;
    vstr s(h);
    rep(i,h) cin >> s[i];
    vp cheese(count);
    int sx,sy;
    vvint dist(h,vint(w,-1));
    rep(i,h){
        rep(j,w){
            if(s[i][j]=='S'){sy=i; sx=j;}
            if(s[i][j]!='S'&&s[i][j]!='.'&&s[i][j]!='X'){
                cheese[s[i][j]-'0'-1].F=i;
                cheese[s[i][j]-'0'-1].S=j;
            }
        }
    }
    queue<P> que;
    dist[sy][sx]=0;
    que.push(MP(sy,sx));
    int tofind=1;
    while(!que.empty()){
        int y=que.front().F;
        int x=que.front().S;
        que.pop();

        
        if(s[y][x]-'0'==tofind){
            res+=dist[y][x];
            if(tofind==count){
                cout<<res<<endl;
                //cout<<dist[y][x]<<endl;
                return 0;
            }
            while(!que.empty()){que.pop();}
            que.push(MP(y,x));
            rep(i,h)rep(j,w)dist[i][j]=-1;
            dist[y][x]=0;
            tofind++;
        }
    
        rep(i,4){
            int ny=y+dy[i];
            int nx=x+dx[i];
            if(ny<0||ny>=h||nx<0||nx>=w||s[ny][nx]=='X') continue;
            if(dist[ny][nx]!=-1) continue;
            dist[ny][nx]=dist[y][x]+1;
            que.push(MP(ny,nx));
        }
    }
    //cout<<res<<endl;
}