int sumBase(int n, int k) {
    if(k==0) return 0;
    int sum=0;
    while(n){
       int ans = n%k;
        sum+=ans;
        n=n/k;
    }
    return sum;
}