#include <bits/stdc++.h>
using namespace std;

#define int long long
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define ll long long
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define COUT(x) cout<<x<<endl;
#define PB(x) push_back(x)
#define MP make_pair
int gcd(int a,int b){return b?gcd(b,a%b):a;}
const int dx[4]={1,0,-1,0};
const int dy[4]={0,1,0,-1};
const int INF = 1e9;
const int MOD = 1e9+7;

signed main(){
    int a[3][3];
    rep(i,3)rep(j,3)cin>>a[i][j];
    int n; cin>>n;
    int b[n];
    rep(i,n) cin >> b[i];
    bool hit[3][3];
    rep(i,3)rep(j,3)hit[i][j]=false;
    rep(i,3){
        rep(j,3){
            rep(k,n){
                if(a[i][j]==b[k]) hit[i][j]=true;
            }
        }
    }
    bool can=false;
    rep(i,3){
        if(hit[i][0]&&hit[i][1]&&hit[i][2]) can=true;
        if(hit[0][i]&&hit[1][i]&&hit[2][i]) can=true;
    }
    
    if(hit[0][0]&&hit[1][1]&&hit[2][2]) can=true;
    if(hit[0][2]&&hit[1][1]&&hit[2][0]) can=true;


    if(can) cout<<"Yes"<<endl;
    else COUT("No");
}