int reverse(int x){
    long long n=0;
    while(x){
        if(n>214748364 || n<(-214748364)) return 0;
        n = n*10 + x%10;
        x = x/10;
    }
    return n;
}