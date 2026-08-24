int isprime(int n){
    int i,cnt=0;
    for(i=2;i*i<=n;i++){
        if(n%i==0){
            cnt=1;
            break;
        }
    }
    if(cnt==0) return 1;
    else return 0;
}
int maximumPrimeDifference(int* a, int n) {
    int i,k,m;
    for(i=0;i<n;i++){
        if(isprime(a[i])&&a[i]!=1){
            k=i;
            break;
        }
    }
    for(i=n-1;i>=0;i--){
        if(isprime(a[i])&&a[i]!=1){
            m=i;
            break;
        }
    }
    return abs(k-m);
}