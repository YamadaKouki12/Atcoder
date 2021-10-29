#include <bits/stdc++.h>
using namespace std;

#define int long long
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define ll long long
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define COUT(x) cout << x << endl;
#define PB(x) push_back(x)
#define MP make_pair
int gcd(int a,int b){return b?gcd(b,a%b):a;}
const int dx[4]={1,0,-1,0};
const int dy[4]={0,1,0,-1};
const int INF = 1e9;
const int MOD = 1e9+7;

signed main(){
    int n; cin >> n;
    vector<int> s(n);
    rep(i,n) cin >> s[i];
    int m; cin >> m;
    vector<int> t(m);
    rep(i,m) cin >> t[i];
    int res=0;
    sort(all(t));
    rep(i,n){
        auto itr=lower_bound(all(t),s[i]);
        if(*itr==s[i]) res++;
    }
    cout<<res<<endl;
}