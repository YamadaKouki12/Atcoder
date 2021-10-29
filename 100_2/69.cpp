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

const int MAX=1e5+5;

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    //int n; cin >> n;

    vb isprime(1e5+5,true);
    isprime[0]=isprime[1]=false;
    FOR(i,2,1e5+5){
        if(isprime[i]){
            for(int j=2*i; j<1e5+5; j+=i){
                isprime[j]=false;
            }
        }
    }
    
    vint a(MAX,0);
    rep(i,MAX){
        if(isprime[i]==true && isprime[(i+1)/2]==true){
            a[i]=1;
        }
    }
    //rep(i,100) cout<<a[i]<<' ';
    vint s(MAX+1,0);
    rep(i,MAX){
        s[i+1]=s[i]+a[i];
    }

    int q; cin >> q;
    rep(i,q){
        int l,r; cin >> l >> r;
        cout<<s[r+1]-s[l]<<endl;
    }

}