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

signed main(){
   int n; cin >> n;
   vector<int> a(n);
   vector<vector<int>> x(n),y(n);
    rep(i,n){
        cin >> a[i];
        x[i].resize(a[i]);
        y[i].resize(a[i]);
        rep(j,a[i]){
            cin >> x[i][j] >> y[i][j];
            x[i][j]--;
        }
    } 
    int res=0;
    for(int bit=0; bit<(1<<n); bit++){
        bool can=true;
        for(int i=0; i<n; i++){
            //iが正直者なら
            if(bit&(1<<i)){
                for(int j=0; j<x[i].size(); j++){
                    //矛盾が生じた時
                    if(  (bit&(1<<x[i][j]))^y[i][j]  ) can=false;
                    if(  ((bit>>x[i][j])&1)^y[i][j]  ) can=false;
                }
            }
        }
        if(can) chmax(res,__builtin_popcount(bit));
    }
    cout<<res<<endl;
}