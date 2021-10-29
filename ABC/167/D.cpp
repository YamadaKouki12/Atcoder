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
    int n,k; cin >> n >> k;
    vector<int> a(n+1);
    rep(i,n) cin >> a[i+1];

    if(k<1e7){
        int pos=1;
        rep(i,k){
            pos=a[pos];
        }
        cout<<pos<<endl;
        return 0;
    }

    vector<int> dist(n+1,-1);
    dist[1]=0;
    int pos=1;
    rep(i,n){
        if(dist[a[pos]]==-1){
            dist[a[pos]]=dist[pos]+1;
        }
        pos=a[pos];
    }
    //cout<<endl;
    for(int i=1; i<=n; i++){
        //cout<<dist[i]<<" "<<endl;
    }
    vector<bool> visit(n+1,false);
    visit[1]=true;
    pos=1;
    int T;
    int start;
    rep(i,n){
        
        if(visit[a[pos]]==true){
            T=abs(dist[pos]-dist[a[pos]])+1;
            start=a[pos];
            break;
        }
        pos=a[pos];
        visit[pos]=true;
    }
    //cout<<T<<endl;
    int go=(k-dist[start])%T;
    pos=start;
    rep(i,go){
        pos=a[pos];
    }
    cout<<pos<<endl;







    /*
    vector<int> 
    int pos=1;
    int T=0;
    vector<int> visited;
    visited.add(1);
    while(true){
        pos=a[pos];

        visited.add(pos);
        T++;
        if(pos==1) break;
    }
    //cout<<T<<endl;
    int num=k%T;
    rep(i,num){
        pos=a[pos];
    }
    cout<<pos<<endl;
    */

}