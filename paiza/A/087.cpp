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

    int h,w,q; cin >> h >> w >> q;
    vvc c(h+2,vc(w+2,'.'));
    range(i,1,h+1) range(j,1,w+1) cin >> c[i][j];
    rep(i,q){
        loop:
        int x1,y1,x2,y2; cin>>y1>>x1>>y2>>x2;
        if(c[y1][x1]!=c[y2][x2]){
            COUT("no");
            continue;
        }

        //xyx判定
        char m = c[y1][x1];
        int min1=x1,max1=x1,min2=x2,max2=x2;
        for(int j=min1-1; j>=0; j--) if(c[y1][j]==m || c[y1][j]=='.') min1=j;
        for(int j=max1+1; j<w+2; j++) if(c[y1][j]==m || c[y1][j]=='.') max1=j;
        for(int j=min2-1; j>=0; j--) if(c[y2][j]==m || c[y2][j]=='.') min2=j;
        for(int j=max2+1; j<w+2; j++) if(c[y2][j]==m || c[y2][j]=='.') max2=j;
        for(int j=max(min1,min2); j<=min(max1,max2); j++){
            bool can=true;
            for(int k=min(y1,y2); k<=max(y1,y2); k++){
                if(c[k][j]!='.') can=false;
            }
            if(can){
                COUT("yes");
                goto loop;
            }
        }
    }

}