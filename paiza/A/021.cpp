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

    int h,w; cin >> h >> w;
    vs s(h); rep(i,h)cin >> s[i];
    vvb seen(h,vb(w,false));
    vp res;
    rep(i,h){
        rep(j,w){
            int area=0,line=0;
            vvb sea(h,vb(w,false));
            if(s[i][j]=='.' || seen[i][j]==true) continue;
            queue<P> que;
            que.push(mp(i,j));
            while(!que.empty()){
                P p = que.front(); que.pop();
                int y=p.F,x=p.S;
                if(seen[y][x]) continue;
                seen[y][x]=true;
                area++;
                if(y==0 || y==h-1) {line++;}
                if(x==0 || x==w-1) {line++;}
                rep(k,4){
                    int ny=y+dy[k],nx=x+dx[k];
                    if(!onBoard(ny,nx)) continue;
                    // if(s[ny][nx]=='.' && sea[ny][nx]==0){
                    //     line++; sea[ny][nx]=1;
                    // }
                    if(s[ny][nx]=='.') line++;
                    if(s[ny][nx]=='.' || seen[ny][nx]==true) continue;
                    que.push(mp(ny,nx));
                }
            }
            res.pb(mp(area,line));
        }
    }   
    sort(all(res),greater<P>());
    for(auto r:res) cout<<r.F<<' '<<r.S<<endl;
}