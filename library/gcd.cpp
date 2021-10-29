int gcd(ll a, ll b){
    if(a<b) return gcd(b,a);
    ll r;
    while(r=a%b){
        a=b;
        b=r;
    }
    return b;
}
