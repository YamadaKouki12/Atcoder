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
#define vint vector<int>
#define vvint vector<vector<int>>
#define vstr vector<string>
int gcd(int a,int b){return b?gcd(b,a%b):a;}
const int dx[4]={1,0,-1,0};
const int dy[4]={0,1,0,-1};
const int INF = 1e9;
const int MOD = 1e9+7;
signed main(){
    int n; cin >>  n;
    map<string,int> map;
    vstr s(n);
    //rep(i,n) map[s[i]]=1;
    rep(i,n) {
        cin >> s[i];
        map[s[i]]++;
    }
    int max=0;
    rep(i,n){
        chmax(max,map[s[i]]);
    }
    set<string> set;
    rep(i,n) set.insert(s[i]);
    for(string s:set){
        if(map[s]==max) cout<<s<<endl;
    }
    
}