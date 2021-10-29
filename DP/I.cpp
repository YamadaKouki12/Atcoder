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
    int h,w; cin >> h >> w;
    char field[h][w];
    rep(i,h){rep(j,w){cin >> field[i][j];}}


    int dp[1010][1010];


    dp[0][0]=1;

    /*
    rep(i,w){
        if(field[0][i]=='#'){
            for(int j=i; j<w; j++) dp[0][j]=0;
            break;
        }
        else dp[0][i]=1;
    }
    rep(i,h){
        if(field[i][0]=='#'){
            for(int j=i; j<h; j++) dp[j][0]=0;
            break;
        }
        else dp[i][0]=1;
    }
    */


    /*
    rep(i,h-1){
        rep(j,w-1){
            if(field[i+1][j]=='#') dp[i+1][j]=0;
            if(field[i][j+1]=='#') dp[i][j+1]=0;
            dp[i+1][j+1]=(dp[i+1][j]%MOD+dp[i][j+1]%MOD)%MOD;
        }
    }
    */
   rep(i,h){
       rep(j,w){
           if(field[i+1][j]!='#') dp[i+1][j]+=dp[i][j]%MOD;
           if(field[i][j+1]!='#') dp[i][j+1]+=dp[i][j]%MOD;
           dp[i+1][j]%=MOD; dp[i][j+1]%=MOD;
       }
   }

    COUT(dp[h-1][w-1]);
    //COUT(dp[h][w]);
    cout << endl;

    //rep(i,h){rep(j,w){cout << dp[i][j];}cout << endl;}

}