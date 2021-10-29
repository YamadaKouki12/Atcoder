#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<(int)n; i++)
#define ll long long
#define all(x) (x).begin(), (x).end()
int main(){
    int n;
    cin >> n;
    ll sum=0;
    for(int i=1; i<=n; i++){
        if(i%3!=0 && i%5!=0) sum+=i;
    }
    cout << sum << endl;
}
