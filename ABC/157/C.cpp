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
    int n,m; cin >> n>>m;
    vector<int> s(m);
    vector<char>c(m);
    rep(i,m) {cin >> s[i]>>c[i]; s[i]--;}
    
    for(int i=0; i<pow(10,n); i++){
    //for(int i=pow(10,n-1)-1; i<pow(10,n); i++){
        bool can=true;
        string str=to_string(i);
        if(str.size()<n) continue;
        rep(j,m){
            if(str[s[j]]!=c[j]){
                can=false;
                break;
            }
        }
        if(can){
            cout<<str<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    
}