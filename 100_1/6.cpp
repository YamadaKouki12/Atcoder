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
    //番号は高々000~999の1000通り
    //なので1000回回して存在するかを考える．
    int n; cin >> n;
    string s; cin >> s;
    int key[3],ans=0;

    for(int i=0; i<1000; i++){
        int temp=i;
        key[2]=temp%10; temp/=10; 
        key[1]=temp%10; temp/=10;
        key[0]=temp;
        int f=0;
        rep(j,n){
            if(s[j]==('0'+key[f])) f++;
            if(f==3) break;
        }
        if(f==3) ans++;
    }
    COUT(ans);
    
}