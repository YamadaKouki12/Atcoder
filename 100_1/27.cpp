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


vector<vector<int>> field(100,vector<int>(100));
int m,n;
int ans=0;

int dfs(int y, int x, int sum=1){
    int res=0;
    field[y][x]=0;
    bool flag=false;
    rep(i,4){
        int nx=x+dx[i]; int ny=y+dy[i];
        if(nx>=0 && nx<m && ny>=0 && ny<=n && field[ny][nx]==1){
            res=max(dfs(ny,nx,sum+1),res);
            flag=true;
        }
    }
    field[y][x]=1;
    if(flag) return res;
    else return sum;

}

int main(){
    cin >> m >> n;
    rep(i,n){rep(j,m){cin >> field[i][j];}}

    int ans=0;
    rep(i,n){
        rep(j,m){
            if(field[i][j]==1){
                ans=max(ans,dfs(i,j));
            }
        }
    }
    COUT(ans);

}