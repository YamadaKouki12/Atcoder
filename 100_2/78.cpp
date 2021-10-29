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
#define ld long double
#define vint vector<int>
#define vvint vector<vector<int>>
#define vstr vector<string>
#define vp vector<pair<int,int>>
#define vb vector<bool>
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
    int q; cin >> q;
    vvint J(h,vint(w));
    vvint O(h,vint(w));
    vvint I(h,vint(w));
    rep(i,h){
        rep(j,w){
            char s; cin >> s;
            if(s=='J') J[i][j]++;
            if(s=='O') O[i][j]++;
            if(s=='I') I[i][j]++;
        }
    }
    vvint sj(h+1,vint(w+1,0));
    vvint so(h+1,vint(w+1,0));
    vvint si(h+1,vint(w+1,0));
    rep(i,h){
        rep(j,w){
            sj[i+1][j+1]=sj[i][j+1]+sj[i+1][j]-sj[i][j]+J[i][j];
            so[i+1][j+1]=so[i][j+1]+so[i+1][j]-so[i][j]+O[i][j];
            si[i+1][j+1]=si[i][j+1]+si[i+1][j]-si[i][j]+I[i][j];
        }
    }
    
    rep(i,q){
        int x1,x2,y1,y2;
        cin >> y1 >> x1 >> y2 >> x2;
        x1--; x2--; y1--; y2--;
        cout<<sj[y2+1][x2+1]-sj[y1][x2+1]-sj[y2+1][x1]+sj[y1][x1]<<' ';
        cout<<so[y2+1][x2+1]-so[y1][x2+1]-so[y2+1][x1]+so[y1][x1]<<' ';
        cout<<si[y2+1][x2+1]-si[y1][x2+1]-si[y2+1][x1]+si[y1][x1]<<endl;
    }
    
}