bool isHappy(int n) {
    int k ,sum=0;
    while( 1){
        k = n%10;
        sum+=k*k;
        n = n/10;//1
        if( n==0){
            n = sum;
            sum=0;
            if( n>=1 && n<=9)
            break;
        }
    }
    if( n==1 || n==7 ) return 1;
    else return 0;
    
}