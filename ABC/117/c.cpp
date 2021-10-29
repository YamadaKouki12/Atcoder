#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<(int)n; i++)
#define ll long long
#define all(x) (x).begin(), (x).end()
int main(){

    
    int n,m;
    cin >> n >> m;
    vector<int> x(m);
    rep(i,n) cin >> x.at(i);

    sort(all(x));


    vector<int> dist(m-1);
    rep(i,m-1) dist.at(i)=x.at(i+1)=x.at(i);

    sort(all(dist));

    int ans=0;
    rep(i,m-n) ans+=dist.at(i);
    cout << ans << endl;
    
}