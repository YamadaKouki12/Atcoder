#include <bits/stdc++.h>
using namespace std;


template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define ll long long
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define COUT(x) cout << x << endl;
#define PB(x) push_back(x)
int gcd(int a,int b){return b?gcd(b,a%b):a;}
const int dx[4]={1,0,-1,0};
const int dy[4]={0,1,0,-1};
const int INF = 1e9;
const int MOD = 1e9+7;


//int r,c,sx,sy,gx,gy;


int main(){
    int r,c,cheese_count;
    cin >> r >> c >> cheese_count;
    vector<string> field(r);
    vector<vector<int>> dist(r,vector<int>(c,-1));
    rep(i,r) cin >> field[i];

    int sx,sy;
    //           y   x
    vector<pair<int,int>> cheese(cheese_count);

    //入力とスタート，チーズの位置決め
    rep(i,r){
        rep(j,c){
            if(field[i][j]=='S'){
                sx=j; sy=i;
            }
            if(field[i][j]!='S' && field[i][j]!='.' && field[i][j]!='X'){
                cheese[field[i][j]-'0'-1]=make_pair(j,i);
            }
        }
    }

    //bfsスタート
    queue<pair<int,int>> que;
    dist[sy][sx]=0;
    que.push(make_pair(sy,sx));
    int cheese_index=0;
    int ans=0;
    while(!que.empty()){
        pair<int,int> p=que.front();
        que.pop();
        int y=p.first; int x=p.second;
        
        
        if(field[y][x]-'0'-1==cheese_index){
            //cout << "dist["<<y<<"]["<<x<<"]="<<dist[y][x]<<endl;
            ans+=dist[y][x];
            while(!que.empty()){que.pop();}
            rep(i,r){rep(j,c){dist[i][j]=-1;}}
            dist[y][x]=0;
            cheese_index++;
        }
        /*
        if(field[y][x]==cheese_count){
            COUT(ans); return 0;
        }  */      
        rep(i,4){
            int ny=y+dy[i]; int nx=x+dx[i];
            if(ny>=0 && ny<r && nx>=0 && nx<c && field[ny][nx]!='X'){
                if(dist[ny][nx]==-1){
                    dist[ny][nx]=dist[y][x]+1;
                    que.push(make_pair(ny,nx));
                }
            }
        }

    }
    COUT(ans);

    /*チーズの位置表示
    rep(i,cheese_count){
        pair<int,int> p=cheese[i];
        cout << p.second << ' ' << p.first << endl;
    }
    
   rep(i,r){
       rep(j,c){
           cout << field[i][j] << ' ';
        }
       cout << endl;
    }
    */



}