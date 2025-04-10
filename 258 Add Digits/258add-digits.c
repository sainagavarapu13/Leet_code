int addDigits(int n) {
   unsigned int sum;
   if(n/10==0) sum=n;
    while(n/10){
        sum=0;
        while(n){
            int k=n%10;
            sum+=k;
            n=n/10;
        }
        n=sum;
    }
    return sum;
}