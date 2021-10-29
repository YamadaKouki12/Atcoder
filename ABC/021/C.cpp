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
    int a,b; cin >> a >> b; a--; b--;
    int m; cin >> m;
    vvi g(n);
    rep(i,m){
        int x,y; cin >> x >> y;
        x--; y--;
        g[x].pb(y);
        //g[y].pb(x);
    }
    
    vi d(n,-1);
    queue<int> que;
    que.push(a);
    d[a]=0;
    while(!que.empty()){
        int v=que.front(); que.pop();
        bool goal=false;
        for(auto nv:g[v]){
            if(nv==b) {
                goal=true; break;
            }
            if(d[nv]!=-1) continue;
            d[nv]=d[v]+1;
            que.push(nv);
        }
        if(goal){
            for(auto nv:g[v]){
                d[nv]=-1;
            }
            break;
        }
    }

    vi sum(n);
    rep(i,n)sum[d[i]]++;
    int res=1;
    rep(i,n) cout<<d[i]<<' '; cout<<endl;
    rep(i,n) cout<<sum[i]<<' '; cout<<endl;
    // for(int i=0; sum[i]<d[b]; i++){
    //     res*=sum[i];
    //     res%=MOD;
    // }
    rep(i,n){
        if(sum[i]){
            res*=sum[i]; res%=MOD;
        }
    }
    cout<<res<<endl;
}
