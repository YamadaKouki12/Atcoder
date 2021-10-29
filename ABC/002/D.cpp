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

signed main(){
    int n,m; cin >> n >> m;
    vector<vector<int>> g(n,vector<int>(n,0));
    rep(i,m){
        int x,y; cin >> x >> y;
        x--; y--;
        g[x][y]=1;
        g[y][x]=1;
    }
    
    int res=0;
    for(int bit=0; bit<(1<<n); bit++){
        int max=__builtin_popcount(bit);
        bool can=true;

        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if((bit&(1<<i)) && (bit&(1<<j))){
                    if(g[i][j]!=1) can=false;
                }
            }
        }
        
        if(can) chmax(res,max);
    }
    cout<<res<<endl;
}