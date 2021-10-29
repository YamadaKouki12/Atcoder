#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<pair<int,int>,bool>> p;
    int ans=0;
    for(int i=0; i<n; i++){
        int q; cin >> q;
        if(q==1){
            int a,b; cin >> a >> b;
            bool isAdd=true;
            if(p.size()==0){
                p.push_back(make_pair(make_pair(a,b),true));
                ans++;
                continue;
            }
            for(int j=0; j<p.size(); j++){
                if(p[j].second==false) continue;
                if(a<p[j].first.first) break;
                if(a<p[j].first.first && b<p[j].first.second) isAdd=false;
                if(p[j].first.first<=a && p[j].first.second<=b){
                    p[j].second=false;
                    ans--;
                }
            }
            if(isAdd){
                p.push_back(make_pair(make_pair(a,b),true));
                sort(p.begin(),p.end());
                ans++
            }
        }else{
            cout<<ans<<endl;
        }
    }
    cout<<"#################"<<endl;
    for(int i=0; i<p.size(); i++){
        cout<<p[i].first.first<<' '<<p[i].first.second <<' '<<p[i].second<<endl;
    }
}

/*
8
1 1 1
2
1 7 2
2
1 3 5
2
1 6 1
2
*/ 