#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,k;
    cin >> a >> b >> k;
    if(a>=k){ 
        a=a-k;
    }else if(k<=a+b){
        b=b-(k-a);
        a=0;
    }else{
        a=0;b=0;
    }
    cout << a << ' ' << b << endl;
}