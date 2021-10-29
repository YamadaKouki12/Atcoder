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


vector<int> shop;
vector<int> home;

bool isok(int mid,int key){
    if(shop[key]>=mid) return true;
    else return false;
}


int main() {
    int d; cin >> d;
    int n; cin >> n;
    int m; cin >> m;
    
    shop.resize(n+1);
    home.resize(m);
    ll sum=0;

    shop[0]=0;
    for(int i=1; i<SZ(shop)-1; i++){
        cin >> shop[i];
    }
    shop[n]=d;
    for(int i=0; i<m; i++){
        cin >> home[i];
    }

    sort(all(shop));

    for(int i=0; i<SZ(home); i++){
        int left=-1; int right=SZ(shop);
        while(abs(right-left)>1){
            int mid=(right+left)/2;
            if(shop[mid]>=home[i]) right=mid;
            else left=mid;
        }
        sum+=min(abs(shop[left]-home[i]),abs(home[i]-shop[right]));
    }
    COUT(sum);
}