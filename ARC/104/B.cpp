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

    int n; string s; cin >>n >> s;
    int res=0;
    vvi wa(n+1,vi(4,0));
    if(s[0]=='A') wa[1][0]++;
    else if(s[0]=='T') wa[1][1]++;
    else if(s[0]=='C') wa[1][2]++;
    else wa[1][3]++;
    range(i,1,n){
        wa[i+1][0]=wa[i][0];
        wa[i+1][1]=wa[i][1];
        wa[i+1][2]=wa[i][2];
        wa[i+1][3]=wa[i][3];
        if(s[i]=='A') wa[i+1][0]++;
        else if(s[i]=='T') wa[i+1][1]++;
        else if(s[i]=='C') wa[i+1][2]++;
        else wa[i+1][3]++;
    }
    rep(i,n){
        for(int j=i+1; j<n+1; j++){
            if(wa[j][0]-wa[i][0]==wa[j][1]-wa[i][1] && wa[j][2]-wa[i][2]==wa[j][3]-wa[i][3]) res++;
        }
    }
    cout<<res<<endl;
}