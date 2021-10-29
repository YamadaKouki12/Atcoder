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
#define vint vector<int>
int gcd(int a,int b){return b?gcd(b,a%b):a;}
const int dx[4]={1,0,-1,0};
const int dy[4]={0,1,0,-1};
const int INF = 1e9;
const int MOD = 1e9+7;
//cout << std::fixed << std::setprecision(15);

signed main(){
    cout << std::fixed << std::setprecision(15);
    int n,k; cin >>  n>> k;
    vector<double> p(n);
    rep(i,n) cin >> p[i];
    vector<double> e(n);
    rep(i,n) e[i]=(p[i]+1)/2;
    vector<double> s(n+1,0);
    rep(i,n){
        s[i+1]=s[i]+e[i];
    }
    double res=0;
    for(int i=0; i<=n-k; i++){
        chmax(res,s[i+k]-s[i]);
    }
    cout<<res<<endl;


}