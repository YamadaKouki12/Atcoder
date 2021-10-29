#include <bits/stdc++.h>
using namespace std;

#define int long long
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define ll long long
#define all(x) (x).begin(), (x).end()

signed main(){
    int n,m; cin >> n >> m;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int sum=accumulate(all(a),0);
    double std=(double)sum/(double)4/(double)m;
    int cnt=0;
    rep(i,n){
        if(a[i]>=std) cnt++;
    }
    if(cnt>=m) cout<< "Yes"<<endl;
    else cout<< "No"<<endl;
}