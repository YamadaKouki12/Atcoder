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
    vector<int> a(n);
    rep(i,n){cin>>a[i]; a[i]--;}
    vector<int> dist(n,-1);
    dist[0]=0;
    int pos=0;
    int t=0;
    int start=0;
    rep(i,n){
        if(dist[a[pos]]!=-1){
            t=dist[pos]-dist[a[pos]]+1;
            start=a[pos];
            break;
        }
        dist[a[pos]]=dist[pos]+1;
        pos=a[pos];
    }
    
    if(t==0){
        pos=0;
        rep(i,n){
            pos=a[pos];
        }
        cout<<pos<<endl;
    }else{
        //k-=dist[start];
        //k%=t;
        pos=start;
        k=(k-dist[start])%t;
        rep(i,k){
            pos=a[pos];
        }
        cout<<pos+1<<endl;
    }
    //cout<<"k="<<k<<endl;
    //cout<<"dist[1]="<<dist[1]<<endl;
    //cout<<"t="<<t<<endl;
    //cout<<"start="<<start<<endl;
}