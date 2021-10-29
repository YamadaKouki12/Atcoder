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
long long lcm(long long a, long long b){return a/gcd(a,b)*b;}
const long long dx[8]={1,0,-1,0,1,-1,-1,1};
const long long dy[8]={0,1,0,-1,1,1,-1,-1};
const long long INF = 1e12;
const long long MOD = 1e9+7;

ld dist(int x1,int y1,int x2,int y2){
    ld diff=pow(x1-x2,2)+pow(y1-y2,2);
    return sqrt(diff);
}
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    vint x(3),y(3);
    int r;
    cin >> x[0]>> y[0] >> r >>x[1]>>y[1]>>x[2]>>y[2];
    rep(i,3){x[i]+=100; y[i]+=100;}

    vvint color(201,vint(201,0));
    rep(i,201){
        rep(j,201){
            if((dist(x[0],y[0],i,j))<=r) color[i][j]=1;
        }
    }
    rep(i,201){
        rep(j,201){
            if(x[1]<=i && i<=x[2] && y[1]<=j && j<=y[2]){
                color[i][j]=(color[i][j]==1?0:2);
                //if(color[i][j]==0) color[i]=2;
                //else color[i]=0;
            }
        }
    }
    bool red=false,blue=false;
    rep(i,201){
        rep(j,201){
            if(color[i][j]==1) red=true;
            if(color[i][j]==2) blue=true;
        }
    }
    YN(red);
    YN(blue);
}