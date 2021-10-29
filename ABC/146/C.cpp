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

int a,b,x;

int digits(int n){
    int ret=0;
    while(n!=0){
        n/=10;
        ret++;
    }
    return ret;
}

bool check(int n){
    if(a*n+b*digits(n)<=x) return true;
    else return false;
}

signed main(){
    cin >> a >> b >> x;
    
    int left=0, right=1e9+1;
    while(abs(right-left>1)){
        int mid=(left+right)/2;
        if(check(mid)) left=mid;
        else right=mid;
    }
    cout<<left<<endl;
    
}