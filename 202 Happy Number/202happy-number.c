bool isHappy(int n) {
    int sum=0; 
    while(1){
        int k=n%10;
        sum+=k*k;
        n=n/10;
        if(n==0){
           n= sum;
            sum=0;
            if(n>=0&&n<=9){
                break;
            }
        }
    }
    if(n==1||n==7) return 1;
    else return 0;
}