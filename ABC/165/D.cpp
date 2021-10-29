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

signed main(){
    int a,b,n; cin >> a >> b >> n;
    int max=0;
    /*
    for(int i=n; i>=n-b&&i>0; i--){
        if(max<floor(a*i/b)-a*floor(i/b)){
            max=floor(a*i/b)-a*floor(i/b);
        }
    }
    */
    int x=min(n,b-1);
    cout<<floor(a*x/b)-a*floor(x/b)<<endl;
    //cout<<max<<endl;
}