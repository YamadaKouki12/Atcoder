#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<(int)n; i++)
#define ll long long
#define all(x) (x).begin(), (x).end()
int main(){
    int ans=0;
    string s;
    cin >> s;
    int n=s.length()-1; //index number

    rep(i,n/2+1){
        if(s.at(i)!=s.at(n-i)){
            ans++;
        }
    }
    cout << ans << endl;
}
