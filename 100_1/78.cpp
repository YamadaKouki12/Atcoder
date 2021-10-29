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
    int m,n; cin >> m >> n;
    int q; cin >> q;
    char field[m][n];
    rep(i,m){rep(j,n){cin >> field[i][j];}}
    vector<vector<int>> J(m,vector<int>(n,0));
    vector<vector<int>> O(m,vector<int>(n,0));
    vector<vector<int>> I(m,vector<int>(n,0)); 

    rep(i,m){
        rep(j,n){
            if(field[i][j]=='J') J[i][j]++;
            if(field[i][j]=='O') O[i][j]++;
            if(field[i][j]=='I') I[i][j]++;
        }
    }

    vector<vector<int>> sj(m+1,vector<int>(n+1,0));
    vector<vector<int>> so(m+1,vector<int>(n+1,0));
    vector<vector<int>> si(m+1,vector<int>(n+1,0));

    rep(i,m){
        rep(j,n){
            sj[i+1][j+1]=sj[i][j+1]+sj[i+1][j]-sj[i][j]+J[i][j];
            so[i+1][j+1]=so[i][j+1]+so[i+1][j]-so[i][j]+O[i][j];
            si[i+1][j+1]=si[i][j+1]+si[i+1][j]-si[i][j]+I[i][j];
        }
    }
    

    rep(i,q){
        int y1,x1,y2,x2; cin >> y1 >> x1 >> y2 >> x2;
        //y1--; x1--; y2--; x2--;
        x1--; y1--;
        int resj=0,reso=0, resi=0;
        resj=sj[y2][x2]-sj[y1][x2]-sj[y2][x1]+sj[y1][x1];
        reso=so[y2][x2]-so[y1][x2]-so[y2][x1]+so[y1][x1];
        resi=si[y2][x2]-si[y1][x2]-si[y2][x1]+si[y1][x1];
        cout<<resj<<' '<<reso<<' '<<resi<<endl;
    }

}