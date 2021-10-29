#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0,l,r;
    cin >> n;
    vector<int> h(n);
    vector<int> e(n,0);
    for(int i=0; i<n; i++) cin >> h.at(i);

    //1 2 2 1
    
    while(h!=e){
        //find r
        for(int i=0; i<n; i++){
            if(e.at(i)!=h.at(i)){
                r=i;
                break;
            }
        }

        //find l
        l=n-1;
        for(int i=r+1; i<n; i++){
            if(e.at(i)==h.at(i)){
                l=i-1;
                break;
            } 
        }

        if(r==l){
            e.at(r)++;
        }else{
            for(int i=r; i<=l; i++){
                e.at(i)++;
            }
        }
        //cout << "r=" << r << " " << "l=" << l << endl;
        //for(int x : e) cout << x << ' ' << endl;
        //cout << endl;
        count++;
    }
    cout << count << endl;
}