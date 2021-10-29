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
    vector<vector<int>> d(n,vector<int>(n));
    vector<vector<int>> s(n+1,vector<int>(n+1,0));
    rep(i,n){rep(j,n){cin >> d[i][j];}}
    rep(i,n){
        rep(j,n){
            s[i+1][j+1]=s[i][j+1]+s[i+1][j]-s[i][j]+d[i][j];
        }
    }
    
    vector<ll> val(n*n+1,0);
    for(int x1=0; x1<n; x1++){
        for(int x2=x1+1; x2<n+1; x2++){
            for(int y1=0; y1<n; y1++){
                for(int y2=y1+1; y2<n+1; y2++){
                    ll area=(x2-x1)*(y2-y1);
                    ll sum=s[x2][y2]-s[x1][y2]-s[x2][y1]+s[x1][y1];
                    chmax(val[area],sum);
                }
            }
        }
    }

    int q; cin >> q; 
    rep(i,q){
        int p; cin >> p;
        ll res=0;
        rep(j,p+1){
            chmax(res,val[j]);
        }
        COUT(res);
    }
    


}