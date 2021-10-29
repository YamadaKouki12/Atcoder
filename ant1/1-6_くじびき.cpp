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
//cout << std::fixed << std::setprecision(15);
long long gcd(long long a,long long b){return b?gcd(b,a%b):a;}
const long long dx[4]={1,0,-1,0};
const long long dy[4]={0,1,0,-1};
const long long INF = 1e12;
const long long MOD = 1e9+7;
signed main(){
    int n,m; cin >> n >> m;
    vint p(n+1,0); FOR(i,1,n+1) cin >> p[i];
    
    vint ab;
    rep(i,n+1){
        rep(j,n+1){
            ab.PB(p[i]+p[j]);
        }
    }
    //for(int n:ab){cout<<n<<' ';}
    sort(all(ab));
    int res=0;
    rep(i,SZ(ab)){
        int cd=m-ab[i];
        auto itr=lower_bound(all(ab),cd);
        if(*itr>cd) itr-=1;
        if(ab[i]+*itr<=m) chmax(res,ab[i]+*itr);
    }
    cout<<res<<endl;
}