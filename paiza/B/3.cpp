#include <bits/stdc++.h>
using namespace std;
const int INF=(int)1e11;

int main(){
    int n; cin >> n;
    vector<pair<int,int>> p;
    int ans=0;
    for(int i=0; i<n; i++){
        int q; cin >> q;
        if(q==1){
            int a,b; cin >> a >> b;
            p.push_back(make_pair(a,b));
            bool isAdd=true;
            ans++;
            for(int j=0; j<p.size()-1; j++){
                if(a<=p[j].first && b<=p[j].second){
                    isAdd=false;
                    // ans--;
                }
                if((p[j].first<a && p[j].second<=b) || (p[j].first<=a && p[j].second<b)){
                    p[j].first=INF;
                    ans--;
                }
            }
            if(isAdd==false){
                p[p.size()-1].first=INF;
                ans--;
            }
        }else{
            cout<<ans<<endl;
        }
    }
}
