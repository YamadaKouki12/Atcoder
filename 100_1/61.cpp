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
    int n,v; cin >> n>> v;
    vector<vector<int>> dist(n,vector<int>(n));
    rep(i,n){rep(j,n){dist[i][j]=(i==j?0:INF);}}
    rep(i,v){
        int a,b,c; cin >> a>> b>> c;
        a--;b--;
        dist[a][b]=c;
        dist[b][a]=c;
    }
    rep(k,n){
        rep(i,n){
            rep(j,n){
                chmin(dist[i][j],dist[i][k]+dist[k][j]);
            }
        }
    }
    int ans=INF;
    rep(i,n){
        rep(j,n){
            if(i==j) continue;
            chmin(ans,dist[i][j]);
        }
    }
    COUT(ans);

}