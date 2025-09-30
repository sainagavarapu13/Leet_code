int triangularSum(int* a, int n) {
    int i;
    while(n-1){
    for(i=0;i<n;i++){
        if(i!=n-1){
            a[i]=(a[i]+a[i+1])%10;
        }
    }
    n--;
    }
    return a[0];
}