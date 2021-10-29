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
    //0:R,1:B,2:W,3:Black
    int s[5][n];
    rep(i,5){
        rep(j,n){
            char in;
            cin >> in;
            if(in=='R') s[i][j]=0;
            if(in=='B') s[i][j]=1;
            if(in=='W') s[i][j]=2;
            if(in=='#') s[i][j]=3;
        }
    }
    //rep(i,5){rep(j,n){cout<<s[i][j];}cout <<endl;}

    //dp[i][j]:i列目(0~n-1)を色j塗り替えた時の最小手数
    int dp[n][3];
    rep(i,n){rep(j,3){dp[i][j]=INF;}}

    //初期値決定
    rep(j,3){  
        int paint=0;      
        rep(i,5){
            if(s[i][0]!=j) paint++;
        }
        dp[0][j]=paint;
    }
    //rep(j,3){cout << dp[0][j] << endl;}

    //dpテーブル
    for(int i=0; i<n-1; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                if(j==k) continue;
                int paint=0;
                for(int l=0; l<5; l++){
                    if(s[l][i+1]!=j) paint++;
                }
                    chmin(dp[i+1][j],dp[i][k]+paint);
            }
        }
    }

    //rep(i,n){rep(j,3){cout<<dp[i][j]<<' ';}cout<<endl;}
    int ans=INF;
    rep(i,3) chmin(ans,dp[n-1][i]);
    COUT(ans);

}