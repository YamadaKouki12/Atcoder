#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,k,r,s,p,count=0;
    string t;
    cin >> n >> k >> r >> s >> p >> t;

    for(int i=0; i<t.size()-k; i++){
        if(t.at(i)==t.at(i+k)){
            t.at(i+k)='n';
        }
    }
    
    for(int i=0; i<t.size(); i++){
        if(t.at(i)=='r') count+=p;
        if(t.at(i)=='s') count+=r;
        if(t.at(i)=='p') count+=s;
    }
    
    cout << count << endl;
}