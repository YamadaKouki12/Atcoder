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
    ll n,k; cin >> n >> k;
    ll a[n]; rep(i,n) cin >> a[i];
    
    ll ans=INF;

    for(ll bit=0; bit<(1<<n); bit++){
    
        ll num=0; ll temp=0;
        ll b[n]; rep(i,n) b[i]=a[i];
        //0なら無視，1なら見えるように高さを変える
        for(ll i=0; i<n; i++){
            if(bit&(1<<i)){
                num++;
            }
        }
        if(num!=k) continue;

        vector<ll> build;
        for(ll i=0; i<n; i++){
            if(bit&(1<<i)){
                build.PB(i);
            }
        }

        //高さを変えてしまった方が楽？
        //0番目についてそれよりも前にそれ以上のものがあれば高さ変更
        for(int i=0; i<build[0]; i++){
            if(b[i]>=b[build[0]]) 
            temp+=b[i]-b[build[0]]+1;
            b[build[0]]=b[i]+1;
        }
        //1番目以降
        for(int i=1; i<SZ(build); i++){
            if(b[build[i]]<=b[build[i-1]]){
                temp+=b[build[i-1]]-b[build[i]]+1;
                b[build[i]]=b[build[i-1]]+1;
            }
        }




        /*0番目の建物の前にそれ以上の建物があるか
        ll maxheight=-1*INF;
        bool exist=false;
        for(int i=0; i<build[0]; i++){
            if(a[i]>=a[build[0]]) exist=true;
            maxheight=max(maxheight,a[i]);
        }

        if(exist){
            for(int i=0; i<SZ(build); i++)
            temp+=max((maxheight-a[build[i]]+i+1),(ll)0);
        }
        else{

        }
        
        ll height=a[build[0]];
        for(ll i=0; i<build[0]; i++){
            height=max(height,a[i]);
        }
        if(height!=a[build[0]]) temp+=height-a[build[0]]+1;
        
        for(ll i=1; i<SZ(build); i++){
            if(a[build[i]]<(height+i)){
                temp+=(height-a[build[i]]+i+1);
                a[build[i]]=a[build[i-1]]-a[build[i]]+1;
            }
        }
        */
        
       

        ans=min(ans,temp);
    }
    COUT(ans);
}