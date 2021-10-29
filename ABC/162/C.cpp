#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<(int)n; i++)
#define ll long long
#define all(x) (x).begin(), (x).end()

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

vector<string> field;
bool seen[510][510];

void dfs(int h, int w){
    seen[h][w]=true;

    rep(i,4){
        int nx=w+dx[i],ny=h+dy[i];
        if(nx<0 || nx>h)
    }
}

int main(){
    int h,w;
    cin >> h >> w;
    field.resize(h);
    rep(i,h) cin >> field[i];

}
