#include <bits/stdc++.h>
using namespace std;
#define int long long
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using P=pair<long long,long long>;
#define rep(i,n) for(long long i=0; i<(long long)n; i++)
#define FOR(i,a,b) for(long long i=a; i<b; i++)
#define ll long long
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((long long)(x).size())
#define COUT(x) cout << x << endl
#define PB(x) push_back(x)
#define MP make_pair
#define vint vector<int>
#define vvint vector<vector<int>>
#define vstr vector<string>
#define SUM(x) accumulate(x.begin(),x.end(),0)
#define MAX(x) *max_element(x.begin(),x.end())
#define MIN(x) *min_element(x.begin(),x.end())
#define couty cout<<'Y'<<'e'<<'s'<<endl
#define coutn cout<<'N'<<'o'<<endl
#define coutY cout<<'Y'<<'E'<<'S'<<endl
#define coutN cout<<'N'<<'O'<<endl
#define yn(x) cout<<(x?"Yes":"No")<<endl
#define YN(x) cout<<(x?"YES":"NO")<<endl
long long gcd(long long a,long long b){return b?gcd(b,a%b):a;}
const long long dx[4]={1,0,-1,0};
const long long dy[4]={0,1,0,-1};
const long long INF = 1e12;
const long long MOD = 1e9+7;
//cout<<fixed<<setprecision(15)<<

signed main(){
    int n,t; cin >> n >>t;
    vector<pair<int,P>> p(n);
    int sum=0;
    rep(i,n){
        int a,b; cin >> a >> b;
        p[i].second.first=a;
        p[i].second.second=b;
        p[i].first=a-b;
        sum+=b;
    }
    if(sum>t){
        cout<<-1<<endl;
        return 0;
    }
    //sort(all(p),greater<pair<int,P>>());
    sort(all(p));
    rep(i,n){
        cout<<p[i].second.first<<' '<<p[i].second.second<<' '<<p[i].first<<endl;
    }
    int point;
    rep(i,n){
        if(sum+p[i].first>t){point=i-1; break;}
        if(sum+p[i].first<=t) sum+=p[i].first;
    }
    cout<<n-(point+1)<<endl;

    

}