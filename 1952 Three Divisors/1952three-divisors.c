bool isThree(int n) {
    int fac = 1;
    for(int i=2;i<=n;i++){
        if(fac>3) return false;
        if(n%i==0) fac++;
    }
    if(fac==3) return true;
    return false;
}