int commonFactors(int a, int b) {
    int d=0,c = a>b ? b : a;
    for(int i=1;i<=c;i++){
        if(a%i==0 && b%i==0) d++;;
    }
    return d;
}