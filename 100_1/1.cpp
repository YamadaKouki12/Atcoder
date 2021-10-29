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



int main() {
    int n,x; cin >> n >> x;
    int a[n]; rep(i,n) a[i]=i+1;
    int ans=0;
    
    rep(i,n){
        rep(j,n){
            rep(k,n){
                if(a[i]+a[j]+a[k]==x) ans++;
            }
        }
    }
    COUT(ans);
}