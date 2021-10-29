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

long long modpow(long long a, long long n, long long mod) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}

signed main(){
    int n,a,b;
    cin >> n >> a >> b;
    int res=0;
    res=modpow(2,n,MOD)-1;

    int comba=1,combb=1;
    for(int i=n-a+1; i<=n; i++){
        comba*=i;
        comba%=MOD;
    }
    for(int i=1; i<=a; i++){
        comba*=modpow(i,MOD-2,MOD);
        comba%=MOD;
    }

    for(int i=n-b+1; i<=n; i++){
        combb*=i;
        combb%=MOD;
    }
    for(int i=1; i<=b; i++){
        combb*=modpow(i,MOD-2,MOD);
        combb%=MOD;
    }
    res-=(comba+combb);
    res%=MOD;
    if(res>0) cout<<res<<endl;
    else cout<<res+MOD<<endl;
}