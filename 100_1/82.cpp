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
#define MP make_pair
int gcd(int a,int b){return b?gcd(b,a%b):a;}
const int dx[4]={1,0,-1,0};
const int dy[4]={0,1,0,-1};
const int INF = 1e9;
const int MOD = 1e9+7;

int main(){
    int n; cin >> n;
    vector<int> table(24*3600+60*60+60+10);
    rep(i,n){
        string s1,s2; cin >> s1>>s2;
        ll time1,time2;
        time1=((s1[0]-'0')*10+(s1[1]-'0'))*3600+((s1[3]-'0')*10+(s1[4]-'0'))*60+((s1[6]-'0')*10+(s1[7]-'0'));
        time2=((s2[0]-'0')*10+(s2[1]-'0'))*3600+((s2[3]-'0')*10+(s2[4]-'0'))*60+((s2[6]-'0')*10+(s2[7]-'0'));
        table[time1]++;
        table[time2]--;
    }
    rep(i,24*3600+60*60+60+10){
        table[i+1]+=table[i];
    }
    auto itr=max_element(all(table));
    cout<<*itr<<endl;
}