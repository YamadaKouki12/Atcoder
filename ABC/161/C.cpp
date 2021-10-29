#include <bits/stdc++.h>
using namespace std;

#define int long long
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define ll long long
#define all(x) (x).begin(), (x).end()

signed main(){
    int n,k; cin >> n>> k;
    cout<<min(n%k,abs(n%k-k))<<endl;
}