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

const int MAX=1e5+10;

int main(){
    //エラトステネスのふるいにより，それぞれ素数かどうかを求める
    vector<int> isPrime(MAX,1);
    isPrime[0]=0; isPrime[1]=0;
    for(int i=2; i<MAX; i++){
        if(isPrime[i]){
            for(int j=i*2; j<MAX; j+=i) isPrime[j]=0;
        }
    }

    //2017like?
    vector<int> a(MAX);
    for(int i=0; i<MAX; i++){
        if(i%2==0) continue;
        if(isPrime[i]&&isPrime[(i+1)/2]) a[i]=1;
    }

    vector<int> s(MAX+1,0);
    rep(i,MAX) s[i+1]=s[i]+a[i];

    int q; cin >> q;
    rep(i,q){
        int l,r; cin >> l >> r;
        cout<<s[r+1]-s[l]<<endl;
    }



}