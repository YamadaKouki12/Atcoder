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
    //入口と出口は客の移動する中の真ん中にあるはず
    //入口と出口，いずれかの客の場所と一致？

    int n; cin >> n;
    ll a[n+1],b[n+1];
    ll ans=9223372036854775807;
    ll in,out; 

    for(int i=1; i<=n; i++){
        cin >> a[i] >> b[i];
    }
    
    //入口と出口，いずれかの客の場所と一致？
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            ll temp=0;
            in=a[i]; out=b[j];
            for(int k=1; k<=n; k++){
                temp+=min((llabs(in-a[k])+llabs(a[k]-b[k])+llabs(b[k]-out)),llabs(in-b[k])+llabs(a[k]-b[k])+llabs(a[k]-out));
            }
            chmin(ans,temp);
        }
    }
    COUT(ans);
}