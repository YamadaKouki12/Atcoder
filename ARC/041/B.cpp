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

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    int n,m; cin >> n >> m;
    vvint a(n,vint(m));
    vvint res(n,vint(m,0));
    vstr in(n);
    rep(i,n) cin >> in[i];
    rep(i,n)rep(j,m)a[i][j]=(in[i][j]-'0');


    for(int i=1; i<n-1; i++){
        for(int j=1; j<m-1; j++){
            while(a[i-1][j]>0&&a[i+1][j]>0&&a[i][j-1]>0&&a[i][j+1]>0){
                a[i-1][j]--; a[i+1][j]--; a[i][j-1]--; a[i][j+1]--;
                res[i][j]++;
            }
        }
    }
    rep(i,n){
        rep(j,m){
            cout<<res[i][j];
        }
        cout<<endl;
    }
}