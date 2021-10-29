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
    vvi s(n,vi(n));
    rep(i,n) rep(j,n) cin >> s[i][j];
    vi mae(n,0),usi(n,0),hid(n,0),mig(n,0);
    vi v(4); rep(i,4) cin >> v[i];
    range(i,1,n-1){
        range(j,0,n-2){
            chmax(mae[i],s[j][i]);
        }
    }
    range(i,1,n-1){
        range(j,2,n){
            chmax(usi[i],s[j][i]);
        }
    }
    range(i,1,n-1){
        range(j,0,n-2){
            chmax(hid[i],s[i][j]);
        }
    }
    range(i,1,n-1){
        range(j,2,n){
            chmax(mig[i],s[i][j]);
        }
    }
    vp res;
    range(i,1,n-1){
        range(j,1,n-1){
            // if(mae[i]==v[0]&&usi[i]==v[1]&&hid[j]==v[2]&&mig[j]==v[3]) cout<<j+1<<' '<<i+1<<endl;
            if(mae[i]==v[0]&&usi[i]==v[1]&&hid[j]==v[2]&&mig[j]==v[3]) res.pb(mp(j+1,i+1));
        }
    }
    sort(all(res));
    for(auto r:res) cout<<r.F<<' '<<r.S<<endl;
    // rep(i,n) cout<<mae[i]<<' '; cout<<endl;
    // rep(i,n) cout<<usi[i]<<' '; cout<<endl;
    // rep(i,n) cout<<hid[i]<<' '; cout<<endl;
    // rep(i,n) cout<<mig[i]<<' '; cout<<endl;
}