#include <bits/stdc++.h>
using namespace std;
#define int long long
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using P=pair<long long,long long>;
#define rep(i,n) for(long long i=0; i<(long long)n; i++)
#define FOR(i,a,b) for(long long i=a; i<b; i++)
#define ll long long
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((long long)(x).size())
#define COUT(x) cout << x << endl
#define PB(x) push_back(x)
#define MP make_pair
#define vint vector<int>
#define vvint vector<vector<int>>
#define vstr vector<string>
#define SUM(x) accumulate(x.begin(),x.end(),0)
#define MAX(x) max_element(x.begin(),x.end())
#define MIN(x) min_element(x.begin(),x.end())
#define couty cout<<'Y'<<'e'<<'s'<<endl
#define coutn cout<<'N'<<'o'<<endl
#define coutY cout<<'Y'<<'E'<<'S'<<endl
#define coutN cout<<'N'<<'O'<<endl
long long gcd(long long a,long long b){return b?gcd(b,a%b):a;}
const long long dx[4]={1,0,-1,0};
const long long dy[4]={0,1,0,-1};
const long long INF = 1e12;
const long long MOD = 1e9+7;
//fixed<<setprecision(15);

vstr field(10);

void dfs(int y,int x,vector<string> &s){
    s[y][x]='x';
    rep(i,4){
        int ny=y+dy[i];
        int nx=x+dx[i];
        if(nx<0||nx>=10||ny<0||ny>=10||s[ny][nx]=='x') continue;
        dfs(ny,nx,s);
    }
}

signed main(){
    rep(i,10) cin >> field[i];

    rep(i,10){
        rep(j,10){
            int res=0;
            vstr tmp=field;
            tmp[i][j]='o';
            rep(k,10){
                rep(l,10){
                    if(tmp[k][l]=='o'){
                        dfs(k,l,tmp);
                        res++;
                    }
                }
            }
            //cout<<res<<' ';
            if(res==1){
                coutY;
                return 0;
            }
        }
    }
    coutN;
}