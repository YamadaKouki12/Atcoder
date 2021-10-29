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
    //bit全探査とdpの2通りかけそう
    int n,q;
    cin >> n;
    int a[n]; rep(i,n) cin >> a[i];
    cin >> q;
    int m[q]; rep(i,q) cin >> m[i];
    bool can[q];
    rep(i,q) can[i]=false;

    for(int bit=0; bit<(1<<n); bit++){
        int sum=0;
        for(int i=0; i<n; i++){
            if(bit&(1<<i)){
                sum+=a[i];
            }
        }
        for(int j=0; j<q; j++){
            if(sum==m[j]) can[j]=true;
        }
    }
    rep(i,q){
        if(can[i]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}