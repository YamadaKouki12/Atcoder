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
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define vint vector<int>
#define vvint vector<vector<int>>
#define vstr vector<string>
#define vp vector<pair<int,int>>
#define vb vector<bool>
#define vvb vector<vector<bool>>
#define SUM(x) accumulate(x.begin(),x.end(),0)
#define MAX(x) *max_element(x.begin(),x.end())
#define MIN(x) *min_element(x.begin(),x.end())
#define couty cout<<"Yes"<<endl
#define coutn cout<<"No"<<endl
#define coutY cout<<"YES"<<endl
#define coutN cout<<"NO"<<endl
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

    int h,w; cin >> h >> w;
    int sy,sx,gy,gx;
    vstr s(h);
    rep(i,h) cin >> s[i];
    vvint dist(h,vint(w,-1));
    rep(i,h){
        rep(j,w){
            if(s[i][j]=='s') sy=i,sx=j;
            if(s[i][j]=='g') gy=i,gx=j;
        }
    }
    dist[sy][sx]=0;
    deque<P> que;
    que.push_front(MP(sy,sx));
    while(!que.empty()){
        P p=que.front(); que.pop_front();
        int y=p.F,x=p.S;
        
        rep(i,4){
            int ny=y+dy[i],nx=x+dx[i];
            if(ny<0 || ny>=h || nx<0 ||nx>=w) continue;
            if(dist[ny][nx]!=-1) continue;
            if(s[ny][nx]=='#'){
                dist[ny][nx]=dist[y][x]+1;
                que.push_back(MP(ny,nx));
            }else{
                dist[ny][nx]=dist[y][x];
                que.push_front(MP(ny,nx));
            }
            
        }
    }
    // rep(i,h){
    //     rep(j,w){
    //         cout<<dist[i][j];
    //     }
    //     cout<<endl;
    // }
    YN(dist[gy][gx]<3);
}