int differenceOfSums(int n, int m) {
    int i,d=0,nd=0;
    for(i=1;i<=n;i++){
        if(i%m==0) d+=i;
        else nd+=i;
    }
    return nd-d;
}