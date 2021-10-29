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
    string s; cin >> s;
    deque<char> dq;
    rep(i,s.size()) dq.push_back(s[i]);
    
    int q; cin >> q;
    bool rev=false;
    rep(i,q){
        int type; cin >> type;
        if(type==1){
            rev=!rev;
        }else{
            int fb; cin >> fb;
            char add; cin >> add;
            if(rev==true){
                if(fb==1) dq.push_back(add);
                else dq.push_front(add);
            }else{
                if(fb==1) dq.push_front(add);
                else dq.push_back(add);
            }
        }
    }
    if(rev) for(int i=dq.size()-1; i>=0; i--) cout<<dq[i];
    else rep(i,dq.size()) cout<<dq[i];
    cout<<endl;
}