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
    int n,m; cin >> n >> m;
    vint a(n),b(m);
    set<int> set;
    //map<int,int> map;

    rep(i,n){
        cin >> a[i];
        set.insert(a[i]);
        //map[a[i]]++;
    }
    rep(i,m){
        cin >> b[i];
        set.insert(b[i]);
        //map[b[i]]++;
    }
    //int MAX=max(MAX(a),MAX(b));
    //rep(i,MAX+1){
    //    if(map[i]>0) cnt++;
    //}
    cout<<fixed<<setprecision(15)<<((double)n+(double)m-(double)set.size())/(double)set.size()<<endl;
    //cout<<set.size()<<' '<<cnt<<endl;


}