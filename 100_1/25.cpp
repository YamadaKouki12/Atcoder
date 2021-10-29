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

char field[55][55];
int ans=0;
int h,w;

void dfs(int y,int x){
    if(field[y][x]=='1') field[y][x]='0';
    else return ;

    rep(i,4){
        int nx=x+dx[i]; int  ny=y+dy[i];
        if(nx>=0 && nx<w && ny>=0 && ny<h && field[ny][nx]=='1'){
            dfs(ny,nx);
        }
    }
}

int main(){
    cin >> w >> h;
    rep(i,h){rep(j,w){cin >> field[i][j];}}

    
    rep(i,h){
        rep(j,w){
            if(field[i][j]=='1'){
                dfs(i,j);
                ans++;
            }
        }
    }
    //rep(i,h){rep(j,w){cout << field[i][j] << ' ';}cout << endl;}

    COUT(ans);

    
}