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
#define vint vector<int>
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
long long lcm(long long a, long long b){return a*b/gcd(a,b);}
const long long dx[4]={1,0,-1,0};
const long long dy[4]={0,1,0,-1};
const long long INF = 1e12;
const long long MOD = 1e9+7;

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    int h,w; cin >> h >> w;
    vector<vector<char>> s(h+2,vector<char>(w+2,'#'));
    rep(i,h){
        rep(j,w){
            cin >> s[i+1][j+1];
        }
    }
    

    
    queue<P> que;
    for(int i=1; i<h+1; i++)for(int j=1; j<w+1; j++)if(s[i][j]=='#') que.push(MP(i,j));
    // rep(i,h+2){
    //     rep(j,w+2){
    //         cout<<s[i][j];
    //     }
    //     cout<<endl;
    // }
    int res=0;
    bool update=true;
    while(update){
        res++;
        update=false;
        int num=que.size();
        rep(i,num){
            P p=que.front(); que.pop();
            rep(j,4){
                if(s[p.F+dx[i]][p.S+dy[i]]=='.'){
                    update=true;
                    s[p.F+dx[i]][p.S+dy[i]]='#';
                    que.push(MP(p.F+dx[i],p.S+dy[i]));
                }
            }
        }
    }
    cout<<res<<endl;

}