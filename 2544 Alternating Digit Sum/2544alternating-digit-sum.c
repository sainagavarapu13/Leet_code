int rev(int a){
    int sum=0;
    while(a){
        sum=sum*10+a%10;
        a/=10;
    }
    return sum;
}
int alternateDigitSum(int n) {
    int sum=0,cnt =0;
    n = rev(n);
    while( n){
        if( cnt%2==0) sum+=n%10;
        else sum-=n%10;
        cnt++;
        n/=10;
    }
    return sum;
}