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

//struct node{int t,x,y;};

int binary(int bina){
    int ans = 0;
    for (int i = 0; bina>0 ; i++)
    {
        ans = ans+(bina%2)*pow(10,i);
        bina = bina/2;
    }
    return ans;
}

ll combination(ll n, ll r) {
  if ( r * 2 > n ) r = n - r;
  ll dividend = 1;
  ll divisor  = 1;
  for ( ll i = 1; i <= r; ++i ) {
    dividend *= (n-i+1);
    divisor  *= i;
  }
  return dividend / divisor;
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    vector<set<string>> p(5);
    int n; cin >> n;
    rep(i,n){
        string s; cin >> s;
        if(s[0]=='M') p[0].insert(s);
        if(s[0]=='A') p[1].insert(s);
        if(s[0]=='R') p[2].insert(s);
        if(s[0]=='C') p[3].insert(s);
        if(s[0]=='H') p[4].insert(s);
    }
    vint a(5);
    rep(i,5){
        a[i]=SZ(p[i]);
    }
    //rep(i,5) cout<<a[i]; cout<<endl;

    int res=0;
    for(int bit=0; bit<(1<<5); bit++){
        if(__builtin_popcount(bit)!=3) continue;
        //cout<<binary(bit)<<endl;
        int tmp=1;
        rep(i,5){
            if(bit&(1<<i)) tmp*=a[i];
        }
        res+=tmp;
    }
    cout<<res<<endl;
    
    






    // int n; cin >> n;
    // vector<node> a(n+1);
    // a[0].t=a[0].x=a[0].y=0;
    // rep(i,n) cin >> a[i+1].t >> a[i+1].x >> a[i+1].y;
    // FOR(i,0,n){
    //     int t=a[i+1].t-a[i].t;
    //     int d=abs(a[i+1].x-a[i].x)+abs(a[i+1].y-a[i].y);
    //     if(t<d || (t%2!=d%2)){
    //         coutn;
    //         return 0;
    //     }
    // }
    // couty;


}