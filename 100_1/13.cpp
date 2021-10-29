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
    int r,c; cin >> r >> c;
    int a[r][c];
    rep(i,r){rep(j,c){cin >> a[i][j];}}
    int ans=0;
    //int zerocount[10010]={0};

    for(int bit=0; bit<(1<<r); bit++){
        int b[r][c]; rep(i,r){rep(j,c){b[i][j]=a[i][j];}}
        int temp=0;
        for(int i=0; i<r; i++){
            if(bit&(1<<i)){
                for(int j=0; j<c; j++){
                    if(a[i][j]==1) b[i][j]=0;
                    if(a[i][j]==0) b[i][j]=1;
                }
            }
        }
        int zerocount[10010]={0};
        for(int k=0; k<c; k++){
            for(int l=0; l<r; l++){
                if(b[l][k]==0) zerocount[k]++;
            }
        }
        for(int m=0; m<c; m++){
            temp+=max(zerocount[m],r-zerocount[m]);
        }
        //rep(i,c) cout << zerocount[i] << ' ' ;
        //cout << endl;
        ans=max(ans,temp);
    }
    
    COUT(ans);
}