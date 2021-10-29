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

    int h,w,m; cin>>h>>w>>m;
    map<P,bool> map;
    vint tate(w,0),yoko(h,0);
    while(m--){
        int a,b; cin >> a >> b; a--; b--;
        tate[b]++; yoko[a]++;
        map[mp(a,b)]=true;
    }

    int m1=0,m2=0;
    m1=MAX(tate); m2=MAX(yoko);
    vint t,y;
    rep(i,w)if(tate[i]==m1)t.pb(i);
    rep(i,h)if(yoko[i]==m2)y.pb(i);

    rep(i,t.size()){
        rep(j,y.size()){
            if(map[mp(y[j],t[i])]==0){
                cout<<m1+m2<<endl;
                return 0;
            }
        }
    }
    cout<<m1+m2-1<<endl;
    // int m1=0,m2=0,i1=0,i2=0;
    // rep(i,w){
    //     if(tate[i]>m1){
    //         m1=tate[i];
    //         i1=i;
    //     }
    // }
    // rep(i,h){
    //     if(yoko[i]>m2){
    //         m2=yoko[i];
    //         i2=i;
    //     }
    // }
    // cout<<m1+m2-(map[mp(i1,i2)]?1:0)<<endl;

    
}