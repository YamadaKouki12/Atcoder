//#include <bits/stdc++.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <cassert>
#include <algorithm>
#include <functional>
#include <iostream>
#include <iomanip>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <utility>
#include <limits.h>
#include <bitset>
#include <set>
using namespace std;
#define int long long
#define ll long long
#define ld long double
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using P=pair<long long,long long>;
#define rep(i,n) for(long long i=0; i<(long long)n; i++)
#define FOR(i,a,b) for(long long i=a; i<b; i++)
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((long long)(x).size())
#define COUT(x) cout << x << endl
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define vint vector<int>
#define vvint vector<vector<int>>
#define vstr vector<string>
#define vp vector<pair<int,int>>
#define vb vector<bool>
#define vvb vector<vector<bool>>
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
long long lcm(long long a, long long b){return a*b/gcd(a,b);}
const long long dx[4]={1,0,-1,0};
const long long dy[4]={0,1,0,-1};
const long long INF = 1e12;
const long long MOD = 1e9+7;

string s,t;
int n,m;

string restore(int start){
    string ret;
    rep(i,start){
        if(s[i]=='?') ret.PB('a');
        else ret.PB(s[i]);
    }
    rep(i,m){
        ret.PB(t[i]);
    }
    FOR(i,start+m,n){
        if(s[i]=='?') ret.PB('a');
        else ret.PB(s[i]);
    }
    return ret;
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    cin >> s >>t;
    n=SZ(s),m=SZ(t);
    vstr res;
    if(n<m){
        cout<<"UNRESTORABLE"<<endl;
        return 0;
    }
    for(int i=0; i+m<=n; i++){
        bool can=true;
        rep(j,m){
            if(s[i+j]!=t[j] && s[i+j]!='?') {
                can=false;
                break;
            }
        }
        if(can){
            res.PB(restore(i));
        }
        // if(can){
        //     rep(j,m){
        //         s[i+j]=t[j];
        //     }
        //     rep(j,n){
        //         if(s[j]=='?') cout<<'a';
        //         else cout<<s[j];
        //     }
        //     cout<<endl;
        //     return 0;
        // }
    }
    if(res.size()>0){
        sort(all(res));
        cout<<res[0]<<endl;
    }
    else cout<<"UNRESTORABLE"<<endl;
}