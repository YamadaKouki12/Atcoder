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

struct edge{
    int to;
    int cost;
};

int n,k;
vector<vector<edge>> g;
vector<vector<int>> dist;
using P=pair<int,int>;

void warshall(){
    rep(i,n){
        rep(j,n){
            rep(k,n){
                chmin(dist[i][j],dist[i][k]+dist[k][j]);
            }
        }
    }

}

int main(){
    cin >> n >> k;
    g.resize(n);
    dist.resize(n,vector<int>(n));
    rep(i,n){rep(j,n){if(i==j) dist[i][j]=0; else dist[i][k]=INF;}}

    for(int count=0; count<k; count++){
        bool judge;
        cin >> judge;
        if(judge){
            
            int a,b,cost;
            cin >> a >> b >> cost;
            a--; b--;
            dist[a][b]=cost;
            dist[b][a]=cost;
        }else{
            int a,b;
            cin >> a >> b;
            a--; b--;
            warshall();
            if(dist[a][b]!=INF) cout << dist[a][b] << endl;
            else cout << -1 << endl;

        }
    }
}