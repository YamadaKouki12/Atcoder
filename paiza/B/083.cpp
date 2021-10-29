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
#define pri_que priority_queue
#define vint vector<int>
#define vvint vector<vector<int>>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vs vector<string>
#define vvc vector<vector<char>>
#define vc vector<char>
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
const long long INF = 1e15;
const long long MOD = 1e9+7;

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    int n; cin >> n;
    int res=INF;
    vector<pair<P,P>> tate,yoko;
    rep(i,n){
        int x1,y1,x2,y2; cin >> x1>>y1>>x2>>y2;
        if(x1==x2) tate.pb(mp(mp(x1,y1),mp(x2,y2)));
        else yoko.pb(mp(mp(x1,y1),mp(x2,y2)));
    }
    n=tate.size(); int m=yoko.size();
    vp cross;
    rep(i,n){
        rep(j,m){
            if(tate[i].F.F < yoko[j].F.F || yoko[j].S.F < tate[i].F.F) continue;
            if(yoko[j].F.S < tate[i].F.S || tate[i].S.S < yoko[j].F.S ) continue;
            cross.pb(mp(tate[i].F.F,yoko[j].F.S));
        }
    }
   
    rep(bit,1<<cross.size()){
        vp four;
        if(__builtin_popcount(bit)!=4) continue;
        // rep(i,cross.size()){
        //     four.pb(cross[i]);
        // }
        rep(i,cross.size()){
            if(bit&(1<<i)) four.pb(cross[i]);
        }
        sort(all(four));
        if(four[0].F!=four[1].F || four[2].F!=four[3].F) continue;
        // if(four[0].S!=four[2].S || four[1].S!=four[3].S) continue;
        chmin(res,abs(four[1].S-four[0].S)*abs(four[0].F-four[2].F));
    }
    cout<<res<<endl;
}