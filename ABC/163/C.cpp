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
int gcd(int a,int b){return b?gcd(b,a%b):a;}
const int dx[4]={1,0,-1,0};
const int dy[4]={0,1,0,-1};
const int INF = 1e9;
const int MOD = 1e9+7;

int main(){
    ll n; cin >> n;
    vector<ll> a(n);
    vector<ll> boss(n);
    vector<ll> count(n);
    boss[0]=0;
    rep(i,n-1) cin >> boss[i+1];
    rep(i,n) a[i]=i+1;
    sort(all(boss));
    rep(i,n){
        auto itr1=upper_bound(all(boss),a[i]);
        auto itr2=lower_bound(all(boss),a[i]);
        count[i]=itr1-itr2;
    }
    
    rep(i,n) cout << count[i] << endl;
}