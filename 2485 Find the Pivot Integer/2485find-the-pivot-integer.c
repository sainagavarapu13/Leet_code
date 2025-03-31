int pivotInteger(int n) {
    if(n==1) return 1;
    else{
        int l=n*(n+1)/2;
    for(int i=1;i<=n;i++){
        int s=i*(i+1)/2;
        if(2*s==l+i)
           return i;
    }
    }
    return -1;
}