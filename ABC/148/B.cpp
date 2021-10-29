#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<(int)n; i++)
#define ll long long
#define all(x) (x).begin(), (x).end()
int main(){
    string s,t;
    int n;
    cin >> n >> s >> t;
    rep(i,n){
        cout << s.at(i) << t.at(i);
    }
}
