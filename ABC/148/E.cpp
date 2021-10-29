#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<(int)n; i++)
#define ll long long
#define all(x) (x).begin(), (x).end()
#define int long long

signed main(){
    int n; cin >> n;
    //奇数なら約数に2がないので0
    if(n%2==1){
        cout<<0<<endl;
        return 0;
    }
    //偶数なら明らかに約数は5の数が少ないので5の数を調べれば良い
    int res=0;
    int divide=10;
    while(divide<=n){
        res+=n/divide;
        divide*=5;
    }


    cout<<res<<endl;


}
