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
#define COUT(x) cout << x << endl
#define PB(x) push_back(x)
#define MP make_pair
#define vint vector<int>
#define vvint vector<vector<int>>
#define vstr vector<string>
#define vp vector<pair<int,int>>
#define vb vector<bool>
#define SUM(x) accumulate(x.begin(),x.end(),0)
#define MAX(x) *max_element(x.begin(),x.end())
#define MIN(x) *min_element(x.begin(),x.end())
#define couty cout<<'Y'<<'e'<<'s'<<endl
#define coutn cout<<'N'<<'o'<<endl
#define coutY cout<<'Y'<<'E'<<'S'<<endl
#define coutN cout<<'N'<<'O'<<endl
#define yn(x) cout<<(x?"Yes":"No")<<endl
#define YN(x) cout<<(x?"YES":"NO")<<endl
long long gcd(long long a,long long b){return b?gcd(b,a%b):a;}
long long lcm(long long a, long long b){return a*b/gcd(a,b);}
const long long dx[4]={1,0,-1,0};
const long long dy[4]={0,1,0,-1};
const long long INF = 1e12;
const long long MOD = 1e9+7;
#define F first
#define S second

int binary(int bina){
    int ans = 0;
    for (int i = 0; bina>0 ; i++)
    {
        ans = ans+(bina%2)*pow(10,i);
        bina = bina/2;
    }
    return ans;
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    int n,k; cin >> n >> k;
    vint b(n); rep(i,n) cin >> b[i];

    int res=INF;
    for(int bit=0; bit<(1<<n); bit++){
        vint a=b;
        int tmp=0;
        map<int,bool> vis;
        //if(!bit&(1<<0)) continue;
        //if(!bit&(1<<(n))) continue;
        //if(bit<pow(2,n-1)) continue;
        if(__builtin_popcount(bit)<k) continue;
        rep(i,n){
            if(bit&(1<<i)){
                vis[(n-1)-i]=true;
                
            }   
        }
       
        int tallest=a[0];
        FOR(i,1,n){
            if(vis[i]==true && a[i]<=tallest){
                tmp+=tallest-a[i]+1;
                a[i]=tallest+1;
            }
            chmax(tallest,a[i]);
        }
        
        chmin(res,tmp);
    }
    cout<<res<<endl;
}