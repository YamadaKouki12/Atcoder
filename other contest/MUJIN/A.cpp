#include<iostream>
using namespace std;
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    char c; cin >> c;
    if(c=='O' || c=='P' || c=='K' || c=='L') cout<<"Right"<<endl;
    else cout<<"Left"<<endl;
}