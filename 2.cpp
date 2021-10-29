#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define show(x) cout<<#x<<"="<<x<<endl;


signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    int n,k; cin >> n >> k;
    string s; cin >> s;
    int ans=0;
    for(int i=0; i<n; i++) ans+=(s[i]=='.');
    s+="..";
    //連続して並んでいる組の個数
    int three=0,two=0,one=0;
    for(int i=0; i<n; i++){
      if(s[i]=='S' && s[i+1]=='S' && s[i+2]=='S'){
        three++;
        i+=2;
      }else if(s[i]=='S' && s[i+1]=='S'){
        two++;
        i++;
      }else if(s[i]=='S'){
        one++;
      }
    }
  
    ans+=min(k,three)*3;
    ans+=max(0,min(k-three,two))*2;
    ans+=max(0,min(k-three-two,one))*1;
    show(three);show(two);show(one);
    cout<<ans<<endl;

}