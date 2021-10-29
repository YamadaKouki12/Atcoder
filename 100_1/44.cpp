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
    int n; cin >>n;
    vector<int> a(1000);
    for(int i=1; i<1000; i++){
        a[i-1]=i*(i+1)*(i+2)/6;
    }
    vector<int> b(1000);
    for(int i=1; i<1000; i++){
        a[i-1]=i*(i+1)*(i+2)/6;
    }
    //dp1[i]:iを表すために必要な最小個数
    int dp1[1000];
    rep(i,1000) dp1[i]=INF;
    dp1[0]=0;
    dp1[1]=1;

    for(int i=1; i<=n; i++){
        for(int j=0; j<1000; j++){
            if(i-a[j]>=0) chmin(dp1[i],dp1[i-a[j]]+1);
        }
    }
    rep(i,10) cout << a[i] << ' '; 
    cout << endl;
    COUT(dp1[n]);


}