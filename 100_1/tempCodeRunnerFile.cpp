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
    ll h,w,k,v; cin >> h >> w >> k >> v;
    vector<vector<ll>> a(h,vector<ll>(w));

    rep(i,h){rep(j,w){cin >> a[i][j];}}
    vector<vector<ll>> s(h+1,vector<ll>(w+1,0));
    rep(i,h){
        rep(j,w){
            s[i+1][j+1]=s[i][j+1]+s[i+1][j]-s[i][j]+a[i][j];
        }
    }
    ll res=0;
    for(ll y1=0; y1<h; y1++){
        for(ll y2=y1+1; y2<h+1; y2++){
            for(ll x1=0; x1<w; x1++){
                for(ll x2=x1+1; x2<w+1; x2++){
                    ll area=(y2-y1)*(x2-x1);
                    ll price=s[y2][x2]-s[y1][x2]-s[y2][x1]+s[y1][x1];
                    if(area*k+price<=v && res<area){
                        chmax(res,area);
                        cout<<y1<<' '<<y2<<' '<<x1<<' '<<x2<<endl;                    
                    }

                }
            }
        }
    }
    cout<<res<<endl;
}