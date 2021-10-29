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
#define vvint vector<vector<int>>
int gcd(int a,int b){return b?gcd(b,a%b):a;}
const int dx[4]={1,0,-1,0};
const int dy[4]={0,1,0,-1};
const int INF = 1e9;
const int MOD = 1e9+7;

int modpow(int a, int n, int mod) {
    int res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}

signed main(){
    int x,y; cin >> x >> y;
    if((x+y)%3!=0) {cout<<0<<endl; return 0;}
    
    int n=(2*y-x)/3;
    int m=(2*x-y)/3;

    if(n<0 || m<0){cout<<0<<endl; return 0;}

    int res=1;
    for(int i=m+1; i<=m+n; i++){
        res*=i%MOD;
        res%=MOD;
    }
    for(int i=1; i<=n; i++){
        res*=modpow(i,MOD-2,MOD);
        res%=MOD;
    }
    cout<<res<

    
}