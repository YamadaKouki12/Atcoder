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
#define F first
#define S second

int r,c; 

int solve(vector<vector<int>> a,int bit){
    int ret=0;
    rep(i,r){
        if(bit&(1<<i)){
            rep(j,c){
                a[i][j]^=1;
            }
        }
    }
    int res=0;
    rep(i,c){
        int line=0;
        rep(j,r){
            if(a[j][i]==1) line++;
        }
        if(line*2<r) line=r-line;
        ret+=line;
    }
    return ret;

}

signed main(){
    //cin.tie(nullptr);
    //ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    cin >> r >> c;
    vvint a(r,vint(c));
    rep(i,r){
        rep(j,c){
            cin >> a[i][j];
        }
    }
    
    int res=0;
    for(int bit=0; bit<(1<<r); bit++){
        chmax(res,solve(a,bit));
    }
    cout<<res<<endl;


}