#include <bits/stdc++.h>
using namespace std;

#define int long long
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define ll long long
#define all(x) (x).begin(), (x).end()

string s;
int r=0,g=0,b=0;

signed main(){
    int n;
    cin >> n;
    cin >> s;
    
    int ans=0,exclude=0;

    rep(i,n){
        if(s.at(i)=='R') r++;
        else if(s.at(i)=='G') g++;
        else b++;
    }

    ans=r*g*b;
    //cout << ans << endl;

    //二つ目の条件の除外を考える(k=2*j-i)
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            int k=2*j-i;
            if(j<k && k<n){
                if(s[i]!=s[j] && s[i]!=s[k] && s[k]!=s[j]){
                    exclude++;
                }
            }
        }
    }
    cout << ans-exclude << endl;

    
}
