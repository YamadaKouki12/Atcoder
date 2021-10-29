#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<(int)n; i++)
#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    string n;
    cin >> n;
    rep(i,n.size()){
        if(n[i]=='7'){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

}
