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
    int n,m; cin >> n >> m;
    vector<int> p(n+1);
    p[0]=0;
    for(int i=1; i<n+1; i++){
        cin >> p[i];
    }
    sort(all(p));
    //vector<int> ab((n+1)*(n+2)/2);
    vector<int> ab;
    rep(i,n+1){
        rep(j,n+1){
            ab.PB(p[i]+p[j]);
        }
    }
    sort(all(ab));
    int res=0;
    rep(i,ab.size()){
        int cd=m-ab[i];
        auto itr=lower_bound(all(ab),cd);
        if(ab[i]+*itr==m){
            cout<<m<<endl;
            return 0;
        }else{
            if(ab[i]+(*(itr-1))<=m) chmax(res,ab[i]+(*(itr-1)));
        }
    }
    cout<<res<<endl;
    
}