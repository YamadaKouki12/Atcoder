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

int kaijo(int k){
    int sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
}

int main() {
    int n; cin >> n;
    int x[n],y[n]; rep(i,n) cin >> x[i] >> y[i];

    vector<int> order(n); 
    rep(i,n) order[i]=i;
    double dist=0;
    do{
        rep(i,n-1){
            dist+=sqrt(pow(x[order[i+1]]-x[order[i]],2)+pow(y[order[i+1]]-y[order[i]],2));
        }
    }while(next_permutation(all(order)));

    cout <<  fixed << setprecision(10) <<  dist/(double)kaijo(n) << endl;
}
