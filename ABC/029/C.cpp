#include <bits/stdc++.h>
using namespace std;

#define int long long
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

vector<int> a;
int n;

void dfs(int i){
    if(i==n){
        rep(j,n){
            if(a[j]==1) cout<<'a';
            if(a[j]==2) cout<<'b';
            if(a[j]==3) cout<<'c';
        }
        cout<<endl;
    }else{
        for(int j=1; j<=3; j++){
            a[i]=j;
            dfs(i+1);
        }
    }
}
signed main(){
    cin >> n;
    a.resize(n);
    dfs(0);
}
