#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ld long double
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using P=pair<long long,long long>;
#define rep(i,n) for(long long i=0; i<(long long)n; i++)
#define req(i,n) for(long long i=n-1; i>=0; i--)
#define range(i,a,b) for(long long i=a; i<b; i++)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((long long)(x).size())
#define COUT(x) cout << x << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define onBoard(y,x) (y>=0 && y<h && x>=0 && x<w)
#define pri_que priority_queue
#define vint vector<int>
#define vvint vector<vector<int>>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vs vector<string>
#define vvc vector<vector<char>>
#define vc vector<char>
#define vp vector<pair<int,int>>
#define vb vector<bool>
#define vvb vector<vector<bool>>
#define show(x) cout<<#x<<"="<<x<<endl;
#define SUM(x) accumulate(x.begin(),x.end(),0)
#define MAX(x) *max_element(x.begin(),x.end())
#define MIN(x) *min_element(x.begin(),x.end())
#define couty cout<<"Yes"<<endl
#define coutn cout<<"No"<<endl
#define coutY cout<<"YES"<<endl
#define coutN cout<<"NO"<<endl
#define yn(x) cout<<(x?"Yes":"No")<<endl
#define YN(x) cout<<(x?"YES":"NO")<<endl
long long gcd(long long a,long long b){return b?gcd(b,a%b):a;}
long long lcm(long long a, long long b){return a/gcd(a,b)*b;}
const long long dx[8]={1,0,-1,0,1,-1,-1,1};
const long long dy[8]={0,1,0,-1,1,1,-1,-1};
const long long INF = 1e15;
const long long MOD = 1e9+7;

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    string s; cin >> s;
    vi a;
    rep(i,s.size()) a.pb(s[i]-'0');

    map<int,int> ma;
    rep(i,a.size()){
        ma[a[i]]++;
    }  
    vi b;
    for(auto m:ma){
        rep(i,min(m.S,3LL)) b.pb(m.F);
    }
    int n=b.size();
    //rep(i,n) cout<<b[i]<<endl;

    //DEBUG
    //rep(i,n) cout<<b[i]<<endl;

    if(n==1){
        if(b[0]==8) couty;
        else coutn;
        return 0;
        // int tmp=0;
        // rep(i,n) tmp+=b[i];
        // if(tmp%8==0) couty;
        // else coutn;
        // return 0;
    }else if(n==2){
        if((b[0]*10+b[1])%8==0 || (b[1]*10+b[0])%8==0) couty;
        else coutn;
        return 0;
    }else{
        // rep(i,n-2){
        //     range(j,i+1,n-1){
        //         range(k,j+1,n){
        //             if((b[i]+b[j]+b[k])%8==0){
        //                 couty; return 0;
        //             }
        //         }
        //     }
        // }
        rep(i,n){
            rep(j,n){
                rep(k,n){
                    if(i==j || j==k)continue;
                    if((b[i]*100+b[j]*10+b[k])%8==0){
                        //cout<<b[i]*100+b[j]*10+b[k]<<endl;
                        couty; return 0;
                    }
                }
            }
        }
    }
    coutn;
}