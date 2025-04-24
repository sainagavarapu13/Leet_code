int dig(int i){
 int sum=0;
        while( i!=0){
            sum+=i%10;
            i/=10;
        }
        return sum;
}
int countEven(int num) {
    int cnt=0;
    for( int i=2;i<=num;i++){
       int sum = dig(i);
        if( sum%2==0) cnt++;
    }
    return cnt;
}