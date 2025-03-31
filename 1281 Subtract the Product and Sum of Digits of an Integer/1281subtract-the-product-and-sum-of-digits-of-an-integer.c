int subtractProductAndSum(int n) {
    int a=1,b=0;
    while(n){
        int c = n%10;
        a *=c;
        b +=c;
        n /=10;
    }
    return a-b;
}