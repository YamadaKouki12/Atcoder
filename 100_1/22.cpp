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

double p;

double f(double x){
    return x+p/pow(2,x/1.5);
}
int main(){
    cin >> p;

    double low=0; double high=1e9;

    int cnt=500;

    while(cnt--){
        double c1=(low*2+high)/3;
        double c2=(low+high*2)/3;

        if(f(c1)>f(c2)) low=c1;
        else high=c2;
    }
    cout << fixed << setprecision(20) << f(low) << endl;
}