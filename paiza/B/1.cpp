#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int res=0;
    vector<pair<int,int>> p;
    for(int i=0; i<n; i++){
        int q; cin >> q;
        if(q==1){
            int a,b; cin >> a >> b;
            bool can=false;
            for(int j=0; j<p.size(); j++){
                if(a<p[j].first) break;
                if(p[j].first<=a && p[j].second<=b){
                    can=true;
                    p.erase(p.begin()+j);
                    res--;
                }
            }
            if(can || p.size()==0){
                p.push_back(make_pair(a,b));
                res++;
            }
            sort(p.begin(),p.end());
        }else{
            cout<<p.size()<<' '<<res<<endl;
            cout<<res<<endl;
        }
    }
}