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

int kaijo(int k){
    int sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
}

int main() {
    int n; cin >> n;
    char in[8][8];
    rep(i,8){rep(j,8){in[i][j]='.';}}
    rep(i,n){
        int a,b; 
        cin >> a >> b;
        in[a][b]='Q';
    }
    vector<int> tate(8),yoko(8);
    rep(i,8){
        tate[i]=i; yoko[i]=i;
    }
    do{
        char board[8][8]; rep(i,8){rep(j,8){board[i][j]=in[i][j];}}
        do{
            rep(i,8){
                board[tate[i]][yoko[i]]='Q';
            }
            int count_q=0;

            rep(i,8){
                rep(j,8){if(board[i][j]=='Q') count_q++;}}
            if(count_q!=8) continue;

            //斜めをチェック
            //左上
            bool can=true;
            for(int sum=0; sum<8; sum++){
                int count=0;
                for(int i=0; i<=sum; i++){
                    if(board[i][sum-i]=='Q') count++;
                }
                if(count>1) can=false;
            }
            //右下
            for(int sum=8; sum<=14; sum++){
                int count=0;
                for(int i=1; i<=7; i++){
                    if(board[sum-i][i]=='Q') count++;
                }
                if(count>1) can=false;
            }
            /*右上
            for(int i=0; sum<=14; sum++){
                int count=0;
                for(int i=1; i<=7; i++){
                    if(board[sum-i][i]=='Q') count++;
                }
                if(count>1) can=false;
            }
            //左下
            for(int sum=8; sum<=14; sum++){
                int count=0;
                for(int i=1; i<=7; i++){
                    if(board[sum-i][i]=='Q') count++;
                }
                if(count>1) can=false;
            }
            */

            if(can){
                rep(i,8){
                    rep(j,8){
                        cout << board[i][j];
                    }
                    cout << endl;
                }
                
            }

        }while(next_permutation(all(yoko)));
    }while(next_permutation(all(tate)));


}

 /*
        rep(i,8){
            rep(j,8){
                cout << board[i][j];
            }
            cout << endl;
        }
        cout << endl;
        */