#include <bits/stdc++.h>
using namespace std;

#define int long long
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define ll long long
#define all(x) (x).begin(), (x).end()


signed main(){
    int x,y,z; cin >> x>>y>>z;
    swap(x,y);
    swap(x,z);
    cout<<x<<' '<<y<<' '<<z<<endl;
}