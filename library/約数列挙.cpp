vi yakusu(int m){
    vi ret;
    for(int p=1; p*p<=m; p++){
        if(m%p!=0) continue;
        ret.pb(p);
        if(p!=m/p) ret.pb(m/p);
    }
    sort(all(ret));
    return ret;
}