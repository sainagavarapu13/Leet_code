int ispri(int n){
    if(n==1||n==0) return 0;
    int i;
    for(i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
bool checkPrimeFrequency(int* a, int n) {
    int f[101]={0};
    int i;
    for(i=0;i<n;i++){
        f[a[i]]++;
    }
    for(i=0;i<101;i++){
        if(ispri(f[i])){
            return 1;
        }
    }
    return 0;
}