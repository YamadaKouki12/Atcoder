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
#define vp vector<pair<int,int>>
#define vb vector<bool>
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

    int n; cin >> n;
    vector<vector<bool>> g(5001,vector<bool>(5001,false));
    vint x(n),y(n);
    rep(i,n){
        cin >> x[i] >> y[i];
        g[x[i]][y[i]]=true;
    }

    int res=0;
    rep(i,n){
        rep(j,n){
            if(i==j) continue;
            int px=x[j]-y[j]+y[i], py=y[j]+x[j]-x[i];
            int rx=x[i]-y[j]+y[i], ry=y[i]+x[j]-x[i];
            if(px<0||px>5000||py<0||py>5000) continue;
            if(rx<0||rx>5000||ry<0||ry>5000) continue;
            if(g[px][py]==true && g[rx][ry]==true){
                int area=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
                chmax(res,area);
            }
        }
    }
    cout<<res<<endl;
}