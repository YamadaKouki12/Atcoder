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
    int  k[m]; int s[m][n]; int p[m];
    rep(i,m){
        cin >> k[i];
        rep(j,k[i]) cin >> s[i][j];
    } 
    rep(i,m) cin >> p[i];
    rep(i,m){rep(j,n) s[i][j]--;}

    /*入力確認
    cout << "-------------" << endl;
    cout << n <<  ' ' << m << endl;
    rep(i,m){ 
        cout << k[i] << ' ';
        rep(j,k[i]) cout << s[i][j] << ' ';
        cout << endl;
    }
    rep(i,m) cout << p[i] << ' ';
    */


    int ans=0;
    for(int bit=0; bit<(1<<n); bit++){
        bool can=true;
        for(int i=0; i<m; i++){
            int count=0;
            for(auto id:s[i]){
                if(bit&(1<<id)) count++;
            }
            if((count%2)!=p[i]) can=false;
            
        }
        if(can) ans++;
    }
    COUT(ans);

}