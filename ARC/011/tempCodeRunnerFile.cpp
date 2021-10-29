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
#define vint vector<int>
#define pri_que priority_queue
#define vvint vector<vector<int>>
#define vstr vector<string>
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
const long long INF = 1e12;
const long long MOD = 1e9+7;

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

   map<char,int> map;
   map['b']=1;map['c']=1;map['d']=2;map['w']=2;
   map['t']=3;map['j']=3;map['f']=4;map['q']=4;
   map['l']=5;map['v']=5;map['s']=6;map['x']=6;
   map['p']=7;map['m']=7;map['h']=8;map['k']=8;
   map['g']=9;map['n']=9;map['z']=0;map['z']=0;

    int n; cin >> n;
    vstr s(n);
    rep(i,n) cin >> s[i];
    rep(i,n){
        int cnt=0;
       rep(j,sz(s[i])){
           char c=s[i][j];
           if('A'<=c && c<='Z') c+=32;
           if(c=='a'||c=='i'||c=='u'||c=='e'||c=='o'||c=='.'||c==','||c=='y') continue;
           //show(c);
           cout<<map[c];
           cnt++;
       }
        if(cnt && i!=n-1) cout<<' ';
    }

    

    cout<<endl;
}