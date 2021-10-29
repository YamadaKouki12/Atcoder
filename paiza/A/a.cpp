#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> trans;
    vector<string> s(n);
    for (int i = 0; i < n; i++){
        cin >> s[i];
        if (s[i][0] == '#')
            trans.push_back(s[i]);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++){
        vector<string> t = s;
        int l;
        cin >> l;
        int cnt = trans.size();
        for (int j = 0; j < l; j++){
            string a, b;
            cin >> a >> b;
            for (int k = 0; k < t.size(); k++){
                if (t[k] == a){
                    t[k] = b;
                    cnt--;
                }
            }
        }
        if(cnt==0){
            for(int j=0; j<t.size(); j++) cout<<t[j]<<' '; cout<<endl;
        }else{
            cout<<"Error: Lack of data"<<endl;
        }
    }
}
