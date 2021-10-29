#include <bits/stdc++.h>
using namespace std;

#define int long long
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define ll long long
#define all(x) (x).begin(), (x).end()


signed main(){
    int k; cin >> k;
    //priority_queue<int,vector<int>,greater<int>> que;
    queue<int> que;
    for(int i=1; i<=9; i++){
        que.push(i);
    }
    int x;
    //while(true){
    for(int i=0; i<k; i++){
        x=que.front();
        que.pop();
        
        if(x%10==0){
            que.push(x*10+x%10);
            que.push(x*10+x%10+1);
        //}else if(x%9==0){
        }else if(x%10==9){
            que.push(x*10+x%10-1);
            que.push(x*10+x%10);
        }else{
            que.push(x*10+x%10-1);
            que.push(x*10+x%10);
            que.push(x*10+x%10+1);
        }
    }
    cout<<x<<endl;
}
