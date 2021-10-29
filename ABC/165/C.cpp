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

vector<int> A(10);
vector<int> a,b,c,d;
int n,m,q;
int ans=0;

void dfs(int size=0, int last=1){
    if(size==n){
        int sum=0;
        rep(i,q){
            if((A[b[i]]-A[a[i]])==c[i]){
                sum+=d[i];
            }
        }
        chmax(ans,sum);
        return ;
    }else{
        for(int j=last; j<=m; j++){
            A[size]=j;
            dfs(size+1,j);
        }
    }
}

signed main(){
    cin >> n >> m>> q;
    a.resize(q); b.resize(q); c.resize(q); d.resize(q);
    rep(i,q){
        cin >> a[i] >> b[i]>>c[i]>>d[i];
        a[i]--; b[i]--;
    }
    dfs();
    cout<<ans<<endl;
}
