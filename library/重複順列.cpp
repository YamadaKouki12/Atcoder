vector<int> a;

void dfs(int i, const int size, const int start, const int end){
    if(i==size){
        //動作
    }else{
        for(int j=start; j<=end; j++){
            a[i]=j;
            dfs(i+1,size,start,end);
        }
    }
}
signed main(){
    int size=3;
    int start=1;
    int end=5;
    a.resize(size);
    dfs(0,size,start,end);
}