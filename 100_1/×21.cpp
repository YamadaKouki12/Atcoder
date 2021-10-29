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

vector<ll> h,s;
ll n;

bool can(ll height){
    vector<ll> t_limit;
    for(int i=0; i<n; i++){
        if(height-h[i]<0) return false;
        t_limit.PB((h[i]-height)/s[i]);
    }
    sort(all(t_limit));
    for(int i=0; i<n; i++){
        if(t_limit[i]<i ) return false;
    }
    return true;

}
int main(){
    cin >> n;
    h.resize(n); s.resize(n);
    rep(i,n) cin >> h[i] >> s[i];
    
    //ある高さ以下で全て壊せるか．
    ll left=-1; ll right=1000000000000000000;
    while(abs(right-left)>1){
        ll mid=(left+right)/2;
        if(can(mid)) right=mid;
        else left=mid;
    }
    COUT(right);

}