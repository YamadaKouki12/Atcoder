#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<(int)n; i++)
#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    int n;
    string s;
    cin >> n >> s;

    rep(i,s.size()){
        char c=s.at(i);
        c=s.at(i)+n;
        if((int)c-'Z'>0){ 
            c=c-26;
        }
        s.at(i)=c;
    }
    rep(i,s.size()) cout << s.at(i); 
}
