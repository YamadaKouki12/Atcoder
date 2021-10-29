#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<(int)n; i++)
#define ll long long
#define all(x) (x).begin(), (x).end()
#define vint vector<int>

int main(){
    int n; cin >> n;
    vint a(n);
    rep(i,n) cin >> a[i];
    int res=0;
    rep(i,n){
        if(a[i]+res!=i+1) res++;
    }
    if(res==n) cout<<-1<<endl;
    else cout<<res<<endl;
}