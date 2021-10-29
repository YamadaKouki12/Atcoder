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

/*
signed main(){
    int x; cin >> x;
    //vector<int> ab(2*1e4+1);
    //vector<int> ab(2*1e4+1);
    vector<int> ab(2*1e2+1);
    for(int i=0; i<1e4; i++) ab.PB(pow(i,5));
    for(int i=0; i<1e4; i++) ab.PB(pow(i,5)*-1);
    sort(all(ab));
    rep(i,ab.size()){
        int a=x+ab[i];
        auto itr=lower_bound(all(ab),a);
        if(*itr-ab[i]==x) {
            if(*itr<0){
                *itr*=-1;
                cout<<-1*pow(*itr,1.0/5.0)<<' ';
            }else{
                cout<<pow(*itr,1.0/5.0)<<' ';
            }

            if(ab[i]<0){
                ab[i]*=-1;
                
                cout<<pow(ab[i],1.0/5.0)*-1<<endl;
                return 0;
            }else{
                
                cout<<pow(ab[i],1.0/5.0)<<endl;
                return 0;
            }
            //cout<<*itr<<' '<<ab[i]<<endl;
        }
    }
    */


    /*
    for(int i=0; i<ab.size(); i++){
        ab[i]=pow(i,5);
    }
    rep(i,ab.size()){
        int a=x-ab[i];
        int b=x+ab[i];
        auto itr1=lower_bound(all(ab),a);
        auto itr2=lower_bound(all(ab),b);
        if(*itr1-ab[i]==x) {cout<<*itr1<<' '<<ab[i]<<endl; return 0;}
        if(*itr1*-1-ab[i]==x) {cout<<*itr1*-1<<' '<<ab[i]<<endl; return 0;}
        if(*itr1*-1+ab[i]==x) {cout<<*itr1*-1<<' '<<-1*ab[i]<<endl; return 0;}
        if(*itr1*+ab[i]==x) {cout<<*itr1*-1<<' '<<ab[i]*-1<<endl; return 0;}
        if(*itr2-ab[i]==x) {cout<<*itr2<<' '<<ab[i]<<endl; return 0;}
        if(*itr2*-1-ab[i]==x) {cout<<*itr2*-1<<' '<<ab[i]<<endl; return 0;}
        if(*itr2*-1+ab[i]==x) {cout<<*itr2*-1<<' '<<-1*ab[i]<<endl; return 0;}
        if(*itr2*+ab[i]==x) {cout<<*itr2*-1<<' '<<ab[i]*-1<<endl; return 0;}

    }
    */
    /*
    for(int i=0; i<1e4; i++){
        ab[i]=-1*pow(i,5);
    }
    for(int i=1e4; i<2*1e4; i++){
        ab[i]=pow(i/1e4,5);
    }
    sort(all(ab));
    rep(i,ab.size()){
        int a=x-ab[i];
        auto itr=lower_bound(all(ab),a);
        if(*itr-ab[i]==x) {
            cout<<*itr << ' ' << ab[i]<<endl;
            return 0;
        }
    }
    */
   signed main(){
       int x; cin >> x;

       for(int i=-200; i<=200; i++){
           for(int j=-200; j<=200; j++){
               if(pow(i,5)-pow(j,5)==x){
                   cout<<i<<' '<<j<<endl;
                   return 0;
               }
           }
       }
   }


