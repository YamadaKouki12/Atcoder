#include <bits/stdc++.h>
using namespace std;
#define int long long
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using P=pair<long long,long long>;
#define rep(i,n) for(long long i=0; i<(long long)n; i++)
#define FOR(i,a,b) for(long long i=a; i<b; i++)
#define ll long long
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((long long)(x).size())
#define COUT(x) cout << x << endl;
#define PB(x) push_back(x)
#define MP make_pair
#define vint vector<int>
#define vvint vector<vector<int>>
#define vstr vector<string>
long long gcd(long long a,long long b){return b?gcd(b,a%b):a;}
const long long dx[4]={1,0,-1,0};
const long long dy[4]={0,1,0,-1};
const long long INF = 1e9;
const long long MOD = 1e9+7;
signed main(){
    int k; cin >> k;
    string s; cin >> s;
    if(s.size()>k) {rep(i,k) cout<<s[i]; cout<<"..."<<endl;}
    else rep(i,s.size()) {cout<<s[i]; }
}