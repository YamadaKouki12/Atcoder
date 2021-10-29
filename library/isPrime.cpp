bool isPrime(int n){
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    
    for(int k=3; k*k<=n; k+=2){
        if(n%k==0) return false;
    }
    
    return true;
}
