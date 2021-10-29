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
    int h,w; cin >> h >> w;
    int c[10][10];
    int a[h][w];
    rep(i,10){rep(j,10){cin >> c[i][j];}}
    rep(i,h){rep(j,w){cin >> a[i][j];}}

    int ans=0;
    rep(k,10){rep(i,10){rep(j,10){chmin(c[i][j],c[i][k]+c[k][j]);}}}
    rep(i,h){
        rep(j,w){
            if(a[i][j]>=0){
                ans+=c[a[i][j]][1];
            }
        }
    }
    COUT(ans);
    
    
}