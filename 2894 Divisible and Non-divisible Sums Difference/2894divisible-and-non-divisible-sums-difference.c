int differenceOfSums(int n, int m) {
    long a=0,b=0,i;
    for( i=1;i<=n;i++){
        if(i%m==0) a+=i;
        else b+=i;
    }
    return b-a;
}