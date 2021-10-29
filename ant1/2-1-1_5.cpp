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
signed main(){
    int n,m; cin >> n>>m;
    vector<vector<bool>> g(n,vector<bool>(n,false));
    rep(i,m){
        int x,y; cin >> x >> y;
        x--; y--;
        g[x][y]=true;
        g[y][x]=true;
    }
    
    int res=0;
    for(int bit=0; bit<(1<<n); bit++){
        vint mem;
        rep(i,n){
            if(bit&(1<<i)) mem.PB(i);
        }
        bool can=true;
        for(int i:mem){
            for(int j:mem){
                if(i==j) continue;
                if(g[i][j]!=true) can=false;
            }
        }
        if(can) chmax(res,SZ(mem));
    }
    cout<<res<<endl;
}