#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<(int)n; i++)
#define ll long long
#define all(x) (x).begin(), (x).end()

const int INF = 100000000;


int n;
int a[20];
int x[20][20];
int y[20][20];

int kaijo(int k){
    int sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
}


double dist(int x1, int x2, int y1, int y2){
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

int main(){
    
    int n;
    cin >> n;
    vector<int> x(n+1),y(n+1);
    for(int i=1; i<=n; i++){
        cin >> x.at(i) >> y.at(i);
    }

    vector<int> order(n);
    for(int i=0; i<n; i++) order.at(i)=i+1;

    double sum=0.0;
    do{
        for(int i=0; i<n-1; i++){
            sum+=dist(x[order[i]],x[order[i+1]],y[order[i]],y[order[i+1]]);
        }
    }while(next_permutation(all(order)));
 
    cout  << fixed << setprecision(10)<< sum/(double)kaijo(n) << endl;
}