#include <bits/stdc++.h>
using namespace std;


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

int main(){
    int n; cin >> n;
    vector<ll> a(n),s(n+1,0);
    rep(i,n) cin >> a[i];
    rep(i,n) s[i+1]=s[i]+a[i];

    for(int k=1; k<=n; k++){
        ll res=0;
        for(int i=0; i<=n-k; i++){
            chmax(res,s[i+k]-s[i]);
        }
    cout<<res<<endl;
    }
}