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
    int n,m; cin >> n >> m;
    int x,y;
    int ans=-1*INF;
    int f[n][n];
    rep(i,m){
        cin >> x >> y;
        x--; y--;
        f[x][y]=1;
        f[y][x]=1;
    }

    for(int bit=0; bit<(1<<n); bit++){
        bool can=true;
        vector<int> mem;
        for(int i=0; i<n; i++){
            if(bit&(1<<i)){
                mem.PB(i);
            }
            for(auto x:mem){
                for(auto y:mem){
                    if(x==y) continue;
                    if(f[x][y]!=1) can=false;
                }
            }
        }
        if(can){
            int s=mem.size();
            ans=max(ans,s);
        }
    }
    COUT(ans);


}