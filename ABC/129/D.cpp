#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ld long double
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using P=pair<long long,long long>;
#define rep(i,n) for(long long i=0; i<(long long)n; i++)
#define req(i,n) for(long long i=n-1; i>=0; i--)
#define range(i,a,b) for(long long i=a; i<b; i++)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((long long)(x).size())
#define COUT(x) cout << x << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define onBoard(y,x) (y>=0 && y<h && x>=0 && x<w)
#define vint vector<int>
#define pri_que priority_queue
#define vvint vector<vector<int>>
#define vstr vector<string>
#define vvchar vector<vector<char>>
#define vchar vector<char>
#define vp vector<pair<int,int>>
#define vb vector<bool>
#define vvb vector<vector<bool>>
#define show(x) cout<<#x<<"="<<x<<endl;
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
long long lcm(long long a, long long b){return a/gcd(a,b)*b;}
const long long dx[8]={1,0,-1,0,1,-1,-1,1};
const long long dy[8]={0,1,0,-1,1,1,-1,-1};
const long long INF = 1e12;
const long long MOD = 1e9+7;

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    int h,w;cin>>h>>w;
    vstr s(h);
    rep(i,h)cin>>s[i];

    int res=0;
    vvint l(h,vint(w,0)),r(h,vint(w,0)),u(h,vint(w,0)),d(h,vint(w,0));

    //l
    rep(i,h) l[i][0]=(s[i][0]=='#'?0:1);
    rep(i,h){
        range(j,1,w){
            if(s[i][j]=='#') l[i][j]=0;
            else l[i][j]=l[i][j-1]+1;
        }
    }

    //r
    rep(i,h) r[i][w-1]=(s[i][w-1]=='#'?0:1);
    rep(i,h){
        for(int j=w-2; j>=0; j--){
            if(s[i][j]=='#') r[i][j]=0;
            else r[i][j]=r[i][j+1]+1;
        }
    }


    //u
    rep(i,w) u[0][i]=(s[0][i]=='#'?0:1);
    rep(i,w){
        for(int j=1; j<h; j++){
            if(s[j][i]=='#') u[j][i]=0;
            else u[j][i]=u[j-1][i]+1;
        }
    }
    
    //d
    rep(i,w) d[h-1][i]=(s[h-1][i]=='#'?0:1);
    rep(i,w){
        for(int j=h-2; j>=0; j--){
            if(s[j][i]=='#') d[j][i]=0;
            else d[j][i]=d[j+1][i]+1;
        }
    }

    // rep(i,h){
    //     rep(j,w){
    //         cout<<d[i][j];
    //     }
    //     cout<<endl;
    // }
    
    rep(i,h){
        rep(j,w){
            int tmp=0;
            if(s[i][j]=='.'){
                tmp=l[i][j]+r[i][j]+u[i][j]+d[i][j]-3;
                chmax(res,tmp);
            }
        }
    }
    
    cout<<res<<endl;
}